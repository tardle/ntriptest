/** @file
 *	@brief MAVLink comm protocol generated from development.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <array>
#include <cstdint>
#include <sstream>

#ifndef MAVLINK_STX
#define MAVLINK_STX 253
#endif

#include "../message.hpp"

namespace mavlink {
namespace development {

/**
 * Array of msg_entry needed for @p mavlink_parse_char() (through @p mavlink_get_msg_entry())
 */
constexpr std::array<mavlink_msg_entry_t, 241> MESSAGE_ENTRIES {{ {0, 50, 9, 9, 0, 0, 0}, {1, 124, 31, 43, 0, 0, 0}, {2, 137, 12, 12, 0, 0, 0}, {4, 237, 14, 14, 3, 12, 13}, {5, 217, 28, 28, 1, 0, 0}, {6, 104, 3, 3, 0, 0, 0}, {7, 119, 32, 32, 0, 0, 0}, {8, 117, 36, 36, 0, 0, 0}, {11, 89, 6, 6, 1, 4, 0}, {20, 214, 20, 20, 3, 2, 3}, {21, 159, 2, 2, 3, 0, 1}, {22, 220, 25, 25, 0, 0, 0}, {23, 168, 23, 23, 3, 4, 5}, {24, 24, 30, 52, 0, 0, 0}, {25, 23, 101, 101, 0, 0, 0}, {26, 170, 22, 24, 0, 0, 0}, {27, 144, 26, 29, 0, 0, 0}, {28, 67, 16, 16, 0, 0, 0}, {29, 115, 14, 16, 0, 0, 0}, {30, 39, 28, 28, 0, 0, 0}, {31, 246, 32, 48, 0, 0, 0}, {32, 185, 28, 28, 0, 0, 0}, {33, 104, 28, 28, 0, 0, 0}, {34, 237, 22, 22, 0, 0, 0}, {35, 244, 22, 22, 0, 0, 0}, {36, 222, 21, 37, 0, 0, 0}, {37, 212, 6, 7, 3, 4, 5}, {38, 9, 6, 7, 3, 4, 5}, {39, 254, 37, 38, 3, 32, 33}, {40, 230, 4, 5, 3, 2, 3}, {41, 28, 4, 4, 3, 2, 3}, {42, 28, 2, 18, 0, 0, 0}, {43, 132, 2, 3, 3, 0, 1}, {44, 221, 4, 9, 3, 2, 3}, {45, 232, 2, 3, 3, 0, 1}, {46, 11, 2, 2, 0, 0, 0}, {47, 153, 3, 8, 3, 0, 1}, {48, 41, 13, 21, 1, 12, 0}, {49, 39, 12, 20, 0, 0, 0}, {50, 78, 37, 37, 3, 18, 19}, {51, 196, 4, 5, 3, 2, 3}, {54, 15, 27, 27, 3, 24, 25}, {55, 3, 25, 25, 0, 0, 0}, {61, 167, 72, 72, 0, 0, 0}, {62, 183, 26, 26, 0, 0, 0}, {63, 119, 181, 181, 0, 0, 0}, {64, 191, 225, 225, 0, 0, 0}, {65, 118, 42, 42, 0, 0, 0}, {66, 148, 6, 6, 3, 2, 3}, {67, 21, 4, 4, 0, 0, 0}, {69, 243, 11, 30, 1, 10, 0}, {70, 124, 18, 38, 3, 16, 17}, {73, 38, 37, 38, 3, 32, 33}, {74, 20, 20, 20, 0, 0, 0}, {75, 158, 35, 35, 3, 30, 31}, {76, 152, 33, 33, 3, 30, 31}, {77, 143, 3, 10, 3, 8, 9}, {80, 14, 4, 4, 3, 2, 3}, {81, 106, 22, 22, 0, 0, 0}, {82, 49, 39, 51, 3, 36, 37}, {83, 22, 37, 37, 0, 0, 0}, {84, 143, 53, 53, 3, 50, 51}, {85, 140, 51, 51, 0, 0, 0}, {86, 5, 53, 53, 3, 50, 51}, {87, 150, 51, 51, 0, 0, 0}, {89, 231, 28, 28, 0, 0, 0}, {90, 183, 56, 56, 0, 0, 0}, {91, 63, 42, 42, 0, 0, 0}, {92, 54, 33, 33, 0, 0, 0}, {93, 47, 81, 81, 0, 0, 0}, {100, 175, 26, 34, 0, 0, 0}, {101, 102, 32, 117, 0, 0, 0}, {102, 158, 32, 117, 0, 0, 0}, {103, 208, 20, 57, 0, 0, 0}, {104, 56, 32, 116, 0, 0, 0}, {105, 93, 62, 63, 0, 0, 0}, {106, 138, 44, 44, 0, 0, 0}, {107, 108, 64, 65, 0, 0, 0}, {108, 32, 84, 92, 0, 0, 0}, {109, 185, 9, 9, 0, 0, 0}, {110, 84, 254, 254, 3, 1, 2}, {111, 34, 16, 18, 3, 16, 17}, {112, 174, 12, 12, 0, 0, 0}, {113, 124, 36, 39, 0, 0, 0}, {114, 237, 44, 44, 0, 0, 0}, {115, 4, 64, 64, 0, 0, 0}, {116, 76, 22, 24, 0, 0, 0}, {117, 128, 6, 6, 3, 4, 5}, {118, 56, 14, 14, 0, 0, 0}, {119, 116, 12, 12, 3, 10, 11}, {120, 134, 97, 97, 0, 0, 0}, {121, 237, 2, 2, 3, 0, 1}, {122, 203, 2, 2, 3, 0, 1}, {123, 250, 113, 113, 3, 0, 1}, {124, 87, 35, 57, 0, 0, 0}, {125, 203, 6, 6, 0, 0, 0}, {126, 220, 79, 81, 3, 79, 80}, {127, 25, 35, 35, 0, 0, 0}, {128, 226, 35, 35, 0, 0, 0}, {129, 46, 22, 24, 0, 0, 0}, {130, 29, 13, 13, 0, 0, 0}, {131, 223, 255, 255, 0, 0, 0}, {132, 85, 14, 39, 0, 0, 0}, {133, 6, 18, 18, 0, 0, 0}, {134, 229, 43, 43, 0, 0, 0}, {135, 203, 8, 8, 0, 0, 0}, {136, 1, 22, 22, 0, 0, 0}, {137, 195, 14, 16, 0, 0, 0}, {138, 109, 36, 120, 0, 0, 0}, {139, 168, 43, 43, 3, 41, 42}, {140, 181, 41, 41, 0, 0, 0}, {141, 47, 32, 32, 0, 0, 0}, {142, 72, 243, 243, 0, 0, 0}, {143, 131, 14, 16, 0, 0, 0}, {144, 127, 93, 93, 0, 0, 0}, {146, 103, 100, 100, 0, 0, 0}, {147, 154, 36, 54, 0, 0, 0}, {148, 178, 60, 78, 0, 0, 0}, {149, 200, 30, 60, 0, 0, 0}, {162, 189, 8, 9, 0, 0, 0}, {192, 36, 44, 54, 0, 0, 0}, {225, 208, 65, 73, 0, 0, 0}, {230, 163, 42, 42, 0, 0, 0}, {231, 105, 40, 40, 0, 0, 0}, {232, 151, 63, 65, 0, 0, 0}, {233, 35, 182, 182, 0, 0, 0}, {234, 150, 40, 40, 0, 0, 0}, {235, 179, 42, 42, 0, 0, 0}, {241, 90, 32, 32, 0, 0, 0}, {242, 104, 52, 60, 0, 0, 0}, {243, 85, 53, 61, 1, 52, 0}, {244, 95, 6, 6, 0, 0, 0}, {245, 130, 2, 2, 0, 0, 0}, {246, 184, 38, 38, 0, 0, 0}, {247, 81, 19, 19, 0, 0, 0}, {248, 8, 254, 254, 3, 3, 4}, {249, 204, 36, 36, 0, 0, 0}, {250, 49, 30, 30, 0, 0, 0}, {251, 170, 18, 18, 0, 0, 0}, {252, 44, 18, 18, 0, 0, 0}, {253, 83, 51, 54, 0, 0, 0}, {254, 46, 9, 9, 0, 0, 0}, {256, 71, 42, 42, 3, 8, 9}, {257, 131, 9, 9, 0, 0, 0}, {258, 187, 32, 232, 3, 0, 1}, {259, 92, 235, 237, 0, 0, 0}, {260, 146, 5, 14, 0, 0, 0}, {261, 179, 27, 61, 0, 0, 0}, {262, 12, 18, 23, 0, 0, 0}, {263, 133, 255, 255, 0, 0, 0}, {264, 49, 28, 32, 0, 0, 0}, {265, 26, 16, 20, 0, 0, 0}, {266, 193, 255, 255, 3, 2, 3}, {267, 35, 255, 255, 3, 2, 3}, {268, 14, 4, 4, 3, 2, 3}, {269, 109, 213, 215, 0, 0, 0}, {270, 59, 19, 20, 0, 0, 0}, {271, 22, 52, 53, 0, 0, 0}, {275, 126, 31, 32, 0, 0, 0}, {276, 18, 49, 50, 0, 0, 0}, {277, 62, 30, 30, 0, 0, 0}, {280, 70, 33, 33, 0, 0, 0}, {281, 48, 13, 13, 0, 0, 0}, {282, 123, 35, 35, 3, 32, 33}, {283, 74, 144, 145, 0, 0, 0}, {284, 99, 32, 32, 3, 30, 31}, {285, 137, 40, 49, 3, 38, 39}, {286, 210, 53, 57, 3, 50, 51}, {287, 1, 23, 23, 3, 20, 21}, {288, 20, 23, 23, 3, 20, 21}, {290, 251, 46, 46, 0, 0, 0}, {291, 10, 57, 57, 0, 0, 0}, {295, 234, 12, 12, 0, 0, 0}, {299, 19, 96, 98, 0, 0, 0}, {300, 217, 22, 22, 0, 0, 0}, {301, 243, 58, 58, 0, 0, 0}, {310, 28, 17, 17, 0, 0, 0}, {311, 95, 116, 116, 0, 0, 0}, {320, 243, 20, 20, 3, 2, 3}, {321, 88, 2, 2, 3, 0, 1}, {322, 243, 149, 149, 0, 0, 0}, {323, 78, 147, 147, 3, 0, 1}, {324, 132, 146, 146, 0, 0, 0}, {330, 23, 158, 167, 0, 0, 0}, {331, 91, 230, 233, 0, 0, 0}, {332, 236, 239, 239, 0, 0, 0}, {333, 231, 109, 109, 0, 0, 0}, {334, 72, 10, 10, 0, 0, 0}, {335, 225, 24, 24, 0, 0, 0}, {336, 245, 84, 84, 0, 0, 0}, {339, 199, 5, 5, 0, 0, 0}, {340, 99, 70, 70, 0, 0, 0}, {350, 232, 20, 252, 0, 0, 0}, {354, 210, 14, 14, 3, 12, 13}, {355, 6, 12, 12, 0, 0, 0}, {360, 11, 25, 25, 0, 0, 0}, {361, 93, 33, 33, 0, 0, 0}, {369, 151, 24, 24, 0, 0, 0}, {370, 75, 87, 109, 0, 0, 0}, {371, 10, 26, 26, 0, 0, 0}, {372, 26, 140, 140, 0, 0, 0}, {373, 117, 42, 42, 0, 0, 0}, {375, 251, 140, 140, 0, 0, 0}, {380, 232, 20, 20, 0, 0, 0}, {385, 147, 133, 133, 3, 2, 3}, {386, 132, 16, 16, 3, 4, 5}, {387, 4, 72, 72, 3, 4, 5}, {388, 8, 37, 37, 3, 32, 33}, {390, 156, 238, 238, 0, 0, 0}, {395, 0, 212, 212, 0, 0, 0}, {396, 50, 160, 160, 0, 0, 0}, {397, 182, 108, 108, 0, 0, 0}, {400, 110, 254, 254, 3, 4, 5}, {401, 183, 6, 6, 3, 4, 5}, {410, 160, 53, 53, 0, 0, 0}, {411, 106, 3, 3, 0, 0, 0}, {412, 33, 6, 6, 3, 4, 5}, {413, 77, 7, 7, 3, 4, 5}, {414, 109, 16, 16, 0, 0, 0}, {415, 161, 16, 16, 0, 0, 0}, {420, 20, 9, 73, 3, 6, 7}, {435, 134, 46, 46, 0, 0, 0}, {436, 193, 9, 9, 0, 0, 0}, {437, 30, 1, 1, 0, 0, 0}, {440, 66, 35, 35, 0, 0, 0}, {441, 169, 17, 17, 0, 0, 0}, {510, 245, 106, 106, 0, 0, 0}, {511, 28, 71, 71, 0, 0, 0}, {512, 184, 2, 2, 0, 0, 0}, {9000, 113, 137, 137, 0, 0, 0}, {9005, 117, 34, 34, 0, 0, 0}, {12900, 114, 44, 44, 3, 0, 1}, {12901, 254, 59, 59, 3, 30, 31}, {12902, 140, 53, 53, 3, 4, 5}, {12903, 249, 46, 46, 3, 0, 1}, {12904, 77, 54, 54, 3, 28, 29}, {12905, 49, 43, 43, 3, 0, 1}, {12915, 94, 249, 249, 3, 0, 1}, {12918, 139, 51, 51, 0, 0, 0}, {12919, 7, 18, 18, 3, 16, 17}, {12920, 20, 5, 5, 0, 0, 0} }};

