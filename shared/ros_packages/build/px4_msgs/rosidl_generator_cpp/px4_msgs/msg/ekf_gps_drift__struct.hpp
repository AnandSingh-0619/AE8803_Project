// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/EkfGpsDrift.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__EKF_GPS_DRIFT__STRUCT_HPP_
#define PX4_MSGS__MSG__EKF_GPS_DRIFT__STRUCT_HPP_

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
# define DEPRECATED__px4_msgs__msg__EkfGpsDrift __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__EkfGpsDrift __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EkfGpsDrift_
{
  using Type = EkfGpsDrift_<ContainerAllocator>;

  explicit EkfGpsDrift_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->hpos_drift_rate = 0.0f;
      this->vpos_drift_rate = 0.0f;
      this->hspd = 0.0f;
      this->blocked = false;
    }
  }

  explicit EkfGpsDrift_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->hpos_drift_rate = 0.0f;
      this->vpos_drift_rate = 0.0f;
      this->hspd = 0.0f;
      this->blocked = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _hpos_drift_rate_type =
    float;
  _hpos_drift_rate_type hpos_drift_rate;
  using _vpos_drift_rate_type =
    float;
  _vpos_drift_rate_type vpos_drift_rate;
  using _hspd_type =
    float;
  _hspd_type hspd;
  using _blocked_type =
    bool;
  _blocked_type blocked;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__hpos_drift_rate(
    const float & _arg)
  {
    this->hpos_drift_rate = _arg;
    return *this;
  }
  Type & set__vpos_drift_rate(
    const float & _arg)
  {
    this->vpos_drift_rate = _arg;
    return *this;
  }
  Type & set__hspd(
    const float & _arg)
  {
    this->hspd = _arg;
    return *this;
  }
  Type & set__blocked(
    const bool & _arg)
  {
    this->blocked = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::EkfGpsDrift_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::EkfGpsDrift_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::EkfGpsDrift_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::EkfGpsDrift_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EkfGpsDrift_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EkfGpsDrift_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EkfGpsDrift_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EkfGpsDrift_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::EkfGpsDrift_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::EkfGpsDrift_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__EkfGpsDrift
    std::shared_ptr<px4_msgs::msg::EkfGpsDrift_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__EkfGpsDrift
    std::shared_ptr<px4_msgs::msg::EkfGpsDrift_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EkfGpsDrift_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->hpos_drift_rate != other.hpos_drift_rate) {
      return false;
    }
    if (this->vpos_drift_rate != other.vpos_drift_rate) {
      return false;
    }
    if (this->hspd != other.hspd) {
      return false;
    }
    if (this->blocked != other.blocked) {
      return false;
    }
    return true;
  }
  bool operator!=(const EkfGpsDrift_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EkfGpsDrift_

// alias to use template instance with default allocator
using EkfGpsDrift =
  px4_msgs::msg::EkfGpsDrift_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__EKF_GPS_DRIFT__STRUCT_HPP_
