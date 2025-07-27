// MESSAGE MLRS_RADIO_LINK_STATS support class

#pragma once

namespace mavlink {
namespace storm32 {
namespace msg {

/**
 * @brief MLRS_RADIO_LINK_STATS message
 *
 * Radio link statistics for a MAVLink RC receiver or transmitter and other links. Tx: ground-side device, Rx: vehicle-side device.
        The message is normally emitted in regular time intervals upon each actual or expected reception of an over-the-air data packet on the link.
        A MAVLink RC receiver should emit it shortly after it emits a RADIO_RC_CHANNELS message (if it is emitting that message).
        Per default, rssi values are in MAVLink units: 0 represents weakest signal, 254 represents maximum signal, UINT8_MAX represents unknown.
        The RADIO_LINK_STATS_FLAGS_RSSI_DBM flag is set if the rssi units are negative dBm: 1..254 correspond to -1..-254 dBm, 0 represents no reception, UINT8_MAX represents unknown.
        The target_system field should normally be set to the system id of the system the link is connected to, typically the flight controller.
        The target_component field can normally be set to 0, so that all components of the system can receive the message.
        Note: The frequency fields are extensions to ensure that they are located at the end of the serialized payload and subject to MAVLink's trailing-zero trimming.
      
 */
struct MLRS_RADIO_LINK_STATS : mavlink::Message {
    static constexpr msgid_t MSG_ID = 60045;
    static constexpr size_t LENGTH = 23;
    static constexpr size_t MIN_LENGTH = 15;
    static constexpr uint8_t CRC_EXTRA = 14;
    static constexpr auto NAME = "MLRS_RADIO_LINK_STATS";


    uint8_t target_system; /*<  System ID (ID of target system, normally flight controller). */
    uint8_t target_component; /*<  Component ID (normally 0 for broadcast). */
    uint16_t flags; /*<  Radio link statistics flags. */
    uint8_t rx_LQ_rc; /*< [c%] Link quality of RC data stream from Tx to Rx. Values: 1..100, 0: no link connection, UINT8_MAX: unknown. */
    uint8_t rx_LQ_ser; /*< [c%] Link quality of serial MAVLink data stream from Tx to Rx. Values: 1..100, 0: no link connection, UINT8_MAX: unknown. */
    uint8_t rx_rssi1; /*<  Rssi of antenna 1. 0: no reception, UINT8_MAX: unknown. */
    int8_t rx_snr1; /*<  Noise on antenna 1. Radio link dependent. INT8_MAX: unknown. */
    uint8_t tx_LQ_ser; /*< [c%] Link quality of serial MAVLink data stream from Rx to Tx. Values: 1..100, 0: no link connection, UINT8_MAX: unknown. */
    uint8_t tx_rssi1; /*<  Rssi of antenna 1. 0: no reception. UINT8_MAX: unknown. */
    int8_t tx_snr1; /*<  Noise on antenna 1. Radio link dependent. INT8_MAX: unknown. */
    uint8_t rx_rssi2; /*<  Rssi of antenna 2. 0: no reception, UINT8_MAX: use rx_rssi1 if it is known else unknown. */
    int8_t rx_snr2; /*<  Noise on antenna 2. Radio link dependent. INT8_MAX: use rx_snr1 if it is known else unknown. */
    uint8_t tx_rssi2; /*<  Rssi of antenna 2. 0: no reception. UINT8_MAX: use tx_rssi1 if it is known else unknown. */
    int8_t tx_snr2; /*<  Noise on antenna 2. Radio link dependent. INT8_MAX: use tx_snr1 if it is known else unknown. */
    float frequency1; /*< [Hz] Frequency on antenna1 in Hz. 0: unknown. */
    float frequency2; /*< [Hz] Frequency on antenna2 in Hz. 0: unknown. */


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
        ss << "  flags: " << flags << std::endl;
        ss << "  rx_LQ_rc: " << +rx_LQ_rc << std::endl;
        ss << "  rx_LQ_ser: " << +rx_LQ_ser << std::endl;
        ss << "  rx_rssi1: " << +rx_rssi1 << std::endl;
        ss << "  rx_snr1: " << +rx_snr1 << std::endl;
        ss << "  tx_LQ_ser: " << +tx_LQ_ser << std::endl;
        ss << "  tx_rssi1: " << +tx_rssi1 << std::endl;
        ss << "  tx_snr1: " << +tx_snr1 << std::endl;
        ss << "  rx_rssi2: " << +rx_rssi2 << std::endl;
        ss << "  rx_snr2: " << +rx_snr2 << std::endl;
        ss << "  tx_rssi2: " << +tx_rssi2 << std::endl;
        ss << "  tx_snr2: " << +tx_snr2 << std::endl;
        ss << "  frequency1: " << frequency1 << std::endl;
        ss << "  frequency2: " << frequency2 << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << flags;                         // offset: 0
        map << target_system;                 // offset: 2
        map << target_component;              // offset: 3
        map << rx_LQ_rc;                      // offset: 4
        map << rx_LQ_ser;                     // offset: 5
        map << rx_rssi1;                      // offset: 6
        map << rx_snr1;                       // offset: 7
        map << tx_LQ_ser;                     // offset: 8
        map << tx_rssi1;                      // offset: 9
        map << tx_snr1;                       // offset: 10
        map << rx_rssi2;                      // offset: 11
        map << rx_snr2;                       // offset: 12
        map << tx_rssi2;                      // offset: 13
        map << tx_snr2;                       // offset: 14
        map << frequency1;                    // offset: 15
        map << frequency2;                    // offset: 19
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> flags;                         // offset: 0
        map >> target_system;                 // offset: 2
        map >> target_component;              // offset: 3
        map >> rx_LQ_rc;                      // offset: 4
        map >> rx_LQ_ser;                     // offset: 5
        map >> rx_rssi1;                      // offset: 6
        map >> rx_snr1;                       // offset: 7
        map >> tx_LQ_ser;                     // offset: 8
        map >> tx_rssi1;                      // offset: 9
        map >> tx_snr1;                       // offset: 10
        map >> rx_rssi2;                      // offset: 11
        map >> rx_snr2;                       // offset: 12
        map >> tx_rssi2;                      // offset: 13
        map >> tx_snr2;                       // offset: 14
        map >> frequency1;                    // offset: 15
        map >> frequency2;                    // offset: 19
    }
};

} // namespace msg
} // namespace storm32
} // namespace mavlink
