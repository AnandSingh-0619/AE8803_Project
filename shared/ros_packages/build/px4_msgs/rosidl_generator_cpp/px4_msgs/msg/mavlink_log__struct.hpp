// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/MavlinkLog.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__MAVLINK_LOG__STRUCT_HPP_
#define PX4_MSGS__MSG__MAVLINK_LOG__STRUCT_HPP_

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
# define DEPRECATED__px4_msgs__msg__MavlinkLog __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__MavlinkLog __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MavlinkLog_
{
  using Type = MavlinkLog_<ContainerAllocator>;

  explicit MavlinkLog_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<uint8_t, 127>::iterator, uint8_t>(this->text.begin(), this->text.end(), 0);
      this->severity = 0;
    }
  }

  explicit MavlinkLog_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : text(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<uint8_t, 127>::iterator, uint8_t>(this->text.begin(), this->text.end(), 0);
      this->severity = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _text_type =
    std::array<uint8_t, 127>;
  _text_type text;
  using _severity_type =
    uint8_t;
  _severity_type severity;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__text(
    const std::array<uint8_t, 127> & _arg)
  {
    this->text = _arg;
    return *this;
  }
  Type & set__severity(
    const uint8_t & _arg)
  {
    this->severity = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    8u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::MavlinkLog_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::MavlinkLog_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::MavlinkLog_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::MavlinkLog_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::MavlinkLog_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::MavlinkLog_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::MavlinkLog_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::MavlinkLog_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::MavlinkLog_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::MavlinkLog_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__MavlinkLog
    std::shared_ptr<px4_msgs::msg::MavlinkLog_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__MavlinkLog
    std::shared_ptr<px4_msgs::msg::MavlinkLog_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MavlinkLog_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->text != other.text) {
      return false;
    }
    if (this->severity != other.severity) {
      return false;
    }
    return true;
  }
  bool operator!=(const MavlinkLog_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MavlinkLog_

// alias to use template instance with default allocator
using MavlinkLog =
  px4_msgs::msg::MavlinkLog_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t MavlinkLog_<ContainerAllocator>::ORB_QUEUE_LENGTH;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__MAVLINK_LOG__STRUCT_HPP_
