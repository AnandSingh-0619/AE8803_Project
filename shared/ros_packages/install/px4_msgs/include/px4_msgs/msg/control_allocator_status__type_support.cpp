// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/ControlAllocatorStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/control_allocator_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace px4_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

size_t size_function__ControlAllocatorStatus__allocated_torque(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControlAllocatorStatus__allocated_torque(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControlAllocatorStatus__allocated_torque(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__ControlAllocatorStatus__unallocated_torque(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControlAllocatorStatus__unallocated_torque(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControlAllocatorStatus__unallocated_torque(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__ControlAllocatorStatus__allocated_thrust(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControlAllocatorStatus__allocated_thrust(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControlAllocatorStatus__allocated_thrust(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__ControlAllocatorStatus__unallocated_thrust(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControlAllocatorStatus__unallocated_thrust(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControlAllocatorStatus__unallocated_thrust(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__ControlAllocatorStatus__actuator_saturation(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__ControlAllocatorStatus__actuator_saturation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__ControlAllocatorStatus__actuator_saturation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 16> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ControlAllocatorStatus_message_member_array[8] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ControlAllocatorStatus, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "torque_setpoint_achieved",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ControlAllocatorStatus, torque_setpoint_achieved),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allocated_torque",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ControlAllocatorStatus, allocated_torque),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControlAllocatorStatus__allocated_torque,  // size() function pointer
    get_const_function__ControlAllocatorStatus__allocated_torque,  // get_const(index) function pointer
    get_function__ControlAllocatorStatus__allocated_torque,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unallocated_torque",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ControlAllocatorStatus, unallocated_torque),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControlAllocatorStatus__unallocated_torque,  // size() function pointer
    get_const_function__ControlAllocatorStatus__unallocated_torque,  // get_const(index) function pointer
    get_function__ControlAllocatorStatus__unallocated_torque,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "thrust_setpoint_achieved",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ControlAllocatorStatus, thrust_setpoint_achieved),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allocated_thrust",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ControlAllocatorStatus, allocated_thrust),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControlAllocatorStatus__allocated_thrust,  // size() function pointer
    get_const_function__ControlAllocatorStatus__allocated_thrust,  // get_const(index) function pointer
    get_function__ControlAllocatorStatus__allocated_thrust,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unallocated_thrust",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ControlAllocatorStatus, unallocated_thrust),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControlAllocatorStatus__unallocated_thrust,  // size() function pointer
    get_const_function__ControlAllocatorStatus__unallocated_thrust,  // get_const(index) function pointer
    get_function__ControlAllocatorStatus__unallocated_thrust,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actuator_saturation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ControlAllocatorStatus, actuator_saturation),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControlAllocatorStatus__actuator_saturation,  // size() function pointer
    get_const_function__ControlAllocatorStatus__actuator_saturation,  // get_const(index) function pointer
    get_function__ControlAllocatorStatus__actuator_saturation,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ControlAllocatorStatus_message_members = {
  "px4_msgs::msg",  // message namespace
  "ControlAllocatorStatus",  // message name
  8,  // number of fields
  sizeof(px4_msgs::msg::ControlAllocatorStatus),
  ControlAllocatorStatus_message_member_array  // message members
};

static const rosidl_message_type_support_t ControlAllocatorStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ControlAllocatorStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace px4_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::ControlAllocatorStatus>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::ControlAllocatorStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, ControlAllocatorStatus)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::ControlAllocatorStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
