// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/OnboardComputerStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/onboard_computer_status__struct.hpp"
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

size_t size_function__OnboardComputerStatus__cpu_cores(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__OnboardComputerStatus__cpu_cores(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__OnboardComputerStatus__cpu_cores(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 8> *>(untyped_member);
  return &member[index];
}

size_t size_function__OnboardComputerStatus__cpu_combined(const void * untyped_member)
{
  (void)untyped_member;
  return 10;
}

const void * get_const_function__OnboardComputerStatus__cpu_combined(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 10> *>(untyped_member);
  return &member[index];
}

void * get_function__OnboardComputerStatus__cpu_combined(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 10> *>(untyped_member);
  return &member[index];
}

size_t size_function__OnboardComputerStatus__gpu_cores(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__OnboardComputerStatus__gpu_cores(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__OnboardComputerStatus__gpu_cores(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__OnboardComputerStatus__gpu_combined(const void * untyped_member)
{
  (void)untyped_member;
  return 10;
}

const void * get_const_function__OnboardComputerStatus__gpu_combined(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 10> *>(untyped_member);
  return &member[index];
}

void * get_function__OnboardComputerStatus__gpu_combined(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 10> *>(untyped_member);
  return &member[index];
}

size_t size_function__OnboardComputerStatus__temperature_core(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__OnboardComputerStatus__temperature_core(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int8_t, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__OnboardComputerStatus__temperature_core(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int8_t, 8> *>(untyped_member);
  return &member[index];
}

size_t size_function__OnboardComputerStatus__fan_speed(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__OnboardComputerStatus__fan_speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__OnboardComputerStatus__fan_speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<int16_t, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__OnboardComputerStatus__storage_type(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__OnboardComputerStatus__storage_type(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__OnboardComputerStatus__storage_type(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__OnboardComputerStatus__storage_usage(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__OnboardComputerStatus__storage_usage(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__OnboardComputerStatus__storage_usage(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__OnboardComputerStatus__storage_total(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__OnboardComputerStatus__storage_total(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__OnboardComputerStatus__storage_total(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

size_t size_function__OnboardComputerStatus__link_type(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__OnboardComputerStatus__link_type(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__OnboardComputerStatus__link_type(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 6> *>(untyped_member);
  return &member[index];
}

size_t size_function__OnboardComputerStatus__link_tx_rate(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__OnboardComputerStatus__link_tx_rate(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__OnboardComputerStatus__link_tx_rate(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 6> *>(untyped_member);
  return &member[index];
}

size_t size_function__OnboardComputerStatus__link_rx_rate(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__OnboardComputerStatus__link_rx_rate(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__OnboardComputerStatus__link_rx_rate(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 6> *>(untyped_member);
  return &member[index];
}

size_t size_function__OnboardComputerStatus__link_tx_max(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__OnboardComputerStatus__link_tx_max(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__OnboardComputerStatus__link_tx_max(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 6> *>(untyped_member);
  return &member[index];
}

size_t size_function__OnboardComputerStatus__link_rx_max(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__OnboardComputerStatus__link_rx_max(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__OnboardComputerStatus__link_rx_max(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 6> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OnboardComputerStatus_message_member_array[20] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uptime",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, uptime),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cpu_cores",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, cpu_cores),  // bytes offset in struct
    nullptr,  // default value
    size_function__OnboardComputerStatus__cpu_cores,  // size() function pointer
    get_const_function__OnboardComputerStatus__cpu_cores,  // get_const(index) function pointer
    get_function__OnboardComputerStatus__cpu_cores,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cpu_combined",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    10,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, cpu_combined),  // bytes offset in struct
    nullptr,  // default value
    size_function__OnboardComputerStatus__cpu_combined,  // size() function pointer
    get_const_function__OnboardComputerStatus__cpu_combined,  // get_const(index) function pointer
    get_function__OnboardComputerStatus__cpu_combined,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gpu_cores",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, gpu_cores),  // bytes offset in struct
    nullptr,  // default value
    size_function__OnboardComputerStatus__gpu_cores,  // size() function pointer
    get_const_function__OnboardComputerStatus__gpu_cores,  // get_const(index) function pointer
    get_function__OnboardComputerStatus__gpu_cores,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gpu_combined",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    10,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, gpu_combined),  // bytes offset in struct
    nullptr,  // default value
    size_function__OnboardComputerStatus__gpu_combined,  // size() function pointer
    get_const_function__OnboardComputerStatus__gpu_combined,  // get_const(index) function pointer
    get_function__OnboardComputerStatus__gpu_combined,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature_board",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, temperature_board),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature_core",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, temperature_core),  // bytes offset in struct
    nullptr,  // default value
    size_function__OnboardComputerStatus__temperature_core,  // size() function pointer
    get_const_function__OnboardComputerStatus__temperature_core,  // get_const(index) function pointer
    get_function__OnboardComputerStatus__temperature_core,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fan_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, fan_speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__OnboardComputerStatus__fan_speed,  // size() function pointer
    get_const_function__OnboardComputerStatus__fan_speed,  // get_const(index) function pointer
    get_function__OnboardComputerStatus__fan_speed,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ram_usage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, ram_usage),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ram_total",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, ram_total),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "storage_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, storage_type),  // bytes offset in struct
    nullptr,  // default value
    size_function__OnboardComputerStatus__storage_type,  // size() function pointer
    get_const_function__OnboardComputerStatus__storage_type,  // get_const(index) function pointer
    get_function__OnboardComputerStatus__storage_type,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "storage_usage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, storage_usage),  // bytes offset in struct
    nullptr,  // default value
    size_function__OnboardComputerStatus__storage_usage,  // size() function pointer
    get_const_function__OnboardComputerStatus__storage_usage,  // get_const(index) function pointer
    get_function__OnboardComputerStatus__storage_usage,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "storage_total",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, storage_total),  // bytes offset in struct
    nullptr,  // default value
    size_function__OnboardComputerStatus__storage_total,  // size() function pointer
    get_const_function__OnboardComputerStatus__storage_total,  // get_const(index) function pointer
    get_function__OnboardComputerStatus__storage_total,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, link_type),  // bytes offset in struct
    nullptr,  // default value
    size_function__OnboardComputerStatus__link_type,  // size() function pointer
    get_const_function__OnboardComputerStatus__link_type,  // get_const(index) function pointer
    get_function__OnboardComputerStatus__link_type,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_tx_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, link_tx_rate),  // bytes offset in struct
    nullptr,  // default value
    size_function__OnboardComputerStatus__link_tx_rate,  // size() function pointer
    get_const_function__OnboardComputerStatus__link_tx_rate,  // get_const(index) function pointer
    get_function__OnboardComputerStatus__link_tx_rate,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_rx_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, link_rx_rate),  // bytes offset in struct
    nullptr,  // default value
    size_function__OnboardComputerStatus__link_rx_rate,  // size() function pointer
    get_const_function__OnboardComputerStatus__link_rx_rate,  // get_const(index) function pointer
    get_function__OnboardComputerStatus__link_rx_rate,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_tx_max",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, link_tx_max),  // bytes offset in struct
    nullptr,  // default value
    size_function__OnboardComputerStatus__link_tx_max,  // size() function pointer
    get_const_function__OnboardComputerStatus__link_tx_max,  // get_const(index) function pointer
    get_function__OnboardComputerStatus__link_tx_max,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_rx_max",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::OnboardComputerStatus, link_rx_max),  // bytes offset in struct
    nullptr,  // default value
    size_function__OnboardComputerStatus__link_rx_max,  // size() function pointer
    get_const_function__OnboardComputerStatus__link_rx_max,  // get_const(index) function pointer
    get_function__OnboardComputerStatus__link_rx_max,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OnboardComputerStatus_message_members = {
  "px4_msgs::msg",  // message namespace
  "OnboardComputerStatus",  // message name
  20,  // number of fields
  sizeof(px4_msgs::msg::OnboardComputerStatus),
  OnboardComputerStatus_message_member_array  // message members
};

static const rosidl_message_type_support_t OnboardComputerStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OnboardComputerStatus_message_members,
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
get_message_type_support_handle<px4_msgs::msg::OnboardComputerStatus>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::OnboardComputerStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, OnboardComputerStatus)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::OnboardComputerStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
