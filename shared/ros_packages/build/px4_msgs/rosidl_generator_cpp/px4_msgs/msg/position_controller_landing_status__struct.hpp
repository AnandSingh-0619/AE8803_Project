// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/PositionControllerLandingStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__POSITION_CONTROLLER_LANDING_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__POSITION_CONTROLLER_LANDING_STATUS__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__PositionControllerLandingStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__PositionControllerLandingStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionControllerLandingStatus_
{
  using Type = PositionControllerLandingStatus_<ContainerAllocator>;

  explicit PositionControllerLandingStatus_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->horizontal_slope_displacement = 0.0f;
      this->slope_angle_rad = 0.0f;
      this->flare_length = 0.0f;
      this->abort_landing = false;
    }
  }

  explicit PositionControllerLandingStatus_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->horizontal_slope_displacement = 0.0f;
      this->slope_angle_rad = 0.0f;
      this->flare_length = 0.0f;
      this->abort_landing = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _horizontal_slope_displacement_type =
    float;
  _horizontal_slope_displacement_type horizontal_slope_displacement;
  using _slope_angle_rad_type =
    float;
  _slope_angle_rad_type slope_angle_rad;
  using _flare_length_type =
    float;
  _flare_length_type flare_length;
  using _abort_landing_type =
    bool;
  _abort_landing_type abort_landing;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__horizontal_slope_displacement(
    const float & _arg)
  {
    this->horizontal_slope_displacement = _arg;
    return *this;
  }
  Type & set__slope_angle_rad(
    const float & _arg)
  {
    this->slope_angle_rad = _arg;
    return *this;
  }
  Type & set__flare_length(
    const float & _arg)
  {
    this->flare_length = _arg;
    return *this;
  }
  Type & set__abort_landing(
    const bool & _arg)
  {
    this->abort_landing = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__PositionControllerLandingStatus
    std::shared_ptr<px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__PositionControllerLandingStatus
    std::shared_ptr<px4_msgs::msg::PositionControllerLandingStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionControllerLandingStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->horizontal_slope_displacement != other.horizontal_slope_displacement) {
      return false;
    }
    if (this->slope_angle_rad != other.slope_angle_rad) {
      return false;
    }
    if (this->flare_length != other.flare_length) {
      return false;
    }
    if (this->abort_landing != other.abort_landing) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionControllerLandingStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionControllerLandingStatus_

// alias to use template instance with default allocator
using PositionControllerLandingStatus =
  px4_msgs::msg::PositionControllerLandingStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__POSITION_CONTROLLER_LANDING_STATUS__STRUCT_HPP_
