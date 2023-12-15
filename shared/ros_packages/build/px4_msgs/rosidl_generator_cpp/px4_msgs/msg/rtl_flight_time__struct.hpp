// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/RtlFlightTime.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__RTL_FLIGHT_TIME__STRUCT_HPP_
#define PX4_MSGS__MSG__RTL_FLIGHT_TIME__STRUCT_HPP_

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
# define DEPRECATED__px4_msgs__msg__RtlFlightTime __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__RtlFlightTime __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RtlFlightTime_
{
  using Type = RtlFlightTime_<ContainerAllocator>;

  explicit RtlFlightTime_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->rtl_time_s = 0.0f;
      this->rtl_limit_fraction = 0.0f;
    }
  }

  explicit RtlFlightTime_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->rtl_time_s = 0.0f;
      this->rtl_limit_fraction = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _rtl_time_s_type =
    float;
  _rtl_time_s_type rtl_time_s;
  using _rtl_limit_fraction_type =
    float;
  _rtl_limit_fraction_type rtl_limit_fraction;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__rtl_time_s(
    const float & _arg)
  {
    this->rtl_time_s = _arg;
    return *this;
  }
  Type & set__rtl_limit_fraction(
    const float & _arg)
  {
    this->rtl_limit_fraction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::RtlFlightTime_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::RtlFlightTime_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::RtlFlightTime_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::RtlFlightTime_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RtlFlightTime_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RtlFlightTime_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::RtlFlightTime_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::RtlFlightTime_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::RtlFlightTime_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::RtlFlightTime_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__RtlFlightTime
    std::shared_ptr<px4_msgs::msg::RtlFlightTime_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__RtlFlightTime
    std::shared_ptr<px4_msgs::msg::RtlFlightTime_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RtlFlightTime_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->rtl_time_s != other.rtl_time_s) {
      return false;
    }
    if (this->rtl_limit_fraction != other.rtl_limit_fraction) {
      return false;
    }
    return true;
  }
  bool operator!=(const RtlFlightTime_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RtlFlightTime_

// alias to use template instance with default allocator
using RtlFlightTime =
  px4_msgs::msg::RtlFlightTime_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__RTL_FLIGHT_TIME__STRUCT_HPP_
