// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/ActuatorOutputs.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/actuator_outputs__struct.hpp"
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

size_t size_function__ActuatorOutputs__output(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__ActuatorOutputs__output(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__ActuatorOutputs__output(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 16> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActuatorOutputs_message_member_array[3] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ActuatorOutputs, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "noutputs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ActuatorOutputs, noutputs),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "output",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::ActuatorOutputs, output),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActuatorOutputs__output,  // size() function pointer
    get_const_function__ActuatorOutputs__output,  // get_const(index) function pointer
    get_function__ActuatorOutputs__output,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActuatorOutputs_message_members = {
  "px4_msgs::msg",  // message namespace
  "ActuatorOutputs",  // message name
  3,  // number of fields
  sizeof(px4_msgs::msg::ActuatorOutputs),
  ActuatorOutputs_message_member_array  // message members
};

static const rosidl_message_type_support_t ActuatorOutputs_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActuatorOutputs_message_members,
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
get_message_type_support_handle<px4_msgs::msg::ActuatorOutputs>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::ActuatorOutputs_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, ActuatorOutputs)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::ActuatorOutputs_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