//! MAVLINK VERSION
constexpr auto MAVLINK_VERSION = 0;


// ENUM DEFINITIONS


/** @brief Airspeed sensor flags */
enum class AIRSPEED_SENSOR_FLAGS : uint8_t
{
    UNHEALTHY=1, /* Airspeed sensor is unhealthy | */
    USING=2, /* True if the data from this sensor is being actively used by the flight controller for guidance, navigation or control. | */
};

//! AIRSPEED_SENSOR_FLAGS ENUM_END
constexpr auto AIRSPEED_SENSOR_FLAGS_ENUM_END = 3;

/** @brief Battery status flags for fault, health and state indication. */
enum class MAV_BATTERY_STATUS_FLAGS : uint32_t
{
    NOT_READY_TO_USE=1, /* 
          The battery is not ready to use (fly).
          Set if the battery has faults or other conditions that make it unsafe to fly with.
          Note: It will be the logical OR of other status bits (chosen by the manufacturer/integrator).
         | */
    CHARGING=2, /* 
          Battery is charging.
         | */
    CELL_BALANCING=4, /* 
          Battery is cell balancing (during charging).
          Not ready to use (MAV_BATTERY_STATUS_FLAGS_NOT_READY_TO_USE may be set).
         | */
    FAULT_CELL_IMBALANCE=8, /* 
          Battery cells are not balanced.
          Not ready to use.
         | */
    AUTO_DISCHARGING=16, /* 
          Battery is auto discharging (towards storage level).
          Not ready to use (MAV_BATTERY_STATUS_FLAGS_NOT_READY_TO_USE would be set).
         | */
    REQUIRES_SERVICE=32, /* 
          Battery requires service (not safe to fly).
          This is set at vendor discretion.
          It is likely to be set for most faults, and may also be set according to a maintenance schedule (such as age, or number of recharge cycles, etc.).
         | */
    BAD_BATTERY=64, /* 
          Battery is faulty and cannot be repaired (not safe to fly).
          This is set at vendor discretion.
          The battery should be disposed of safely.
         | */
    PROTECTIONS_ENABLED=128, /* 
          Automatic battery protection monitoring is enabled.
          When enabled, the system will monitor for certain kinds of faults, such as cells being over-voltage.
          If a fault is triggered then and protections are enabled then a safety fault (MAV_BATTERY_STATUS_FLAGS_FAULT_PROTECTION_SYSTEM) will be set and power from the battery will be stopped.
          Note that battery protection monitoring should only be enabled when the vehicle is landed. Once the vehicle is armed, or starts moving, the protections should be disabled to prevent false positives from disabling the output.
         | */
    FAULT_PROTECTION_SYSTEM=256, /* 
          The battery fault protection system had detected a fault and cut all power from the battery.
          This will only trigger if MAV_BATTERY_STATUS_FLAGS_PROTECTIONS_ENABLED is set.
          Other faults like MAV_BATTERY_STATUS_FLAGS_FAULT_OVER_VOLT may also be set, indicating the cause of the protection fault.
         | */
    FAULT_OVER_VOLT=512, /* One or more cells are above their maximum voltage rating. | */
    FAULT_UNDER_VOLT=1024, /* 
          One or more cells are below their minimum voltage rating.
          A battery that had deep-discharged might be irrepairably damaged, and set both MAV_BATTERY_STATUS_FLAGS_FAULT_UNDER_VOLT and MAV_BATTERY_STATUS_FLAGS_BAD_BATTERY.
         | */
    FAULT_OVER_TEMPERATURE=2048, /* Over-temperature fault. | */
    FAULT_UNDER_TEMPERATURE=4096, /* Under-temperature fault. | */
    FAULT_OVER_CURRENT=8192, /* Over-current fault. | */
    FAULT_SHORT_CIRCUIT=16384, /* 
          Short circuit event detected.
          The battery may or may not be safe to use (check other flags).
         | */
    FAULT_INCOMPATIBLE_VOLTAGE=32768, /* Voltage not compatible with power rail voltage (batteries on same power rail should have similar voltage). | */
    FAULT_INCOMPATIBLE_FIRMWARE=65536, /* Battery firmware is not compatible with current autopilot firmware. | */
    FAULT_INCOMPATIBLE_CELLS_CONFIGURATION=131072, /* Battery is not compatible due to cell configuration (e.g. 5s1p when vehicle requires 6s). | */
    CAPACITY_RELATIVE_TO_FULL=262144, /* 
          Battery capacity_consumed and capacity_remaining values are relative to a full battery (they sum to the total capacity of the battery).
          This flag would be set for a smart battery that can accurately determine its remaining charge across vehicle reboots and discharge/recharge cycles.
          If unset the capacity_consumed indicates the consumption since vehicle power-on, as measured using a power monitor. The capacity_remaining, if provided, indicates the estimated remaining capacity on the assumption that the battery was full on vehicle boot.
          If unset a GCS is recommended to advise that users fully charge the battery on power on.
         | */
    EXTENDED=2147483648, /* Reserved (not used). If set, this will indicate that an additional status field exists for higher status values. | */
};

