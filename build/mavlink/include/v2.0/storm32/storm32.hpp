/** @file
 *	@brief MAVLink comm protocol generated from storm32.xml
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
namespace storm32 {

/**
 * Array of msg_entry needed for @p mavlink_parse_char() (through @p mavlink_get_msg_entry())
 */
constexpr std::array<mavlink_msg_entry_t, 331> MESSAGE_ENTRIES {{ {0, 50, 9, 9, 0, 0, 0}, {1, 124, 31, 43, 0, 0, 0}, {2, 137, 12, 12, 0, 0, 0}, {4, 237, 14, 14, 3, 12, 13}, {5, 217, 28, 28, 1, 0, 0}, {6, 104, 3, 3, 0, 0, 0}, {7, 119, 32, 32, 0, 0, 0}, {8, 117, 36, 36, 0, 0, 0}, {11, 89, 6, 6, 1, 4, 0}, {20, 214, 20, 20, 3, 2, 3}, {21, 159, 2, 2, 3, 0, 1}, {22, 220, 25, 25, 0, 0, 0}, {23, 168, 23, 23, 3, 4, 5}, {24, 24, 30, 52, 0, 0, 0}, {25, 23, 101, 101, 0, 0, 0}, {26, 170, 22, 24, 0, 0, 0}, {27, 144, 26, 29, 0, 0, 0}, {28, 67, 16, 16, 0, 0, 0}, {29, 115, 14, 16, 0, 0, 0}, {30, 39, 28, 28, 0, 0, 0}, {31, 246, 32, 48, 0, 0, 0}, {32, 185, 28, 28, 0, 0, 0}, {33, 104, 28, 28, 0, 0, 0}, {34, 237, 22, 22, 0, 0, 0}, {35, 244, 22, 22, 0, 0, 0}, {36, 222, 21, 37, 0, 0, 0}, {37, 212, 6, 7, 3, 4, 5}, {38, 9, 6, 7, 3, 4, 5}, {39, 254, 37, 38, 3, 32, 33}, {40, 230, 4, 5, 3, 2, 3}, {41, 28, 4, 4, 3, 2, 3}, {42, 28, 2, 18, 0, 0, 0}, {43, 132, 2, 3, 3, 0, 1}, {44, 221, 4, 9, 3, 2, 3}, {45, 232, 2, 3, 3, 0, 1}, {46, 11, 2, 2, 0, 0, 0}, {47, 153, 3, 8, 3, 0, 1}, {48, 41, 13, 21, 1, 12, 0}, {49, 39, 12, 20, 0, 0, 0}, {50, 78, 37, 37, 3, 18, 19}, {51, 196, 4, 5, 3, 2, 3}, {54, 15, 27, 27, 3, 24, 25}, {55, 3, 25, 25, 0, 0, 0}, {61, 167, 72, 72, 0, 0, 0}, {62, 183, 26, 26, 0, 0, 0}, {63, 119, 181, 181, 0, 0, 0}, {64, 191, 225, 225, 0, 0, 0}, {65, 118, 42, 42, 0, 0, 0}, {66, 148, 6, 6, 3, 2, 3}, {67, 21, 4, 4, 0, 0, 0}, {69, 243, 11, 30, 1, 10, 0}, {70, 124, 18, 38, 3, 16, 17}, {73, 38, 37, 38, 3, 32, 33}, {74, 20, 20, 20, 0, 0, 0}, {75, 158, 35, 35, 3, 30, 31}, {76, 152, 33, 33, 3, 30, 31}, {77, 143, 3, 10, 3, 8, 9}, {80, 14, 4, 4, 3, 2, 3}, {81, 106, 22, 22, 0, 0, 0}, {82, 49, 39, 51, 3, 36, 37}, {83, 22, 37, 37, 0, 0, 0}, {84, 143, 53, 53, 3, 50, 51}, {85, 140, 51, 51, 0, 0, 0}, {86, 5, 53, 53, 3, 50, 51}, {87, 150, 51, 51, 0, 0, 0}, {89, 231, 28, 28, 0, 0, 0}, {90, 183, 56, 56, 0, 0, 0}, {91, 63, 42, 42, 0, 0, 0}, {92, 54, 33, 33, 0, 0, 0}, {93, 47, 81, 81, 0, 0, 0}, {100, 175, 26, 34, 0, 0, 0}, {101, 102, 32, 117, 0, 0, 0}, {102, 158, 32, 117, 0, 0, 0}, {103, 208, 20, 57, 0, 0, 0}, {104, 56, 32, 116, 0, 0, 0}, {105, 93, 62, 63, 0, 0, 0}, {106, 138, 44, 44, 0, 0, 0}, {107, 108, 64, 65, 0, 0, 0}, {108, 32, 84, 92, 0, 0, 0}, {109, 185, 9, 9, 0, 0, 0}, {110, 84, 254, 254, 3, 1, 2}, {111, 34, 16, 18, 3, 16, 17}, {112, 174, 12, 12, 0, 0, 0}, {113, 124, 36, 39, 0, 0, 0}, {114, 237, 44, 44, 0, 0, 0}, {115, 4, 64, 64, 0, 0, 0}, {116, 76, 22, 24, 0, 0, 0}, {117, 128, 6, 6, 3, 4, 5}, {118, 56, 14, 14, 0, 0, 0}, {119, 116, 12, 12, 3, 10, 11}, {120, 134, 97, 97, 0, 0, 0}, {121, 237, 2, 2, 3, 0, 1}, {122, 203, 2, 2, 3, 0, 1}, {123, 250, 113, 113, 3, 0, 1}, {124, 87, 35, 57, 0, 0, 0}, {125, 203, 6, 6, 0, 0, 0}, {126, 220, 79, 81, 3, 79, 80}, {127, 25, 35, 35, 0, 0, 0}, {128, 226, 35, 35, 0, 0, 0}, {129, 46, 22, 24, 0, 0, 0}, {130, 29, 13, 13, 0, 0, 0}, {131, 223, 255, 255, 0, 0, 0}, {132, 85, 14, 39, 0, 0, 0}, {133, 6, 18, 18, 0, 0, 0}, {134, 229, 43, 43, 0, 0, 0}, {135, 203, 8, 8, 0, 0, 0}, {136, 1, 22, 22, 0, 0, 0}, {137, 195, 14, 16, 0, 0, 0}, {138, 109, 36, 120, 0, 0, 0}, {139, 168, 43, 43, 3, 41, 42}, {140, 181, 41, 41, 0, 0, 0}, {141, 47, 32, 32, 0, 0, 0}, {142, 72, 243, 243, 0, 0, 0}, {143, 131, 14, 16, 0, 0, 0}, {144, 127, 93, 93, 0, 0, 0}, {146, 103, 100, 100, 0, 0, 0}, {147, 154, 36, 54, 0, 0, 0}, {148, 178, 60, 78, 0, 0, 0}, {149, 200, 30, 60, 0, 0, 0}, {150, 134, 42, 42, 0, 0, 0}, {151, 219, 8, 8, 3, 6, 7}, {152, 208, 4, 8, 0, 0, 0}, {153, 188, 12, 12, 0, 0, 0}, {154, 84, 15, 15, 3, 6, 7}, {155, 22, 13, 13, 3, 4, 5}, {156, 19, 6, 6, 3, 0, 1}, {157, 21, 15, 15, 3, 12, 13}, {158, 134, 14, 15, 3, 12, 13}, {160, 78, 12, 12, 3, 8, 9}, {161, 68, 3, 3, 3, 0, 1}, {162, 189, 8, 9, 0, 0, 0}, {163, 127, 28, 28, 0, 0, 0}, {164, 154, 44, 44, 0, 0, 0}, {165, 21, 3, 3, 0, 0, 0}, {166, 21, 9, 9, 0, 0, 0}, {167, 144, 22, 22, 0, 0, 0}, {168, 1, 12, 12, 0, 0, 0}, {169, 234, 18, 18, 0, 0, 0}, {170, 73, 34, 34, 0, 0, 0}, {171, 181, 66, 66, 0, 0, 0}, {172, 22, 98, 98, 0, 0, 0}, {173, 83, 8, 8, 0, 0, 0}, {174, 167, 48, 48, 0, 0, 0}, {175, 138, 19, 19, 3, 14, 15}, {176, 234, 3, 3, 3, 0, 1}, {177, 240, 20, 20, 0, 0, 0}, {178, 47, 24, 24, 0, 0, 0}, {179, 189, 29, 29, 1, 26, 0}, {180, 52, 45, 47, 1, 42, 0}, {181, 174, 4, 4, 0, 0, 0}, {182, 229, 40, 40, 0, 0, 0}, {183, 85, 2, 2, 3, 0, 1}, {184, 159, 206, 206, 3, 4, 5}, {185, 186, 7, 7, 3, 4, 5}, {186, 72, 29, 29, 3, 0, 1}, {191, 92, 27, 27, 0, 0, 0}, {192, 36, 44, 54, 0, 0, 0}, {193, 71, 22, 26, 0, 0, 0}, {194, 98, 25, 33, 0, 0, 0}, {195, 120, 37, 37, 0, 0, 0}, {200, 134, 42, 42, 3, 40, 41}, {201, 205, 14, 14, 3, 12, 13}, {214, 69, 8, 8, 3, 6, 7}, {215, 101, 3, 3, 0, 0, 0}, {216, 50, 3, 3, 3, 0, 1}, {217, 202, 6, 6, 0, 0, 0}, {218, 17, 7, 7, 3, 0, 1}, {219, 162, 2, 2, 0, 0, 0}, {225, 208, 65, 73, 0, 0, 0}, {226, 207, 8, 8, 0, 0, 0}, {230, 163, 42, 42, 0, 0, 0}, {231, 105, 40, 40, 0, 0, 0}, {232, 151, 63, 65, 0, 0, 0}, {233, 35, 182, 182, 0, 0, 0}, {234, 150, 40, 40, 0, 0, 0}, {235, 179, 42, 42, 0, 0, 0}, {241, 90, 32, 32, 0, 0, 0}, {242, 104, 52, 60, 0, 0, 0}, {243, 85, 53, 61, 1, 52, 0}, {244, 95, 6, 6, 0, 0, 0}, {245, 130, 2, 2, 0, 0, 0}, {246, 184, 38, 38, 0, 0, 0}, {247, 81, 19, 19, 0, 0, 0}, {248, 8, 254, 254, 3, 3, 4}, {249, 204, 36, 36, 0, 0, 0}, {250, 49, 30, 30, 0, 0, 0}, {251, 170, 18, 18, 0, 0, 0}, {252, 44, 18, 18, 0, 0, 0}, {253, 83, 51, 54, 0, 0, 0}, {254, 46, 9, 9, 0, 0, 0}, {256, 71, 42, 42, 3, 8, 9}, {257, 131, 9, 9, 0, 0, 0}, {258, 187, 32, 232, 3, 0, 1}, {259, 92, 235, 237, 0, 0, 0}, {260, 146, 5, 14, 0, 0, 0}, {261, 179, 27, 61, 0, 0, 0}, {262, 12, 18, 23, 0, 0, 0}, {263, 133, 255, 255, 0, 0, 0}, {264, 49, 28, 32, 0, 0, 0}, {265, 26, 16, 20, 0, 0, 0}, {266, 193, 255, 255, 3, 2, 3}, {267, 35, 255, 255, 3, 2, 3}, {268, 14, 4, 4, 3, 2, 3}, {269, 109, 213, 215, 0, 0, 0}, {270, 59, 19, 20, 0, 0, 0}, {271, 22, 52, 53, 0, 0, 0}, {275, 126, 31, 32, 0, 0, 0}, {276, 18, 49, 50, 0, 0, 0}, {277, 62, 30, 30, 0, 0, 0}, {280, 70, 33, 33, 0, 0, 0}, {281, 48, 13, 13, 0, 0, 0}, {282, 123, 35, 35, 3, 32, 33}, {283, 74, 144, 145, 0, 0, 0}, {284, 99, 32, 32, 3, 30, 31}, {285, 137, 40, 49, 3, 38, 39}, {286, 210, 53, 57, 3, 50, 51}, {287, 1, 23, 23, 3, 20, 21}, {288, 20, 23, 23, 3, 20, 21}, {290, 251, 46, 46, 0, 0, 0}, {291, 10, 57, 57, 0, 0, 0}, {299, 19, 96, 98, 0, 0, 0}, {300, 217, 22, 22, 0, 0, 0}, {301, 243, 58, 58, 0, 0, 0}, {310, 28, 17, 17, 0, 0, 0}, {311, 95, 116, 116, 0, 0, 0}, {320, 243, 20, 20, 3, 2, 3}, {321, 88, 2, 2, 3, 0, 1}, {322, 243, 149, 149, 0, 0, 0}, {323, 78, 147, 147, 3, 0, 1}, {324, 132, 146, 146, 0, 0, 0}, {330, 23, 158, 167, 0, 0, 0}, {331, 91, 230, 233, 0, 0, 0}, {332, 236, 239, 239, 0, 0, 0}, {333, 231, 109, 109, 0, 0, 0}, {334, 72, 10, 10, 0, 0, 0}, {335, 225, 24, 24, 0, 0, 0}, {336, 245, 84, 84, 0, 0, 0}, {339, 199, 5, 5, 0, 0, 0}, {340, 99, 70, 70, 0, 0, 0}, {350, 232, 20, 252, 0, 0, 0}, {360, 11, 25, 25, 0, 0, 0}, {370, 75, 87, 109, 0, 0, 0}, {371, 10, 26, 26, 0, 0, 0}, {372, 26, 140, 140, 0, 0, 0}, {373, 117, 42, 42, 0, 0, 0}, {375, 251, 140, 140, 0, 0, 0}, {380, 232, 20, 20, 0, 0, 0}, {385, 147, 133, 133, 3, 2, 3}, {386, 132, 16, 16, 3, 4, 5}, {387, 4, 72, 72, 3, 4, 5}, {388, 8, 37, 37, 3, 32, 33}, {390, 156, 238, 238, 0, 0, 0}, {395, 0, 212, 212, 0, 0, 0}, {396, 50, 160, 160, 0, 0, 0}, {397, 182, 108, 108, 0, 0, 0}, {400, 110, 254, 254, 3, 4, 5}, {401, 183, 6, 6, 3, 4, 5}, {410, 160, 53, 53, 0, 0, 0}, {411, 106, 3, 3, 0, 0, 0}, {412, 33, 6, 6, 3, 4, 5}, {413, 77, 7, 7, 3, 4, 5}, {435, 134, 46, 46, 0, 0, 0}, {436, 193, 9, 9, 0, 0, 0}, {437, 30, 1, 1, 0, 0, 0}, {440, 66, 35, 35, 0, 0, 0}, {9000, 113, 137, 137, 0, 0, 0}, {9005, 117, 34, 34, 0, 0, 0}, {10001, 209, 20, 20, 0, 0, 0}, {10002, 186, 41, 41, 0, 0, 0}, {10003, 4, 1, 1, 0, 0, 0}, {10004, 133, 9, 9, 0, 0, 0}, {10005, 103, 9, 9, 0, 0, 0}, {10006, 193, 4, 4, 0, 0, 0}, {10007, 71, 17, 17, 0, 0, 0}, {10008, 240, 14, 14, 0, 0, 0}, {10151, 195, 85, 85, 0, 0, 0}, {11000, 134, 51, 52, 3, 4, 5}, {11001, 15, 135, 136, 0, 0, 0}, {11002, 234, 179, 180, 3, 4, 5}, {11003, 64, 5, 5, 0, 0, 0}, {11004, 11, 232, 232, 3, 8, 9}, {11005, 93, 230, 230, 0, 0, 0}, {11010, 46, 49, 49, 0, 0, 0}, {11011, 106, 44, 44, 0, 0, 0}, {11020, 205, 16, 16, 0, 0, 0}, {11030, 144, 44, 44, 0, 0, 0}, {11031, 133, 44, 44, 0, 0, 0}, {11032, 85, 44, 44, 0, 0, 0}, {11033, 195, 37, 37, 3, 16, 17}, {11034, 79, 5, 5, 0, 0, 0}, {11035, 128, 8, 8, 3, 4, 5}, {11036, 177, 34, 34, 0, 0, 0}, {11037, 130, 28, 28, 0, 0, 0}, {11038, 47, 38, 38, 0, 0, 0}, {11039, 142, 9, 9, 0, 0, 0}, {11040, 132, 44, 44, 0, 0, 0}, {11041, 208, 44, 44, 0, 0, 0}, {11042, 201, 44, 44, 0, 0, 0}, {11043, 193, 44, 44, 0, 0, 0}, {11044, 189, 44, 44, 0, 0, 0}, {12900, 114, 44, 44, 3, 0, 1}, {12901, 254, 59, 59, 3, 30, 31}, {12902, 140, 53, 53, 3, 4, 5}, {12903, 249, 46, 46, 3, 0, 1}, {12904, 77, 54, 54, 3, 28, 29}, {12905, 49, 43, 43, 3, 0, 1}, {12915, 94, 249, 249, 3, 0, 1}, {12918, 139, 51, 51, 0, 0, 0}, {12919, 7, 18, 18, 3, 16, 17}, {12920, 20, 5, 5, 0, 0, 0}, {42000, 227, 1, 1, 0, 0, 0}, {42001, 239, 46, 46, 0, 0, 0}, {50001, 246, 32, 32, 0, 0, 0}, {50002, 181, 246, 246, 0, 0, 0}, {50003, 62, 19, 19, 0, 0, 0}, {50004, 240, 10, 10, 3, 8, 9}, {50005, 152, 6, 6, 3, 4, 5}, {52000, 13, 100, 100, 0, 0, 0}, {52001, 239, 1, 1, 0, 0, 0}, {60000, 4, 22, 22, 3, 20, 21}, {60010, 208, 33, 33, 0, 0, 0}, {60011, 183, 7, 7, 0, 0, 0}, {60012, 99, 36, 36, 3, 32, 33}, {60013, 129, 24, 24, 3, 20, 21}, {60014, 134, 8, 8, 3, 4, 5}, {60020, 202, 4, 4, 0, 0, 0}, {60040, 156, 245, 245, 0, 0, 0}, {60041, 191, 255, 255, 0, 0, 0}, {60045, 14, 15, 23, 3, 2, 3}, {60046, 171, 28, 28, 3, 8, 9}, {60047, 55, 7, 7, 0, 0, 0} }};

