// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mavros_msgs:msg/OpenDroneIDOperatorID.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mavros_msgs/msg/detail/open_drone_id_operator_id__rosidl_typesupport_introspection_c.h"
#include "mavros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mavros_msgs/msg/detail/open_drone_id_operator_id__functions.h"
#include "mavros_msgs/msg/detail/open_drone_id_operator_id__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `id_or_mac`
// Member `operator_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mavros_msgs__msg__OpenDroneIDOperatorID__rosidl_typesupport_introspection_c__OpenDroneIDOperatorID_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mavros_msgs__msg__OpenDroneIDOperatorID__init(message_memory);
}

void mavros_msgs__msg__OpenDroneIDOperatorID__rosidl_typesupport_introspection_c__OpenDroneIDOperatorID_fini_function(void * message_memory)
{
  mavros_msgs__msg__OpenDroneIDOperatorID__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mavros_msgs__msg__OpenDroneIDOperatorID__rosidl_typesupport_introspection_c__OpenDroneIDOperatorID_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__OpenDroneIDOperatorID, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id_or_mac",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__OpenDroneIDOperatorID, id_or_mac),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "operator_id_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__OpenDroneIDOperatorID, operator_id_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "operator_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__msg__OpenDroneIDOperatorID, operator_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mavros_msgs__msg__OpenDroneIDOperatorID__rosidl_typesupport_introspection_c__OpenDroneIDOperatorID_message_members = {
  "mavros_msgs__msg",  // message namespace
  "OpenDroneIDOperatorID",  // message name
  4,  // number of fields
  sizeof(mavros_msgs__msg__OpenDroneIDOperatorID),
  mavros_msgs__msg__OpenDroneIDOperatorID__rosidl_typesupport_introspection_c__OpenDroneIDOperatorID_message_member_array,  // message members
  mavros_msgs__msg__OpenDroneIDOperatorID__rosidl_typesupport_introspection_c__OpenDroneIDOperatorID_init_function,  // function to initialize message memory (memory has to be allocated)
  mavros_msgs__msg__OpenDroneIDOperatorID__rosidl_typesupport_introspection_c__OpenDroneIDOperatorID_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mavros_msgs__msg__OpenDroneIDOperatorID__rosidl_typesupport_introspection_c__OpenDroneIDOperatorID_message_type_support_handle = {
  0,
  &mavros_msgs__msg__OpenDroneIDOperatorID__rosidl_typesupport_introspection_c__OpenDroneIDOperatorID_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, msg, OpenDroneIDOperatorID)() {
  mavros_msgs__msg__OpenDroneIDOperatorID__rosidl_typesupport_introspection_c__OpenDroneIDOperatorID_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!mavros_msgs__msg__OpenDroneIDOperatorID__rosidl_typesupport_introspection_c__OpenDroneIDOperatorID_message_type_support_handle.typesupport_identifier) {
    mavros_msgs__msg__OpenDroneIDOperatorID__rosidl_typesupport_introspection_c__OpenDroneIDOperatorID_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mavros_msgs__msg__OpenDroneIDOperatorID__rosidl_typesupport_introspection_c__OpenDroneIDOperatorID_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
