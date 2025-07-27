// MESSAGE SYSTEM_TIME support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief SYSTEM_TIME message
 *
 * The system time is the time of the master clock.
        This can be emitted by flight controllers, onboard computers, or other components in the MAVLink network.
        Components that are using a less reliable time source, such as a battery-backed real time clock, can choose to match their system clock to that of a SYSTEM_TYPE that indicates a more recent time.
        This allows more broadly accurate date stamping of logs, and so on.
        If precise time synchronization is needed then use TIMESYNC instead.
 */
struct SYSTEM_TIME : mavlink::Message {
    static constexpr msgid_t MSG_ID = 2;
    static constexpr size_t LENGTH = 12;
    static constexpr size_t MIN_LENGTH = 12;
    static constexpr uint8_t CRC_EXTRA = 137;
    static constexpr auto NAME = "SYSTEM_TIME";


    uint64_t time_unix_usec; /*< [us] Timestamp (UNIX epoch time). */
    uint32_t time_boot_ms; /*< [ms] Timestamp (time since system boot). */


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
        ss << "  time_unix_usec: " << time_unix_usec << std::endl;
        ss << "  time_boot_ms: " << time_boot_ms << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << time_unix_usec;                // offset: 0
        map << time_boot_ms;                  // offset: 8
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> time_unix_usec;                // offset: 0
        map >> time_boot_ms;                  // offset: 8
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
