// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/Rpm.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__RPM__TRAITS_HPP_
#define PX4_MSGS__MSG__RPM__TRAITS_HPP_

#include "px4_msgs/msg/rpm__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<px4_msgs::msg::Rpm>()
{
  return "px4_msgs::msg::Rpm";
}

template<>
struct has_fixed_size<px4_msgs::msg::Rpm>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::Rpm>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__RPM__TRAITS_HPP_