//! MAVLINK VERSION
constexpr auto MAVLINK_VERSION = 1;


// ENUM DEFINITIONS


/** @brief  */
enum class MAV_STORM32_TUNNEL_PAYLOAD_TYPE
{
    STORM32_CH1_IN=200, /* Registered for STorM32 gimbal controller. For communication with gimbal or camera. | */
    STORM32_CH1_OUT=201, /* Registered for STorM32 gimbal controller. For communication with gimbal or camera. | */
    STORM32_CH2_IN=202, /* Registered for STorM32 gimbal controller. For communication with gimbal. | */
    STORM32_CH2_OUT=203, /* Registered for STorM32 gimbal controller. For communication with gimbal. | */
    STORM32_CH3_IN=204, /* Registered for STorM32 gimbal controller. For communication with camera. | */
    STORM32_CH3_OUT=205, /* Registered for STorM32 gimbal controller. For communication with camera. | */
};

//! MAV_STORM32_TUNNEL_PAYLOAD_TYPE ENUM_END
constexpr auto MAV_STORM32_TUNNEL_PAYLOAD_TYPE_ENUM_END = 206;

/** @brief Gimbal manager capability flags. */
enum class MAV_STORM32_GIMBAL_MANAGER_CAP_FLAGS : uint32_t
{
    HAS_PROFILES=1, /* The gimbal manager supports several profiles. | */
};

