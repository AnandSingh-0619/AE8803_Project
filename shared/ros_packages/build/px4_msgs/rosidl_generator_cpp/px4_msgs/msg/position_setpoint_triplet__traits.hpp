// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/PositionSetpointTriplet.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__POSITION_SETPOINT_TRIPLET__TRAITS_HPP_
#define PX4_MSGS__MSG__POSITION_SETPOINT_TRIPLET__TRAITS_HPP_

#include "px4_msgs/msg/position_setpoint_triplet__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'previous'
// Member 'current'
// Member 'next'
#include "px4_msgs/msg/position_setpoint__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<px4_msgs::msg::PositionSetpointTriplet>()
{
  return "px4_msgs::msg::PositionSetpointTriplet";
}

template<>
struct has_fixed_size<px4_msgs::msg::PositionSetpointTriplet>
  : std::integral_constant<bool, has_fixed_size<px4_msgs::msg::PositionSetpoint>::value> {};

template<>
struct has_bounded_size<px4_msgs::msg::PositionSetpointTriplet>
  : std::integral_constant<bool, has_bounded_size<px4_msgs::msg::PositionSetpoint>::value> {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__POSITION_SETPOINT_TRIPLET__TRAITS_HPP_
