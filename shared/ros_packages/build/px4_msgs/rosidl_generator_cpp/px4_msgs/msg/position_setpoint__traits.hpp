// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__POSITION_SETPOINT__TRAITS_HPP_
#define PX4_MSGS__MSG__POSITION_SETPOINT__TRAITS_HPP_

#include "px4_msgs/msg/position_setpoint__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<px4_msgs::msg::PositionSetpoint>()
{
  return "px4_msgs::msg::PositionSetpoint";
}

template<>
struct has_fixed_size<px4_msgs::msg::PositionSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::PositionSetpoint>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__POSITION_SETPOINT__TRAITS_HPP_