//! MAV_STORM32_GIMBAL_MANAGER_CAP_FLAGS ENUM_END
constexpr auto MAV_STORM32_GIMBAL_MANAGER_CAP_FLAGS_ENUM_END = 2;

/** @brief Flags for gimbal manager operation. Used for setting and reporting, unless specified otherwise. If a setting has been accepted by the gimbal manager is reported in the STORM32_GIMBAL_MANAGER_STATUS message. */
enum class MAV_STORM32_GIMBAL_MANAGER_FLAGS : uint16_t
{
    RC_ACTIVE=1, /* Request to set RC input to active, or report RC input is active. Implies RC mixed. RC exclusive is achieved by setting all clients to inactive. | */
    CLIENT_ONBOARD_ACTIVE=2, /* Request to set onboard/companion computer client to active, or report this client is active. | */
    CLIENT_AUTOPILOT_ACTIVE=4, /* Request to set autopliot client to active, or report this client is active. | */
    CLIENT_GCS_ACTIVE=8, /* Request to set GCS client to active, or report this client is active. | */
    CLIENT_CAMERA_ACTIVE=16, /* Request to set camera client to active, or report this client is active. | */
    CLIENT_GCS2_ACTIVE=32, /* Request to set GCS2 client to active, or report this client is active. | */
    CLIENT_CAMERA2_ACTIVE=64, /* Request to set camera2 client to active, or report this client is active. | */
    CLIENT_CUSTOM_ACTIVE=128, /* Request to set custom client to active, or report this client is active. | */
    CLIENT_CUSTOM2_ACTIVE=256, /* Request to set custom2 client to active, or report this client is active. | */
    SET_SUPERVISON=512, /* Request supervision. This flag is only for setting, it is not reported. | */
    SET_RELEASE=1024, /* Release supervision. This flag is only for setting, it is not reported. | */
};

