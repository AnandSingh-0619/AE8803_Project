// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/WheelEncoders.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__WHEEL_ENCODERS__STRUCT_HPP_
#define PX4_MSGS__MSG__WHEEL_ENCODERS__STRUCT_HPP_

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
# define DEPRECATED__px4_msgs__msg__WheelEncoders __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__WheelEncoders __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelEncoders_
{
  using Type = WheelEncoders_<ContainerAllocator>;

  explicit WheelEncoders_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->encoder_position = 0ll;
      this->speed = 0l;
      this->pulses_per_rev = 0ul;
    }
  }

  explicit WheelEncoders_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->encoder_position = 0ll;
      this->speed = 0l;
      this->pulses_per_rev = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _encoder_position_type =
    int64_t;
  _encoder_position_type encoder_position;
  using _speed_type =
    int32_t;
  _speed_type speed;
  using _pulses_per_rev_type =
    uint32_t;
  _pulses_per_rev_type pulses_per_rev;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__encoder_position(
    const int64_t & _arg)
  {
    this->encoder_position = _arg;
    return *this;
  }
  Type & set__speed(
    const int32_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__pulses_per_rev(
    const uint32_t & _arg)
  {
    this->pulses_per_rev = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::WheelEncoders_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::WheelEncoders_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::WheelEncoders_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::WheelEncoders_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::WheelEncoders_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::WheelEncoders_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::WheelEncoders_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::WheelEncoders_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::WheelEncoders_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::WheelEncoders_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__WheelEncoders
    std::shared_ptr<px4_msgs::msg::WheelEncoders_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__WheelEncoders
    std::shared_ptr<px4_msgs::msg::WheelEncoders_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelEncoders_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->encoder_position != other.encoder_position) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->pulses_per_rev != other.pulses_per_rev) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelEncoders_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelEncoders_

// alias to use template instance with default allocator
using WheelEncoders =
  px4_msgs::msg::WheelEncoders_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__WHEEL_ENCODERS__STRUCT_HPP_
