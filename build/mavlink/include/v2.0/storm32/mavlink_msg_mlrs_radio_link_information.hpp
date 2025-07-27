// MESSAGE MLRS_RADIO_LINK_INFORMATION support class

#pragma once

namespace mavlink {
namespace storm32 {
namespace msg {

/**
 * @brief MLRS_RADIO_LINK_INFORMATION message
 *
 * Radio link information. Tx: ground-side device, Rx: vehicle-side device.
        The values of the fields in this message do normally not or only slowly change with time, and for most times the message can be send at a low rate, like 0.2 Hz.
        If values change then the message should temporarily be send more often to inform the system about the changes.
        The target_system field should normally be set to the system id of the system the link is connected to, typically the flight controller.
        The target_component field can normally be set to 0, so that all components of the system can receive the message.
      
 */
struct MLRS_RADIO_LINK_INFORMATION : mavlink::Message {
    static constexpr msgid_t MSG_ID = 60046;
    static constexpr size_t LENGTH = 28;
    static constexpr size_t MIN_LENGTH = 28;
    static constexpr uint8_t CRC_EXTRA = 171;
    static constexpr auto NAME = "MLRS_RADIO_LINK_INFORMATION";


    uint8_t target_system; /*<  System ID (ID of target system, normally flight controller). */
    uint8_t target_component; /*<  Component ID (normally 0 for broadcast). */
    uint8_t type; /*<  Radio link type. 0: unknown/generic type. */
    uint8_t mode; /*<  Operation mode. Radio link dependent. UINT8_MAX: ignore/unknown. */
    int8_t tx_power; /*< [dBm] Tx transmit power in dBm. INT8_MAX: unknown. */
    int8_t rx_power; /*< [dBm] Rx transmit power in dBm. INT8_MAX: unknown. */
    uint16_t tx_frame_rate; /*< [Hz] Frame rate in Hz (frames per second) for Tx to Rx transmission. 0: unknown. */
    uint16_t rx_frame_rate; /*< [Hz] Frame rate in Hz (frames per second) for Rx to Tx transmission. Normally equal to tx_packet_rate. 0: unknown. */
    std::array<char, 6> mode_str; /*<  Operation mode as human readable string. Radio link dependent. Terminated by NULL if the string length is less than 6 chars and WITHOUT NULL termination if the length is exactly 6 chars - applications have to provide 6+1 bytes storage if the mode is stored as string. Use a zero-length string if not known. */
    std::array<char, 6> band_str; /*<  Frequency band as human readable string. Radio link dependent. Terminated by NULL if the string length is less than 6 chars and WITHOUT NULL termination if the length is exactly 6 chars - applications have to provide 6+1 bytes storage if the mode is stored as string. Use a zero-length string if not known. */
    uint16_t tx_ser_data_rate; /*<  Maximum data rate of serial stream in bytes/s for Tx to Rx transmission. 0: unknown. UINT16_MAX: data rate is 64 KBytes/s or larger. */
    uint16_t rx_ser_data_rate; /*<  Maximum data rate of serial stream in bytes/s for Rx to Tx transmission. 0: unknown. UINT16_MAX: data rate is 64 KBytes/s or larger. */
    uint8_t tx_receive_sensitivity; /*<  Receive sensitivity of Tx in inverted dBm. 1..255 represents -1..-255 dBm, 0: unknown. */
    uint8_t rx_receive_sensitivity; /*<  Receive sensitivity of Rx in inverted dBm. 1..255 represents -1..-255 dBm, 0: unknown. */


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
        ss << "  type: " << +type << std::endl;
        ss << "  mode: " << +mode << std::endl;
        ss << "  tx_power: " << +tx_power << std::endl;
        ss << "  rx_power: " << +rx_power << std::endl;
        ss << "  tx_frame_rate: " << tx_frame_rate << std::endl;
        ss << "  rx_frame_rate: " << rx_frame_rate << std::endl;
        ss << "  mode_str: \"" << to_string(mode_str) << "\"" << std::endl;
        ss << "  band_str: \"" << to_string(band_str) << "\"" << std::endl;
        ss << "  tx_ser_data_rate: " << tx_ser_data_rate << std::endl;
        ss << "  rx_ser_data_rate: " << rx_ser_data_rate << std::endl;
        ss << "  tx_receive_sensitivity: " << +tx_receive_sensitivity << std::endl;
        ss << "  rx_receive_sensitivity: " << +rx_receive_sensitivity << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << tx_frame_rate;                 // offset: 0
        map << rx_frame_rate;                 // offset: 2
        map << tx_ser_data_rate;              // offset: 4
        map << rx_ser_data_rate;              // offset: 6
        map << target_system;                 // offset: 8
        map << target_component;              // offset: 9
        map << type;                          // offset: 10
        map << mode;                          // offset: 11
        map << tx_power;                      // offset: 12
        map << rx_power;                      // offset: 13
        map << mode_str;                      // offset: 14
        map << band_str;                      // offset: 20
        map << tx_receive_sensitivity;        // offset: 26
        map << rx_receive_sensitivity;        // offset: 27
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> tx_frame_rate;                 // offset: 0
        map >> rx_frame_rate;                 // offset: 2
        map >> tx_ser_data_rate;              // offset: 4
        map >> rx_ser_data_rate;              // offset: 6
        map >> target_system;                 // offset: 8
        map >> target_component;              // offset: 9
        map >> type;                          // offset: 10
        map >> mode;                          // offset: 11
        map >> tx_power;                      // offset: 12
        map >> rx_power;                      // offset: 13
        map >> mode_str;                      // offset: 14
        map >> band_str;                      // offset: 20
        map >> tx_receive_sensitivity;        // offset: 26
        map >> rx_receive_sensitivity;        // offset: 27
    }
};

} // namespace msg
} // namespace storm32
} // namespace mavlink