//! MAV_STORM32_GIMBAL_MANAGER_FLAGS ENUM_END
constexpr auto MAV_STORM32_GIMBAL_MANAGER_FLAGS_ENUM_END = 1025;

/** @brief Gimbal manager client ID. In a prioritizing profile, the priorities are determined by the implementation; they could e.g. be custom1 > onboard > GCS > autopilot/camera > GCS2 > custom2. */
enum class MAV_STORM32_GIMBAL_MANAGER_CLIENT : uint8_t
{
    NONE=0, /* For convenience. | */
    ONBOARD=1, /* This is the onboard/companion computer client. | */
    AUTOPILOT=2, /* This is the autopilot client. | */
    GCS=3, /* This is the GCS client. | */
    CAMERA=4, /* This is the camera client. | */
    GCS2=5, /* This is the GCS2 client. | */
    CAMERA2=6, /* This is the camera2 client. | */
    CUSTOM=7, /* This is the custom client. | */
    CUSTOM2=8, /* This is the custom2 client. | */
};

//! MAV_STORM32_GIMBAL_MANAGER_CLIENT ENUM_END
constexpr auto MAV_STORM32_GIMBAL_MANAGER_CLIENT_ENUM_END = 9;

/** @brief Gimbal manager profiles. Only standard profiles are defined. Any implementation can define its own profile(s) in addition, and should use enum values > 16. */
enum class MAV_STORM32_GIMBAL_MANAGER_PROFILE : uint8_t
{
    DEFAULT=0, /* Default profile. Implementation specific. | */
    CUSTOM=1, /* Not supported/deprecated. | */
    COOPERATIVE=2, /* Profile with cooperative behavior. | */
    EXCLUSIVE=3, /* Profile with exclusive behavior. | */
    PRIORITY_COOPERATIVE=4, /* Profile with priority and cooperative behavior for equal priority. | */
    PRIORITY_EXCLUSIVE=5, /* Profile with priority and exclusive behavior for equal priority. | */
};

