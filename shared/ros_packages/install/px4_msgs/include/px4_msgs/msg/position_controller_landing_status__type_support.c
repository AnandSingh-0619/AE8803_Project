// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/PositionControllerLandingStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/position_controller_landing_status__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/position_controller_landing_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember PositionControllerLandingStatus__rosidl_typesupport_introspection_c__PositionControllerLandingStatus_message_member_array[5] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__PositionControllerLandingStatus, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "horizontal_slope_displacement",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__PositionControllerLandingStatus, horizontal_slope_displacement),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "slope_angle_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__PositionControllerLandingStatus, slope_angle_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flare_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__PositionControllerLandingStatus, flare_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "abort_landing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__PositionControllerLandingStatus, abort_landing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PositionControllerLandingStatus__rosidl_typesupport_introspection_c__PositionControllerLandingStatus_message_members = {
  "px4_msgs__msg",  // message namespace
  "PositionControllerLandingStatus",  // message name
  5,  // number of fields
  sizeof(px4_msgs__msg__PositionControllerLandingStatus),
  PositionControllerLandingStatus__rosidl_typesupport_introspection_c__PositionControllerLandingStatus_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PositionControllerLandingStatus__rosidl_typesupport_introspection_c__PositionControllerLandingStatus_message_type_support_handle = {
  0,
  &PositionControllerLandingStatus__rosidl_typesupport_introspection_c__PositionControllerLandingStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, PositionControllerLandingStatus)() {
  if (!PositionControllerLandingStatus__rosidl_typesupport_introspection_c__PositionControllerLandingStatus_message_type_support_handle.typesupport_identifier) {
    PositionControllerLandingStatus__rosidl_typesupport_introspection_c__PositionControllerLandingStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PositionControllerLandingStatus__rosidl_typesupport_introspection_c__PositionControllerLandingStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
