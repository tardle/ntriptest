// MESSAGE MLRS_RADIO_LINK_FLOW_CONTROL support class

#pragma once

namespace mavlink {
namespace storm32 {
namespace msg {

/**
 * @brief MLRS_RADIO_LINK_FLOW_CONTROL message
 *
 * Injected by a radio link endpoint into the MAVLink stream for purposes of flow control. Should be emitted only by components with component id MAV_COMP_ID_TELEMETRY_RADIO.
 */
struct MLRS_RADIO_LINK_FLOW_CONTROL : mavlink::Message {
    static constexpr msgid_t MSG_ID = 60047;
    static constexpr size_t LENGTH = 7;
    static constexpr size_t MIN_LENGTH = 7;
    static constexpr uint8_t CRC_EXTRA = 55;
    static constexpr auto NAME = "MLRS_RADIO_LINK_FLOW_CONTROL";


    uint16_t tx_ser_rate; /*< [bytes/s] Transmitted bytes per second, UINT16_MAX: invalid/unknown. */
    uint16_t rx_ser_rate; /*< [bytes/s] Recieved bytes per second, UINT16_MAX: invalid/unknown. */
    uint8_t tx_used_ser_bandwidth; /*< [c%] Transmit bandwidth consumption. Values: 0..100, UINT8_MAX: invalid/unknown. */
    uint8_t rx_used_ser_bandwidth; /*< [c%] Receive bandwidth consumption. Values: 0..100, UINT8_MAX: invalid/unknown. */
    uint8_t txbuf; /*< [c%] For compatibility with legacy method. UINT8_MAX: unknown. */


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
        ss << "  tx_ser_rate: " << tx_ser_rate << std::endl;
        ss << "  rx_ser_rate: " << rx_ser_rate << std::endl;
        ss << "  tx_used_ser_bandwidth: " << +tx_used_ser_bandwidth << std::endl;
        ss << "  rx_used_ser_bandwidth: " << +rx_used_ser_bandwidth << std::endl;
        ss << "  txbuf: " << +txbuf << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << tx_ser_rate;                   // offset: 0
        map << rx_ser_rate;                   // offset: 2
        map << tx_used_ser_bandwidth;         // offset: 4
        map << rx_used_ser_bandwidth;         // offset: 5
        map << txbuf;                         // offset: 6
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> tx_ser_rate;                   // offset: 0
        map >> rx_ser_rate;                   // offset: 2
        map >> tx_used_ser_bandwidth;         // offset: 4
        map >> rx_used_ser_bandwidth;         // offset: 5
        map >> txbuf;                         // offset: 6
    }
};

} // namespace msg
} // namespace storm32
} // namespace mavlink