//! MAV_STORM32_GIMBAL_MANAGER_PROFILE ENUM_END
constexpr auto MAV_STORM32_GIMBAL_MANAGER_PROFILE_ENUM_END = 6;

/** @brief Enumeration of possible shot modes. */
enum class MAV_QSHOT_MODE : uint16_t
{
    UNDEFINED=0, /* Undefined shot mode. Can be used to determine if qshots should be used or not. | */
    DEFAULT=1, /* Start normal gimbal operation. Is usually used to return back from a shot. | */
    GIMBAL_RETRACT=2, /* Load and keep safe gimbal position and stop stabilization. | */
    GIMBAL_NEUTRAL=3, /* Load neutral gimbal position and keep it while stabilizing. | */
    GIMBAL_MISSION=4, /* Start mission with gimbal control. | */
    GIMBAL_RC_CONTROL=5, /* Start RC gimbal control. | */
    POI_TARGETING=6, /* Start gimbal tracking the point specified by Lat, Lon, Alt. | */
    SYSID_TARGETING=7, /* Start gimbal tracking the system with specified system ID. | */
    CABLECAM_2POINT=8, /* Start 2-point cable cam quick shot. | */
    HOME_TARGETING=9, /* Start gimbal tracking the home location. | */
};

//! MAV_QSHOT_MODE ENUM_END
constexpr auto MAV_QSHOT_MODE_ENUM_END = 10;

