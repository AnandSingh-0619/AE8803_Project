// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/GpsInjectData.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__GPS_INJECT_DATA__STRUCT_HPP_
#define PX4_MSGS__MSG__GPS_INJECT_DATA__STRUCT_HPP_

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
# define DEPRECATED__px4_msgs__msg__GpsInjectData __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__GpsInjectData __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GpsInjectData_
{
  using Type = GpsInjectData_<ContainerAllocator>;

  explicit GpsInjectData_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->len = 0;
      this->flags = 0;
      std::fill<typename std::array<uint8_t, 182>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  explicit GpsInjectData_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->len = 0;
      this->flags = 0;
      std::fill<typename std::array<uint8_t, 182>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _len_type =
    uint8_t;
  _len_type len;
  using _flags_type =
    uint8_t;
  _flags_type flags;
  using _data_type =
    std::array<uint8_t, 182>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__len(
    const uint8_t & _arg)
  {
    this->len = _arg;
    return *this;
  }
  Type & set__flags(
    const uint8_t & _arg)
  {
    this->flags = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 182> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ORB_QUEUE_LENGTH =
    8u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::GpsInjectData_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::GpsInjectData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::GpsInjectData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::GpsInjectData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GpsInjectData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GpsInjectData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::GpsInjectData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::GpsInjectData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::GpsInjectData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::GpsInjectData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__GpsInjectData
    std::shared_ptr<px4_msgs::msg::GpsInjectData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__GpsInjectData
    std::shared_ptr<px4_msgs::msg::GpsInjectData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpsInjectData_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->len != other.len) {
      return false;
    }
    if (this->flags != other.flags) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpsInjectData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpsInjectData_

// alias to use template instance with default allocator
using GpsInjectData =
  px4_msgs::msg::GpsInjectData_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t GpsInjectData_<ContainerAllocator>::ORB_QUEUE_LENGTH;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__GPS_INJECT_DATA__STRUCT_HPP_
