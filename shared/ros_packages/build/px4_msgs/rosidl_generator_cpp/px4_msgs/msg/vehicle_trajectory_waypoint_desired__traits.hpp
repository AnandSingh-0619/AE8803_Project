// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleTrajectoryWaypointDesired.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__VEHICLE_TRAJECTORY_WAYPOINT_DESIRED__TRAITS_HPP_
#define PX4_MSGS__MSG__VEHICLE_TRAJECTORY_WAYPOINT_DESIRED__TRAITS_HPP_

#include "px4_msgs/msg/vehicle_trajectory_waypoint_desired__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'waypoints'
#include "px4_msgs/msg/trajectory_waypoint__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<px4_msgs::msg::VehicleTrajectoryWaypointDesired>()
{
  return "px4_msgs::msg::VehicleTrajectoryWaypointDesired";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleTrajectoryWaypointDesired>
  : std::integral_constant<bool, has_fixed_size<px4_msgs::msg::TrajectoryWaypoint>::value> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleTrajectoryWaypointDesired>
  : std::integral_constant<bool, has_bounded_size<px4_msgs::msg::TrajectoryWaypoint>::value> {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__VEHICLE_TRAJECTORY_WAYPOINT_DESIRED__TRAITS_HPP_
