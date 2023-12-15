// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/EscReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__ESC_REPORT__STRUCT_HPP_
#define PX4_MSGS__MSG__ESC_REPORT__STRUCT_HPP_

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
# define DEPRECATED__px4_msgs__msg__EscReport __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__EscReport __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EscReport_
{
  using Type = EscReport_<ContainerAllocator>;

  explicit EscReport_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->esc_errorcount = 0ul;
      this->esc_rpm = 0l;
      this->esc_voltage = 0.0f;
      this->esc_current = 0.0f;
      this->esc_temperature = 0.0f;
      this->esc_address = 0;
      this->esc_state = 0;
      this->failures = 0;
    }
  }

  explicit EscReport_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->esc_errorcount = 0ul;
      this->esc_rpm = 0l;
      this->esc_voltage = 0.0f;
      this->esc_current = 0.0f;
      this->esc_temperature = 0.0f;
      this->esc_address = 0;
      this->esc_state = 0;
      this->failures = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _esc_errorcount_type =
    uint32_t;
  _esc_errorcount_type esc_errorcount;
  using _esc_rpm_type =
    int32_t;
  _esc_rpm_type esc_rpm;
  using _esc_voltage_type =
    float;
  _esc_voltage_type esc_voltage;
  using _esc_current_type =
    float;
  _esc_current_type esc_current;
  using _esc_temperature_type =
    float;
  _esc_temperature_type esc_temperature;
  using _esc_address_type =
    uint8_t;
  _esc_address_type esc_address;
  using _esc_state_type =
    uint8_t;
  _esc_state_type esc_state;
  using _failures_type =
    uint8_t;
  _failures_type failures;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__esc_errorcount(
    const uint32_t & _arg)
  {
    this->esc_errorcount = _arg;
    return *this;
  }
  Type & set__esc_rpm(
    const int32_t & _arg)
  {
    this->esc_rpm = _arg;
    return *this;
  }
  Type & set__esc_voltage(
    const float & _arg)
  {
    this->esc_voltage = _arg;
    return *this;
  }
  Type & set__esc_current(
    const float & _arg)
  {
    this->esc_current = _arg;
    return *this;
  }
  Type & set__esc_temperature(
    const float & _arg)
  {
    this->esc_temperature = _arg;
    return *this;
  }
  Type & set__esc_address(
    const uint8_t & _arg)
  {
    this->esc_address = _arg;
    return *this;
  }
  Type & set__esc_state(
    const uint8_t & _arg)
  {
    this->esc_state = _arg;
    return *this;
  }
  Type & set__failures(
    const uint8_t & _arg)
  {
    this->failures = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FAILURE_NONE =
    0u;
  static constexpr uint8_t FAILURE_OVER_CURRENT_MASK =
    1u;
  static constexpr uint8_t FAILURE_OVER_VOLTAGE_MASK =
    2u;
  static constexpr uint8_t FAILURE_OVER_TEMPERATURE_MASK =
    4u;
  static constexpr uint8_t FAILURE_OVER_RPM_MASK =
    8u;
  static constexpr uint8_t FAILURE_INCONSISTENT_CMD_MASK =
    16u;
  static constexpr uint8_t FAILURE_MOTOR_STUCK_MASK =
    32u;
  static constexpr uint8_t FAILURE_GENERIC_MASK =
    64u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::EscReport_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::EscReport_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::EscReport_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::EscReport_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EscReport_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EscReport_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EscReport_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EscReport_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::EscReport_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::EscReport_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__EscReport
    std::shared_ptr<px4_msgs::msg::EscReport_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__EscReport
    std::shared_ptr<px4_msgs::msg::EscReport_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EscReport_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->esc_errorcount != other.esc_errorcount) {
      return false;
    }
    if (this->esc_rpm != other.esc_rpm) {
      return false;
    }
    if (this->esc_voltage != other.esc_voltage) {
      return false;
    }
    if (this->esc_current != other.esc_current) {
      return false;
    }
    if (this->esc_temperature != other.esc_temperature) {
      return false;
    }
    if (this->esc_address != other.esc_address) {
      return false;
    }
    if (this->esc_state != other.esc_state) {
      return false;
    }
    if (this->failures != other.failures) {
      return false;
    }
    return true;
  }
  bool operator!=(const EscReport_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EscReport_

// alias to use template instance with default allocator
using EscReport =
  px4_msgs::msg::EscReport_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_NONE;
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_OVER_CURRENT_MASK;
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_OVER_VOLTAGE_MASK;
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_OVER_TEMPERATURE_MASK;
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_OVER_RPM_MASK;
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_INCONSISTENT_CMD_MASK;
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_MOTOR_STUCK_MASK;
template<typename ContainerAllocator>
constexpr uint8_t EscReport_<ContainerAllocator>::FAILURE_GENERIC_MASK;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__ESC_REPORT__STRUCT_HPP_