//! MAV_BATTERY_STATUS_FLAGS ENUM_END
constexpr auto MAV_BATTERY_STATUS_FLAGS_ENUM_END = 2147483649;

/** @brief CONTROL_STATUS flags. */
enum class GCS_CONTROL_STATUS_FLAGS : uint8_t
{
    SYSTEM_MANAGER=1, /* If set, this CONTROL_STATUS publishes the controlling GCS for the whole system. If unset, the CONTROL_STATUS indicates the controlling GCS for just the component emitting the message. Note that to request control of the system a GCS should send MAV_CMD_REQUEST_OPERATOR_CONTROL to the component emitting CONTROL_STATUS with this flag set. | */
    TAKEOVER_ALLOWED=2, /* Takeover allowed (requests for control will be granted). If not set requests for control will be rejected, but the controlling GCS will be notified (and may release control or allow takeover). | */
};

//! GCS_CONTROL_STATUS_FLAGS ENUM_END
constexpr auto GCS_CONTROL_STATUS_FLAGS_ENUM_END = 3;

/** @brief These flags indicate the sensor reporting capabilities for TARGET_ABSOLUTE. */
enum class TARGET_ABSOLUTE_SENSOR_CAPABILITY_FLAGS : uint8_t
{
    POSITION=1, /*  | */
    VELOCITY=2, /*  | */
    ACCELERATION=4, /*  | */
    ATTITUDE=8, /*  | */
    RATES=16, /*  | */
};

