import rclpy
from rclpy.node import Node
from mavros_msgs.msg import RTCM

class RTCMBridge(Node):
    def __init__(self):
        super().__init__('rtcm_bridge_node')
        
        # Subscriber to /rtcm from NTRIP client
        self.subscription = self.create_subscription(
            RTCM,
            '/rtcm',
            self.rtcm_callback,
            10
        )

        # Publisher to /mavros/rtcm
        self.publisher = self.create_publisher(
            RTCM,
            '/mavros/gps_rtk/send_rtcm',
            10
        )

        self.get_logger().info("RTCM Bridge Node started — forwarding /rtcm → /mavros/gps_rtk/send_rtcm")

    def rtcm_callback(self, msg):
        # Forward the message directly
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = RTCMBridge()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()