/** @brief RADIO_LINK_STATS flags (bitmask).
        The RX_RECEIVE and TX_RECEIVE flags indicate from which antenna the received data are taken for processing.
        If a flag is set then the data received on antenna2 is processed, else the data received on antenna1 is used.
        The RX_TRANSMIT and TX_TRANSMIT flags specify which antenna are transmitting data.
        Both antenna 1 and antenna 2 transmit flags can be set simultaneously, e.g., in case of dual-band or dual-frequency systems.
        If neither flag is set then antenna 1 should be assumed.
       */
enum class MLRS_RADIO_LINK_STATS_FLAGS : uint16_t
{
    RSSI_DBM=1, /* Rssi values are in negative dBm. Values 1..254 corresponds to -1..-254 dBm. 0: no reception, UINT8_MAX: unknown. | */
    RX_RECEIVE_ANTENNA2=2, /* Rx receive antenna. When set the data received on antenna 2 are taken, else the data stems from antenna 1. | */
    RX_TRANSMIT_ANTENNA1=4, /* Rx transmit antenna. Data are transmitted on antenna 1. | */
    RX_TRANSMIT_ANTENNA2=8, /* Rx transmit antenna. Data are transmitted on antenna 2. | */
    TX_RECEIVE_ANTENNA2=16, /* Tx receive antenna. When set the data received on antenna 2 are taken, else the data stems from antenna 1. | */
    TX_TRANSMIT_ANTENNA1=32, /* Tx transmit antenna. Data are transmitted on antenna 1. | */
    TX_TRANSMIT_ANTENNA2=64, /* Tx transmit antenna. Data are transmitted on antenna 2. | */
};