//! TARGET_ABSOLUTE_SENSOR_CAPABILITY_FLAGS ENUM_END
constexpr auto TARGET_ABSOLUTE_SENSOR_CAPABILITY_FLAGS_ENUM_END = 17;

/** @brief The frame of a target observation from an onboard sensor. */
enum class TARGET_OBS_FRAME : uint8_t
{
    LOCAL_NED=0, /* NED local tangent frame (x: North, y: East, z: Down) with origin fixed relative to earth. | */
    BODY_FRD=1, /* FRD local frame aligned to the vehicle's attitude (x: Forward, y: Right, z: Down) with an origin that travels with vehicle. | */
    LOCAL_OFFSET_NED=2, /* NED local tangent frame (x: North, y: East, z: Down) with an origin that travels with vehicle. | */
    OTHER=3, /* Other sensor frame for target observations neither in local NED nor in body FRD. | */
};

//! TARGET_OBS_FRAME ENUM_END
constexpr auto TARGET_OBS_FRAME_ENUM_END = 4;

/** @brief RADIO_RC_CHANNELS flags (bitmask). */
enum class RADIO_RC_CHANNELS_FLAGS : uint16_t
{
    FAILSAFE=1, /* Failsafe is active. The content of the RC channels data in the RADIO_RC_CHANNELS message is implementation dependent. | */
    OUTDATED=2, /* Channel data may be out of date. This is set when the receiver is unable to validate incoming data from the transmitter and has therefore resent the last valid data it received. | */
};

