// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/ActuatorControlsStatus1.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__ACTUATOR_CONTROLS_STATUS1__STRUCT_HPP_
#define PX4_MSGS__MSG__ACTUATOR_CONTROLS_STATUS1__STRUCT_HPP_

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
# define DEPRECATED__px4_msgs__msg__ActuatorControlsStatus1 __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__ActuatorControlsStatus1 __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ActuatorControlsStatus1_
{
  using Type = ActuatorControlsStatus1_<ContainerAllocator>;

  explicit ActuatorControlsStatus1_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 4>::iterator, float>(this->control_power.begin(), this->control_power.end(), 0.0f);
    }
  }

  explicit ActuatorControlsStatus1_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : control_power(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      std::fill<typename std::array<float, 4>::iterator, float>(this->control_power.begin(), this->control_power.end(), 0.0f);
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _control_power_type =
    std::array<float, 4>;
  _control_power_type control_power;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__control_power(
    const std::array<float, 4> & _arg)
  {
    this->control_power = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t INDEX_ROLL =
    0u;
  static constexpr uint8_t INDEX_PITCH =
    1u;
  static constexpr uint8_t INDEX_YAW =
    2u;
  static constexpr uint8_t INDEX_THROTTLE =
    3u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::ActuatorControlsStatus1_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::ActuatorControlsStatus1_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::ActuatorControlsStatus1_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::ActuatorControlsStatus1_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ActuatorControlsStatus1_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ActuatorControlsStatus1_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::ActuatorControlsStatus1_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::ActuatorControlsStatus1_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::ActuatorControlsStatus1_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::ActuatorControlsStatus1_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__ActuatorControlsStatus1
    std::shared_ptr<px4_msgs::msg::ActuatorControlsStatus1_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__ActuatorControlsStatus1
    std::shared_ptr<px4_msgs::msg::ActuatorControlsStatus1_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ActuatorControlsStatus1_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->control_power != other.control_power) {
      return false;
    }
    return true;
  }
  bool operator!=(const ActuatorControlsStatus1_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ActuatorControlsStatus1_

// alias to use template instance with default allocator
using ActuatorControlsStatus1 =
  px4_msgs::msg::ActuatorControlsStatus1_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControlsStatus1_<ContainerAllocator>::INDEX_ROLL;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControlsStatus1_<ContainerAllocator>::INDEX_PITCH;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControlsStatus1_<ContainerAllocator>::INDEX_YAW;
template<typename ContainerAllocator>
constexpr uint8_t ActuatorControlsStatus1_<ContainerAllocator>::INDEX_THROTTLE;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__ACTUATOR_CONTROLS_STATUS1__STRUCT_HPP_