//! MLRS_RADIO_LINK_STATS_FLAGS ENUM_END
constexpr auto MLRS_RADIO_LINK_STATS_FLAGS_ENUM_END = 65;

/** @brief RADIO_LINK_TYPE enum. */
enum class MLRS_RADIO_LINK_TYPE : uint8_t
{
    GENERIC=0, /* Unknown radio link type. | */
    HERELINK=1, /* Radio link is HereLink. | */
    DRAGONLINK=2, /* Radio link is Dragon Link. | */
    RFD900=3, /* Radio link is RFD900. | */
    CROSSFIRE=4, /* Radio link is Crossfire. | */
    EXPRESSLRS=5, /* Radio link is ExpressLRS. | */
    MLRS=6, /* Radio link is mLRS. | */
};

//! MLRS_RADIO_LINK_TYPE ENUM_END
constexpr auto MLRS_RADIO_LINK_TYPE_ENUM_END = 7;


} // namespace storm32
} // namespace mavlink

// MESSAGE DEFINITIONS
#include "./mavlink_msg_storm32_gimbal_manager_information.hpp"
#include "./mavlink_msg_storm32_gimbal_manager_status.hpp"
#include "./mavlink_msg_storm32_gimbal_manager_control.hpp"
#include "./mavlink_msg_storm32_gimbal_manager_control_pitchyaw.hpp"
#include "./mavlink_msg_storm32_gimbal_manager_correct_roll.hpp"
#include "./mavlink_msg_qshot_status.hpp"
#include "./mavlink_msg_autopilot_state_for_gimbal_device_ext.hpp"
#include "./mavlink_msg_frsky_passthrough_array.hpp"
#include "./mavlink_msg_param_value_array.hpp"
#include "./mavlink_msg_mlrs_radio_link_stats.hpp"
#include "./mavlink_msg_mlrs_radio_link_information.hpp"
#include "./mavlink_msg_mlrs_radio_link_flow_control.hpp"

// base include
#include "../ardupilotmega/ardupilotmega.hpp"
