// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/TimesyncStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__TIMESYNC_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__TIMESYNC_STATUS__STRUCT_HPP_

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
# define DEPRECATED__px4_msgs__msg__TimesyncStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__TimesyncStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimesyncStatus_
{
  using Type = TimesyncStatus_<ContainerAllocator>;

  explicit TimesyncStatus_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->source_protocol = 0;
      this->remote_timestamp = 0ull;
      this->observed_offset = 0ll;
      this->estimated_offset = 0ll;
      this->round_trip_time = 0ul;
    }
  }

  explicit TimesyncStatus_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->source_protocol = 0;
      this->remote_timestamp = 0ull;
      this->observed_offset = 0ll;
      this->estimated_offset = 0ll;
      this->round_trip_time = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _source_protocol_type =
    uint8_t;
  _source_protocol_type source_protocol;
  using _remote_timestamp_type =
    uint64_t;
  _remote_timestamp_type remote_timestamp;
  using _observed_offset_type =
    int64_t;
  _observed_offset_type observed_offset;
  using _estimated_offset_type =
    int64_t;
  _estimated_offset_type estimated_offset;
  using _round_trip_time_type =
    uint32_t;
  _round_trip_time_type round_trip_time;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__source_protocol(
    const uint8_t & _arg)
  {
    this->source_protocol = _arg;
    return *this;
  }
  Type & set__remote_timestamp(
    const uint64_t & _arg)
  {
    this->remote_timestamp = _arg;
    return *this;
  }
  Type & set__observed_offset(
    const int64_t & _arg)
  {
    this->observed_offset = _arg;
    return *this;
  }
  Type & set__estimated_offset(
    const int64_t & _arg)
  {
    this->estimated_offset = _arg;
    return *this;
  }
  Type & set__round_trip_time(
    const uint32_t & _arg)
  {
    this->round_trip_time = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SOURCE_PROTOCOL_MAVLINK =
    0u;
  static constexpr uint8_t SOURCE_PROTOCOL_RTPS =
    1u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::TimesyncStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::TimesyncStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::TimesyncStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::TimesyncStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TimesyncStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TimesyncStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TimesyncStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TimesyncStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::TimesyncStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::TimesyncStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__TimesyncStatus
    std::shared_ptr<px4_msgs::msg::TimesyncStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__TimesyncStatus
    std::shared_ptr<px4_msgs::msg::TimesyncStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimesyncStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->source_protocol != other.source_protocol) {
      return false;
    }
    if (this->remote_timestamp != other.remote_timestamp) {
      return false;
    }
    if (this->observed_offset != other.observed_offset) {
      return false;
    }
    if (this->estimated_offset != other.estimated_offset) {
      return false;
    }
    if (this->round_trip_time != other.round_trip_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimesyncStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimesyncStatus_

// alias to use template instance with default allocator
using TimesyncStatus =
  px4_msgs::msg::TimesyncStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t TimesyncStatus_<ContainerAllocator>::SOURCE_PROTOCOL_MAVLINK;
template<typename ContainerAllocator>
constexpr uint8_t TimesyncStatus_<ContainerAllocator>::SOURCE_PROTOCOL_RTPS;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__TIMESYNC_STATUS__STRUCT_HPP_
