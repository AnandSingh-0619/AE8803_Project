// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/VehicleAngularAccelerationSetpoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/vehicle_angular_acceleration_setpoint__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/vehicle_angular_acceleration_setpoint__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

static rosidl_typesupport_introspection_c__MessageMember VehicleAngularAccelerationSetpoint__rosidl_typesupport_introspection_c__VehicleAngularAccelerationSetpoint_message_member_array[3] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleAngularAccelerationSetpoint, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_sample",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleAngularAccelerationSetpoint, timestamp_sample),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xyz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleAngularAccelerationSetpoint, xyz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleAngularAccelerationSetpoint__rosidl_typesupport_introspection_c__VehicleAngularAccelerationSetpoint_message_members = {
  "px4_msgs__msg",  // message namespace
  "VehicleAngularAccelerationSetpoint",  // message name
  3,  // number of fields
  sizeof(px4_msgs__msg__VehicleAngularAccelerationSetpoint),
  VehicleAngularAccelerationSetpoint__rosidl_typesupport_introspection_c__VehicleAngularAccelerationSetpoint_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleAngularAccelerationSetpoint__rosidl_typesupport_introspection_c__VehicleAngularAccelerationSetpoint_message_type_support_handle = {
  0,
  &VehicleAngularAccelerationSetpoint__rosidl_typesupport_introspection_c__VehicleAngularAccelerationSetpoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, VehicleAngularAccelerationSetpoint)() {
  if (!VehicleAngularAccelerationSetpoint__rosidl_typesupport_introspection_c__VehicleAngularAccelerationSetpoint_message_type_support_handle.typesupport_identifier) {
    VehicleAngularAccelerationSetpoint__rosidl_typesupport_introspection_c__VehicleAngularAccelerationSetpoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleAngularAccelerationSetpoint__rosidl_typesupport_introspection_c__VehicleAngularAccelerationSetpoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
