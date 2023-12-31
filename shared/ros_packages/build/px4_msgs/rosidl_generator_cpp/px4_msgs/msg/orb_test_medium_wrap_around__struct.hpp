// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/OrbTestMediumWrapAround.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__ORB_TEST_MEDIUM_WRAP_AROUND__STRUCT_HPP_
#define PX4_MSGS__MSG__ORB_TEST_MEDIUM_WRAP_AROUND__STRUCT_HPP_

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
# define DEPRECATED__px4_msgs__msg__OrbTestMediumWrapAround __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__OrbTestMediumWrapAround __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OrbTestMediumWrapAround_
{
  using Type = OrbTestMediumWrapAround_<ContainerAllocator>;

  explicit OrbTestMediumWrapAround_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->val = 0l;
      std::fill<typename std::array<uint8_t, 64>::iterator, uint8_t>(this->junk.begin(), this->junk.end(), 0);
    }
  }

  explicit OrbTestMediumWrapAround_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : junk(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->val = 0l;
      std::fill<typename std::array<uint8_t, 64>::iterator, uint8_t>(this->junk.begin(), this->junk.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _val_type =
    int32_t;
  _val_type val;
  using _junk_type =
    std::array<uint8_t, 64>;
  _junk_type junk;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__val(
    const int32_t & _arg)
  {
    this->val = _arg;
    return *this;
  }
  Type & set__junk(
    const std::array<uint8_t, 64> & _arg)
  {
    this->junk = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::OrbTestMediumWrapAround_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::OrbTestMediumWrapAround_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::OrbTestMediumWrapAround_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::OrbTestMediumWrapAround_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::OrbTestMediumWrapAround_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::OrbTestMediumWrapAround_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::OrbTestMediumWrapAround_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::OrbTestMediumWrapAround_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::OrbTestMediumWrapAround_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::OrbTestMediumWrapAround_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__OrbTestMediumWrapAround
    std::shared_ptr<px4_msgs::msg::OrbTestMediumWrapAround_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__OrbTestMediumWrapAround
    std::shared_ptr<px4_msgs::msg::OrbTestMediumWrapAround_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OrbTestMediumWrapAround_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->val != other.val) {
      return false;
    }
    if (this->junk != other.junk) {
      return false;
    }
    return true;
  }
  bool operator!=(const OrbTestMediumWrapAround_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OrbTestMediumWrapAround_

// alias to use template instance with default allocator
using OrbTestMediumWrapAround =
  px4_msgs::msg::OrbTestMediumWrapAround_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__ORB_TEST_MEDIUM_WRAP_AROUND__STRUCT_HPP_