//! RADIO_RC_CHANNELS_FLAGS ENUM_END
constexpr auto RADIO_RC_CHANNELS_FLAGS_ENUM_END = 3;

/** @brief Flags indicating errors in a GPS receiver. */
enum class GPS_SYSTEM_ERROR_FLAGS : uint32_t
{
    INCOMING_CORRECTIONS=1, /* There are problems with incoming correction streams. | */
    CONFIGURATION=2, /* There are problems with the configuration. | */
    SOFTWARE=4, /* There are problems with the software on the GPS receiver. | */
    ANTENNA=8, /* There are problems with an antenna connected to the GPS receiver. | */
    EVENT_CONGESTION=16, /* There are problems handling all incoming events. | */
    CPU_OVERLOAD=32, /* The GPS receiver CPU is overloaded. | */
    OUTPUT_CONGESTION=64, /* The GPS receiver is experiencing output congestion. | */
};

//! GPS_SYSTEM_ERROR_FLAGS ENUM_END
constexpr auto GPS_SYSTEM_ERROR_FLAGS_ENUM_END = 65;

/** @brief Signal authentication state in a GPS receiver. */
enum class GPS_AUTHENTICATION_STATE : uint8_t
{
    UNKNOWN=0, /* The GPS receiver does not provide GPS signal authentication info. | */
    INITIALIZING=1, /* The GPS receiver is initializing signal authentication. | */
    ERROR=2, /* The GPS receiver encountered an error while initializing signal authentication. | */
    OK=3, /* The GPS receiver has correctly authenticated all signals. | */
    DISABLED=4, /* GPS signal authentication is disabled on the receiver. | */
};

