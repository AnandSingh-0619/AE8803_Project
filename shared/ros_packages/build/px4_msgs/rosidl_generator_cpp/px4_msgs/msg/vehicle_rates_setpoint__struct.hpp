// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleRatesSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__VEHICLE_RATES_SETPOINT__STRUCT_HPP_
#define PX4_MSGS__MSG__VEHICLE_RATES_SETPOINT__STRUCT_HPP_

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
# define DEPRECATED__px4_msgs__msg__VehicleRatesSetpoint __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleRatesSetpoint __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleRatesSetpoint_
{
  using Type = VehicleRatesSetpoint_<ContainerAllocator>;

  explicit VehicleRatesSetpoint_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->thrust_body.begin(), this->thrust_body.end(), 0.0f);
    }
  }

  explicit VehicleRatesSetpoint_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : thrust_body(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->thrust_body.begin(), this->thrust_body.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _thrust_body_type =
    std::array<float, 3>;
  _thrust_body_type thrust_body;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__thrust_body(
    const std::array<float, 3> & _arg)
  {
    this->thrust_body = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleRatesSetpoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleRatesSetpoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleRatesSetpoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleRatesSetpoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleRatesSetpoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleRatesSetpoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleRatesSetpoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleRatesSetpoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleRatesSetpoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleRatesSetpoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleRatesSetpoint
    std::shared_ptr<px4_msgs::msg::VehicleRatesSetpoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleRatesSetpoint
    std::shared_ptr<px4_msgs::msg::VehicleRatesSetpoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleRatesSetpoint_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->thrust_body != other.thrust_body) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleRatesSetpoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleRatesSetpoint_

// alias to use template instance with default allocator
using VehicleRatesSetpoint =
  px4_msgs::msg::VehicleRatesSetpoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__VEHICLE_RATES_SETPOINT__STRUCT_HPP_
