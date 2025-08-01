// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mavros_msgs:msg/OpenDroneIDSystemUpdate.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SYSTEM_UPDATE__STRUCT_H_
#define MAVROS_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SYSTEM_UPDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/OpenDroneIDSystemUpdate in the package mavros_msgs.
/**
  * Remote ID message - System Update
  * https://mavlink.io/en/messages/common.html#OPEN_DRONE_ID_SYSTEM_UPDATE
 */
typedef struct mavros_msgs__msg__OpenDroneIDSystemUpdate
{
  std_msgs__msg__Header header;
  int32_t operator_latitude;
  int32_t operator_longitude;
  float operator_altitude_geo;
} mavros_msgs__msg__OpenDroneIDSystemUpdate;

// Struct for a sequence of mavros_msgs__msg__OpenDroneIDSystemUpdate.
typedef struct mavros_msgs__msg__OpenDroneIDSystemUpdate__Sequence
{
  mavros_msgs__msg__OpenDroneIDSystemUpdate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mavros_msgs__msg__OpenDroneIDSystemUpdate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAVROS_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SYSTEM_UPDATE__STRUCT_H_
