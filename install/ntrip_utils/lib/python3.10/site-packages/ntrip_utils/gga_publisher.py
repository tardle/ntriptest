import rclpy
from rclpy.node import Node
from datetime import datetime
from nmea_msgs.msg import Sentence

class GgaPublisher(Node):
    def __init__(self):
        super().__init__('gga_publisher')
        self.publisher_ = self.create_publisher(Sentence, 'nmea', 10)
        self.timer = self.create_timer(10, self.publish_gga)  # 1 Hz

    def publish_gga(self):
        now = datetime.utcnow()

        # Format UTC time as hhmmss.ss
        utc_time = now.strftime('%H%M%S') + '.00'

        # Melbourne CBD coordinates
        lat = "3748.8160"
        lat_dir = "S"
        lon = "14457.7860"
        lon_dir = "E"

        fix_quality = "1"    # GPS fix
        num_sats = "08"
        hdop = "1.0"
        altitude = "7.0"
        altitude_units = "M"
        geoid_height = "46.9"
        geoid_units = "M"

        # Empty fields for DGPS age and station ID
        gga_body = f"GPGGA,{utc_time},{lat},{lat_dir},{lon},{lon_dir},{fix_quality},{num_sats},{hdop},{altitude},{altitude_units},{geoid_height},{geoid_units},,"

        checksum = self.calculate_checksum(gga_body)
        gga_sentence = f"${gga_body}*{checksum}"

        msg = Sentence()
        msg.header.stamp = self.get_clock().now().to_msg()  # current ROS2 time
        msg.header.frame_id = 'gps'
        msg.sentence = gga_sentence
        self.publisher_.publish(msg)
        self.get_logger().info(f'Published GGA: {gga_sentence}')

    def calculate_checksum(self, sentence: str) -> str:
        """Calculate NMEA 0183 checksum (XOR of all bytes between $ and *)"""
        checksum = 0
        for c in sentence:
            checksum ^= ord(c)
        return f"{checksum:02X}"

def main(args=None):
    rclpy.init(args=args)
    node = GgaPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()