//! GPS_AUTHENTICATION_STATE ENUM_END
constexpr auto GPS_AUTHENTICATION_STATE_ENUM_END = 5;

/** @brief Signal jamming state in a GPS receiver. */
enum class GPS_JAMMING_STATE : uint8_t
{
    UNKNOWN=0, /* The GPS receiver does not provide GPS signal jamming info. | */
    OK=1, /* The GPS receiver detected no signal jamming. | */
    MITIGATED=2, /* The GPS receiver detected and mitigated signal jamming. | */
    DETECTED=3, /* The GPS receiver detected signal jamming. | */
};

//! GPS_JAMMING_STATE ENUM_END
constexpr auto GPS_JAMMING_STATE_ENUM_END = 4;

/** @brief Signal spoofing state in a GPS receiver. */
enum class GPS_SPOOFING_STATE : uint8_t
{
    UNKNOWN=0, /* The GPS receiver does not provide GPS signal spoofing info. | */
    OK=1, /* The GPS receiver detected no signal spoofing. | */
    MITIGATED=2, /* The GPS receiver detected and mitigated signal spoofing. | */
    DETECTED=3, /* The GPS receiver detected signal spoofing but still has a fix. | */
};

//! GPS_SPOOFING_STATE ENUM_END
constexpr auto GPS_SPOOFING_STATE_ENUM_END = 4;

/** @brief State of RAIM processing. */
enum class GPS_RAIM_STATE : uint8_t
{
    UNKNOWN=0, /* RAIM capability is unknown. | */
    DISABLED=1, /* RAIM is disabled. | */
    OK=2, /* RAIM integrity check was successful. | */
    FAILED=3, /* RAIM integrity check failed. | */
};

//! GPS_RAIM_STATE ENUM_END
constexpr auto GPS_RAIM_STATE_ENUM_END = 4;


} // namespace development
} // namespace mavlink

// MESSAGE DEFINITIONS
#include "./mavlink_msg_airspeed.hpp"
#include "./mavlink_msg_set_velocity_limits.hpp"
#include "./mavlink_msg_velocity_limits.hpp"
#include "./mavlink_msg_figure_eight_execution_status.hpp"
#include "./mavlink_msg_battery_status_v2.hpp"
#include "./mavlink_msg_group_start.hpp"
#include "./mavlink_msg_group_end.hpp"
#include "./mavlink_msg_radio_rc_channels.hpp"
#include "./mavlink_msg_gnss_integrity.hpp"
#include "./mavlink_msg_target_absolute.hpp"
#include "./mavlink_msg_target_relative.hpp"
#include "./mavlink_msg_control_status.hpp"

// base include
#include "../common/common.hpp"
