// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/SensorPreflightMag.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/sensor_preflight_mag__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/sensor_preflight_mag__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember SensorPreflightMag__rosidl_typesupport_introspection_c__SensorPreflightMag_message_member_array[2] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorPreflightMag, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mag_inconsistency_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorPreflightMag, mag_inconsistency_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SensorPreflightMag__rosidl_typesupport_introspection_c__SensorPreflightMag_message_members = {
  "px4_msgs__msg",  // message namespace
  "SensorPreflightMag",  // message name
  2,  // number of fields
  sizeof(px4_msgs__msg__SensorPreflightMag),
  SensorPreflightMag__rosidl_typesupport_introspection_c__SensorPreflightMag_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SensorPreflightMag__rosidl_typesupport_introspection_c__SensorPreflightMag_message_type_support_handle = {
  0,
  &SensorPreflightMag__rosidl_typesupport_introspection_c__SensorPreflightMag_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, SensorPreflightMag)() {
  if (!SensorPreflightMag__rosidl_typesupport_introspection_c__SensorPreflightMag_message_type_support_handle.typesupport_identifier) {
    SensorPreflightMag__rosidl_typesupport_introspection_c__SensorPreflightMag_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SensorPreflightMag__rosidl_typesupport_introspection_c__SensorPreflightMag_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
