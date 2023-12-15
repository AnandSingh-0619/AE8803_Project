// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/LandingGear.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/landing_gear__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/landing_gear__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember LandingGear__rosidl_typesupport_introspection_c__LandingGear_message_member_array[2] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__LandingGear, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "landing_gear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__LandingGear, landing_gear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LandingGear__rosidl_typesupport_introspection_c__LandingGear_message_members = {
  "px4_msgs__msg",  // message namespace
  "LandingGear",  // message name
  2,  // number of fields
  sizeof(px4_msgs__msg__LandingGear),
  LandingGear__rosidl_typesupport_introspection_c__LandingGear_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LandingGear__rosidl_typesupport_introspection_c__LandingGear_message_type_support_handle = {
  0,
  &LandingGear__rosidl_typesupport_introspection_c__LandingGear_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, LandingGear)() {
  if (!LandingGear__rosidl_typesupport_introspection_c__LandingGear_message_type_support_handle.typesupport_identifier) {
    LandingGear__rosidl_typesupport_introspection_c__LandingGear_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LandingGear__rosidl_typesupport_introspection_c__LandingGear_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
