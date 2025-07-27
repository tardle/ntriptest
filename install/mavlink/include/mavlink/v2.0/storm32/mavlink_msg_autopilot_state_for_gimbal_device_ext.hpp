// MESSAGE AUTOPILOT_STATE_FOR_GIMBAL_DEVICE_EXT support class

#pragma once

namespace mavlink {
namespace storm32 {
namespace msg {

/**
 * @brief AUTOPILOT_STATE_FOR_GIMBAL_DEVICE_EXT message
 *
 * Addition to message AUTOPILOT_STATE_FOR_GIMBAL_DEVICE.
 */
struct AUTOPILOT_STATE_FOR_GIMBAL_DEVICE_EXT : mavlink::Message {
    static constexpr msgid_t MSG_ID = 60000;
    static constexpr size_t LENGTH = 22;
    static constexpr size_t MIN_LENGTH = 22;
    static constexpr uint8_t CRC_EXTRA = 4;
    static constexpr auto NAME = "AUTOPILOT_STATE_FOR_GIMBAL_DEVICE_EXT";


    uint8_t target_system; /*<  System ID. */
    uint8_t target_component; /*<  Component ID. */
    uint64_t time_boot_us; /*< [us] Timestamp (time since system boot). */
    float wind_x; /*< [m/s] Wind X speed in NED (North,Est, Down). NAN if unknown. */
    float wind_y; /*< [m/s] Wind Y speed in NED (North, East, Down). NAN if unknown. */
    float wind_correction_angle; /*< [rad] Correction angle due to wind. NaN if unknown. */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  target_system: " << +target_system << std::endl;
        ss << "  target_component: " << +target_component << std::endl;
        ss << "  time_boot_us: " << time_boot_us << std::endl;
        ss << "  wind_x: " << wind_x << std::endl;
        ss << "  wind_y: " << wind_y << std::endl;
        ss << "  wind_correction_angle: " << wind_correction_angle << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_boot_us;                  // offset: 0
        map << wind_x;                        // offset: 8
        map << wind_y;                        // offset: 12
        map << wind_correction_angle;         // offset: 16
        map << target_system;                 // offset: 20
        map << target_component;              // offset: 21
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_boot_us;                  // offset: 0
        map >> wind_x;                        // offset: 8
        map >> wind_y;                        // offset: 12
        map >> wind_correction_angle;         // offset: 16
        map >> target_system;                 // offset: 20
        map >> target_component;              // offset: 21
    }
};

} // namespace msg
} // namespace storm32
} // namespace mavlink
