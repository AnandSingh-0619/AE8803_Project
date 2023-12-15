// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/VehicleTrajectoryBezier.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/vehicle_trajectory_bezier__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/vehicle_trajectory_bezier__struct.h"


// Include directives for member types
// Member `control_points`
#include "px4_msgs/msg/trajectory_bezier.h"
// Member `control_points`
#include "px4_msgs/msg/trajectory_bezier__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t VehicleTrajectoryBezier__rosidl_typesupport_introspection_c__size_function__TrajectoryBezier__control_points(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * VehicleTrajectoryBezier__rosidl_typesupport_introspection_c__get_const_function__TrajectoryBezier__control_points(
  const void * untyped_member, size_t index)
{
  const px4_msgs__msg__TrajectoryBezier ** member =
    (const px4_msgs__msg__TrajectoryBezier **)(untyped_member);
  return &(*member)[index];
}

void * VehicleTrajectoryBezier__rosidl_typesupport_introspection_c__get_function__TrajectoryBezier__control_points(
  void * untyped_member, size_t index)
{
  px4_msgs__msg__TrajectoryBezier ** member =
    (px4_msgs__msg__TrajectoryBezier **)(untyped_member);
  return &(*member)[index];
}

static rosidl_typesupport_introspection_c__MessageMember VehicleTrajectoryBezier__rosidl_typesupport_introspection_c__VehicleTrajectoryBezier_message_member_array[3] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleTrajectoryBezier, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleTrajectoryBezier, control_points),  // bytes offset in struct
    NULL,  // default value
    VehicleTrajectoryBezier__rosidl_typesupport_introspection_c__size_function__TrajectoryBezier__control_points,  // size() function pointer
    VehicleTrajectoryBezier__rosidl_typesupport_introspection_c__get_const_function__TrajectoryBezier__control_points,  // get_const(index) function pointer
    VehicleTrajectoryBezier__rosidl_typesupport_introspection_c__get_function__TrajectoryBezier__control_points,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bezier_order",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleTrajectoryBezier, bezier_order),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleTrajectoryBezier__rosidl_typesupport_introspection_c__VehicleTrajectoryBezier_message_members = {
  "px4_msgs__msg",  // message namespace
  "VehicleTrajectoryBezier",  // message name
  3,  // number of fields
  sizeof(px4_msgs__msg__VehicleTrajectoryBezier),
  VehicleTrajectoryBezier__rosidl_typesupport_introspection_c__VehicleTrajectoryBezier_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleTrajectoryBezier__rosidl_typesupport_introspection_c__VehicleTrajectoryBezier_message_type_support_handle = {
  0,
  &VehicleTrajectoryBezier__rosidl_typesupport_introspection_c__VehicleTrajectoryBezier_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, VehicleTrajectoryBezier)() {
  VehicleTrajectoryBezier__rosidl_typesupport_introspection_c__VehicleTrajectoryBezier_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, TrajectoryBezier)();
  if (!VehicleTrajectoryBezier__rosidl_typesupport_introspection_c__VehicleTrajectoryBezier_message_type_support_handle.typesupport_identifier) {
    VehicleTrajectoryBezier__rosidl_typesupport_introspection_c__VehicleTrajectoryBezier_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleTrajectoryBezier__rosidl_typesupport_introspection_c__VehicleTrajectoryBezier_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
