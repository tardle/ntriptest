// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mavros_msgs:msg/MagnetometerReporter.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/magnetometer_reporter__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mavros_msgs/msg/detail/magnetometer_reporter__struct.h"
#include "mavros_msgs/msg/detail/magnetometer_reporter__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mavros_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mavros_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mavros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _MagnetometerReporter__ros_msg_type = mavros_msgs__msg__MagnetometerReporter;

static bool _MagnetometerReporter__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MagnetometerReporter__ros_msg_type * ros_message = static_cast<const _MagnetometerReporter__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: report
  {
    cdr << ros_message->report;
  }

  // Field name: confidence
  {
    cdr << ros_message->confidence;
  }

  // Field name: compass_id
  {
    cdr << ros_message->compass_id;
  }

  // Field name: cal_mask
  {
    cdr << ros_message->cal_mask;
  }

  // Field name: cal_status
  {
    cdr << ros_message->cal_status;
  }

  // Field name: autosaved
  {
    cdr << ros_message->autosaved;
  }

  // Field name: fitness
  {
    cdr << ros_message->fitness;
  }

  // Field name: ofs_x
  {
    cdr << ros_message->ofs_x;
  }

  // Field name: ofs_y
  {
    cdr << ros_message->ofs_y;
  }

  // Field name: ofs_z
  {
    cdr << ros_message->ofs_z;
  }

  // Field name: diag_x
  {
    cdr << ros_message->diag_x;
  }

  // Field name: diag_y
  {
    cdr << ros_message->diag_y;
  }

  // Field name: diag_z
  {
    cdr << ros_message->diag_z;
  }

  // Field name: offdiag_x
  {
    cdr << ros_message->offdiag_x;
  }

  // Field name: offdiag_y
  {
    cdr << ros_message->offdiag_y;
  }

  // Field name: offdiag_z
  {
    cdr << ros_message->offdiag_z;
  }

  // Field name: orientation_confidence
  {
    cdr << ros_message->orientation_confidence;
  }

  // Field name: old_orientation
  {
    cdr << ros_message->old_orientation;
  }

  // Field name: new_orientation
  {
    cdr << ros_message->new_orientation;
  }

  // Field name: scale_factor
  {
    cdr << ros_message->scale_factor;
  }

  return true;
}

static bool _MagnetometerReporter__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MagnetometerReporter__ros_msg_type * ros_message = static_cast<_MagnetometerReporter__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: report
  {
    cdr >> ros_message->report;
  }

  // Field name: confidence
  {
    cdr >> ros_message->confidence;
  }

  // Field name: compass_id
  {
    cdr >> ros_message->compass_id;
  }

  // Field name: cal_mask
  {
    cdr >> ros_message->cal_mask;
  }

  // Field name: cal_status
  {
    cdr >> ros_message->cal_status;
  }

  // Field name: autosaved
  {
    cdr >> ros_message->autosaved;
  }

  // Field name: fitness
  {
    cdr >> ros_message->fitness;
  }

  // Field name: ofs_x
  {
    cdr >> ros_message->ofs_x;
  }

  // Field name: ofs_y
  {
    cdr >> ros_message->ofs_y;
  }

  // Field name: ofs_z
  {
    cdr >> ros_message->ofs_z;
  }

  // Field name: diag_x
  {
    cdr >> ros_message->diag_x;
  }

  // Field name: diag_y
  {
    cdr >> ros_message->diag_y;
  }

  // Field name: diag_z
  {
    cdr >> ros_message->diag_z;
  }

  // Field name: offdiag_x
  {
    cdr >> ros_message->offdiag_x;
  }

  // Field name: offdiag_y
  {
    cdr >> ros_message->offdiag_y;
  }

  // Field name: offdiag_z
  {
    cdr >> ros_message->offdiag_z;
  }

  // Field name: orientation_confidence
  {
    cdr >> ros_message->orientation_confidence;
  }

  // Field name: old_orientation
  {
    cdr >> ros_message->old_orientation;
  }

  // Field name: new_orientation
  {
    cdr >> ros_message->new_orientation;
  }

  // Field name: scale_factor
  {
    cdr >> ros_message->scale_factor;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t get_serialized_size_mavros_msgs__msg__MagnetometerReporter(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MagnetometerReporter__ros_msg_type * ros_message = static_cast<const _MagnetometerReporter__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name report
  {
    size_t item_size = sizeof(ros_message->report);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name confidence
  {
    size_t item_size = sizeof(ros_message->confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name compass_id
  {
    size_t item_size = sizeof(ros_message->compass_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cal_mask
  {
    size_t item_size = sizeof(ros_message->cal_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cal_status
  {
    size_t item_size = sizeof(ros_message->cal_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name autosaved
  {
    size_t item_size = sizeof(ros_message->autosaved);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fitness
  {
    size_t item_size = sizeof(ros_message->fitness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ofs_x
  {
    size_t item_size = sizeof(ros_message->ofs_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ofs_y
  {
    size_t item_size = sizeof(ros_message->ofs_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ofs_z
  {
    size_t item_size = sizeof(ros_message->ofs_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diag_x
  {
    size_t item_size = sizeof(ros_message->diag_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diag_y
  {
    size_t item_size = sizeof(ros_message->diag_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diag_z
  {
    size_t item_size = sizeof(ros_message->diag_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offdiag_x
  {
    size_t item_size = sizeof(ros_message->offdiag_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offdiag_y
  {
    size_t item_size = sizeof(ros_message->offdiag_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offdiag_z
  {
    size_t item_size = sizeof(ros_message->offdiag_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name orientation_confidence
  {
    size_t item_size = sizeof(ros_message->orientation_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name old_orientation
  {
    size_t item_size = sizeof(ros_message->old_orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name new_orientation
  {
    size_t item_size = sizeof(ros_message->new_orientation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name scale_factor
  {
    size_t item_size = sizeof(ros_message->scale_factor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MagnetometerReporter__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mavros_msgs__msg__MagnetometerReporter(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t max_serialized_size_mavros_msgs__msg__MagnetometerReporter(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: report
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: confidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: compass_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cal_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: cal_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: autosaved
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: fitness
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ofs_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ofs_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ofs_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: diag_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: diag_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: diag_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: offdiag_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: offdiag_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: offdiag_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: orientation_confidence
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: old_orientation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: new_orientation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: scale_factor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mavros_msgs__msg__MagnetometerReporter;
    is_plain =
      (
      offsetof(DataType, scale_factor) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _MagnetometerReporter__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mavros_msgs__msg__MagnetometerReporter(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MagnetometerReporter = {
  "mavros_msgs::msg",
  "MagnetometerReporter",
  _MagnetometerReporter__cdr_serialize,
  _MagnetometerReporter__cdr_deserialize,
  _MagnetometerReporter__get_serialized_size,
  _MagnetometerReporter__max_serialized_size
};

static rosidl_message_type_support_t _MagnetometerReporter__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MagnetometerReporter,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, msg, MagnetometerReporter)() {
  return &_MagnetometerReporter__type_support;
}

#if defined(__cplusplus)
}
#endif
