// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/EstimatorSensorBias.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_generator_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/estimator_sensor_bias__struct.hpp"
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

size_t size_function__EstimatorSensorBias__gyro_bias(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorSensorBias__gyro_bias(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorSensorBias__gyro_bias(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorSensorBias__gyro_bias_variance(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorSensorBias__gyro_bias_variance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorSensorBias__gyro_bias_variance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorSensorBias__accel_bias(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorSensorBias__accel_bias(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorSensorBias__accel_bias(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorSensorBias__accel_bias_variance(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorSensorBias__accel_bias_variance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorSensorBias__accel_bias_variance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorSensorBias__mag_bias(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorSensorBias__mag_bias(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorSensorBias__mag_bias(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorSensorBias__mag_bias_variance(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorSensorBias__mag_bias_variance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorSensorBias__mag_bias_variance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EstimatorSensorBias_message_member_array[17] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSensorBias, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_sample",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSensorBias, timestamp_sample),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_device_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSensorBias, gyro_device_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_bias",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSensorBias, gyro_bias),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorSensorBias__gyro_bias,  // size() function pointer
    get_const_function__EstimatorSensorBias__gyro_bias,  // get_const(index) function pointer
    get_function__EstimatorSensorBias__gyro_bias,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_bias_limit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSensorBias, gyro_bias_limit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_bias_variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSensorBias, gyro_bias_variance),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorSensorBias__gyro_bias_variance,  // size() function pointer
    get_const_function__EstimatorSensorBias__gyro_bias_variance,  // get_const(index) function pointer
    get_function__EstimatorSensorBias__gyro_bias_variance,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_bias_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSensorBias, gyro_bias_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_device_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSensorBias, accel_device_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_bias",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSensorBias, accel_bias),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorSensorBias__accel_bias,  // size() function pointer
    get_const_function__EstimatorSensorBias__accel_bias,  // get_const(index) function pointer
    get_function__EstimatorSensorBias__accel_bias,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_bias_limit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSensorBias, accel_bias_limit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_bias_variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSensorBias, accel_bias_variance),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorSensorBias__accel_bias_variance,  // size() function pointer
    get_const_function__EstimatorSensorBias__accel_bias_variance,  // get_const(index) function pointer
    get_function__EstimatorSensorBias__accel_bias_variance,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_bias_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSensorBias, accel_bias_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mag_device_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSensorBias, mag_device_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mag_bias",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSensorBias, mag_bias),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorSensorBias__mag_bias,  // size() function pointer
    get_const_function__EstimatorSensorBias__mag_bias,  // get_const(index) function pointer
    get_function__EstimatorSensorBias__mag_bias,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mag_bias_limit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSensorBias, mag_bias_limit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mag_bias_variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSensorBias, mag_bias_variance),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorSensorBias__mag_bias_variance,  // size() function pointer
    get_const_function__EstimatorSensorBias__mag_bias_variance,  // get_const(index) function pointer
    get_function__EstimatorSensorBias__mag_bias_variance,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mag_bias_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorSensorBias, mag_bias_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EstimatorSensorBias_message_members = {
  "px4_msgs::msg",  // message namespace
  "EstimatorSensorBias",  // message name
  17,  // number of fields
  sizeof(px4_msgs::msg::EstimatorSensorBias),
  EstimatorSensorBias_message_member_array  // message members
};

static const rosidl_message_type_support_t EstimatorSensorBias_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EstimatorSensorBias_message_members,
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
get_message_type_support_handle<px4_msgs::msg::EstimatorSensorBias>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::EstimatorSensorBias_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, EstimatorSensorBias)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::EstimatorSensorBias_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
