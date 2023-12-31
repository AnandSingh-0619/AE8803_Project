// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/TecsStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__TECS_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__TECS_STATUS__STRUCT_HPP_

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
# define DEPRECATED__px4_msgs__msg__TecsStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__TecsStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TecsStatus_
{
  using Type = TecsStatus_<ContainerAllocator>;

  explicit TecsStatus_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->altitude_sp = 0.0f;
      this->altitude_filtered = 0.0f;
      this->height_rate_setpoint = 0.0f;
      this->height_rate = 0.0f;
      this->equivalent_airspeed_sp = 0.0f;
      this->true_airspeed_sp = 0.0f;
      this->true_airspeed_filtered = 0.0f;
      this->true_airspeed_derivative_sp = 0.0f;
      this->true_airspeed_derivative = 0.0f;
      this->true_airspeed_derivative_raw = 0.0f;
      this->true_airspeed_innovation = 0.0f;
      this->total_energy_error = 0.0f;
      this->energy_distribution_error = 0.0f;
      this->total_energy_rate_error = 0.0f;
      this->energy_distribution_rate_error = 0.0f;
      this->total_energy = 0.0f;
      this->total_energy_rate = 0.0f;
      this->total_energy_balance = 0.0f;
      this->total_energy_balance_rate = 0.0f;
      this->total_energy_sp = 0.0f;
      this->total_energy_rate_sp = 0.0f;
      this->total_energy_balance_sp = 0.0f;
      this->total_energy_balance_rate_sp = 0.0f;
      this->throttle_integ = 0.0f;
      this->pitch_integ = 0.0f;
      this->throttle_sp = 0.0f;
      this->pitch_sp_rad = 0.0f;
      this->mode = 0;
    }
  }

  explicit TecsStatus_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->altitude_sp = 0.0f;
      this->altitude_filtered = 0.0f;
      this->height_rate_setpoint = 0.0f;
      this->height_rate = 0.0f;
      this->equivalent_airspeed_sp = 0.0f;
      this->true_airspeed_sp = 0.0f;
      this->true_airspeed_filtered = 0.0f;
      this->true_airspeed_derivative_sp = 0.0f;
      this->true_airspeed_derivative = 0.0f;
      this->true_airspeed_derivative_raw = 0.0f;
      this->true_airspeed_innovation = 0.0f;
      this->total_energy_error = 0.0f;
      this->energy_distribution_error = 0.0f;
      this->total_energy_rate_error = 0.0f;
      this->energy_distribution_rate_error = 0.0f;
      this->total_energy = 0.0f;
      this->total_energy_rate = 0.0f;
      this->total_energy_balance = 0.0f;
      this->total_energy_balance_rate = 0.0f;
      this->total_energy_sp = 0.0f;
      this->total_energy_rate_sp = 0.0f;
      this->total_energy_balance_sp = 0.0f;
      this->total_energy_balance_rate_sp = 0.0f;
      this->throttle_integ = 0.0f;
      this->pitch_integ = 0.0f;
      this->throttle_sp = 0.0f;
      this->pitch_sp_rad = 0.0f;
      this->mode = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _altitude_sp_type =
    float;
  _altitude_sp_type altitude_sp;
  using _altitude_filtered_type =
    float;
  _altitude_filtered_type altitude_filtered;
  using _height_rate_setpoint_type =
    float;
  _height_rate_setpoint_type height_rate_setpoint;
  using _height_rate_type =
    float;
  _height_rate_type height_rate;
  using _equivalent_airspeed_sp_type =
    float;
  _equivalent_airspeed_sp_type equivalent_airspeed_sp;
  using _true_airspeed_sp_type =
    float;
  _true_airspeed_sp_type true_airspeed_sp;
  using _true_airspeed_filtered_type =
    float;
  _true_airspeed_filtered_type true_airspeed_filtered;
  using _true_airspeed_derivative_sp_type =
    float;
  _true_airspeed_derivative_sp_type true_airspeed_derivative_sp;
  using _true_airspeed_derivative_type =
    float;
  _true_airspeed_derivative_type true_airspeed_derivative;
  using _true_airspeed_derivative_raw_type =
    float;
  _true_airspeed_derivative_raw_type true_airspeed_derivative_raw;
  using _true_airspeed_innovation_type =
    float;
  _true_airspeed_innovation_type true_airspeed_innovation;
  using _total_energy_error_type =
    float;
  _total_energy_error_type total_energy_error;
  using _energy_distribution_error_type =
    float;
  _energy_distribution_error_type energy_distribution_error;
  using _total_energy_rate_error_type =
    float;
  _total_energy_rate_error_type total_energy_rate_error;
  using _energy_distribution_rate_error_type =
    float;
  _energy_distribution_rate_error_type energy_distribution_rate_error;
  using _total_energy_type =
    float;
  _total_energy_type total_energy;
  using _total_energy_rate_type =
    float;
  _total_energy_rate_type total_energy_rate;
  using _total_energy_balance_type =
    float;
  _total_energy_balance_type total_energy_balance;
  using _total_energy_balance_rate_type =
    float;
  _total_energy_balance_rate_type total_energy_balance_rate;
  using _total_energy_sp_type =
    float;
  _total_energy_sp_type total_energy_sp;
  using _total_energy_rate_sp_type =
    float;
  _total_energy_rate_sp_type total_energy_rate_sp;
  using _total_energy_balance_sp_type =
    float;
  _total_energy_balance_sp_type total_energy_balance_sp;
  using _total_energy_balance_rate_sp_type =
    float;
  _total_energy_balance_rate_sp_type total_energy_balance_rate_sp;
  using _throttle_integ_type =
    float;
  _throttle_integ_type throttle_integ;
  using _pitch_integ_type =
    float;
  _pitch_integ_type pitch_integ;
  using _throttle_sp_type =
    float;
  _throttle_sp_type throttle_sp;
  using _pitch_sp_rad_type =
    float;
  _pitch_sp_rad_type pitch_sp_rad;
  using _mode_type =
    uint8_t;
  _mode_type mode;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__altitude_sp(
    const float & _arg)
  {
    this->altitude_sp = _arg;
    return *this;
  }
  Type & set__altitude_filtered(
    const float & _arg)
  {
    this->altitude_filtered = _arg;
    return *this;
  }
  Type & set__height_rate_setpoint(
    const float & _arg)
  {
    this->height_rate_setpoint = _arg;
    return *this;
  }
  Type & set__height_rate(
    const float & _arg)
  {
    this->height_rate = _arg;
    return *this;
  }
  Type & set__equivalent_airspeed_sp(
    const float & _arg)
  {
    this->equivalent_airspeed_sp = _arg;
    return *this;
  }
  Type & set__true_airspeed_sp(
    const float & _arg)
  {
    this->true_airspeed_sp = _arg;
    return *this;
  }
  Type & set__true_airspeed_filtered(
    const float & _arg)
  {
    this->true_airspeed_filtered = _arg;
    return *this;
  }
  Type & set__true_airspeed_derivative_sp(
    const float & _arg)
  {
    this->true_airspeed_derivative_sp = _arg;
    return *this;
  }
  Type & set__true_airspeed_derivative(
    const float & _arg)
  {
    this->true_airspeed_derivative = _arg;
    return *this;
  }
  Type & set__true_airspeed_derivative_raw(
    const float & _arg)
  {
    this->true_airspeed_derivative_raw = _arg;
    return *this;
  }
  Type & set__true_airspeed_innovation(
    const float & _arg)
  {
    this->true_airspeed_innovation = _arg;
    return *this;
  }
  Type & set__total_energy_error(
    const float & _arg)
  {
    this->total_energy_error = _arg;
    return *this;
  }
  Type & set__energy_distribution_error(
    const float & _arg)
  {
    this->energy_distribution_error = _arg;
    return *this;
  }
  Type & set__total_energy_rate_error(
    const float & _arg)
  {
    this->total_energy_rate_error = _arg;
    return *this;
  }
  Type & set__energy_distribution_rate_error(
    const float & _arg)
  {
    this->energy_distribution_rate_error = _arg;
    return *this;
  }
  Type & set__total_energy(
    const float & _arg)
  {
    this->total_energy = _arg;
    return *this;
  }
  Type & set__total_energy_rate(
    const float & _arg)
  {
    this->total_energy_rate = _arg;
    return *this;
  }
  Type & set__total_energy_balance(
    const float & _arg)
  {
    this->total_energy_balance = _arg;
    return *this;
  }
  Type & set__total_energy_balance_rate(
    const float & _arg)
  {
    this->total_energy_balance_rate = _arg;
    return *this;
  }
  Type & set__total_energy_sp(
    const float & _arg)
  {
    this->total_energy_sp = _arg;
    return *this;
  }
  Type & set__total_energy_rate_sp(
    const float & _arg)
  {
    this->total_energy_rate_sp = _arg;
    return *this;
  }
  Type & set__total_energy_balance_sp(
    const float & _arg)
  {
    this->total_energy_balance_sp = _arg;
    return *this;
  }
  Type & set__total_energy_balance_rate_sp(
    const float & _arg)
  {
    this->total_energy_balance_rate_sp = _arg;
    return *this;
  }
  Type & set__throttle_integ(
    const float & _arg)
  {
    this->throttle_integ = _arg;
    return *this;
  }
  Type & set__pitch_integ(
    const float & _arg)
  {
    this->pitch_integ = _arg;
    return *this;
  }
  Type & set__throttle_sp(
    const float & _arg)
  {
    this->throttle_sp = _arg;
    return *this;
  }
  Type & set__pitch_sp_rad(
    const float & _arg)
  {
    this->pitch_sp_rad = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TECS_MODE_NORMAL =
    0u;
  static constexpr uint8_t TECS_MODE_UNDERSPEED =
    1u;
  static constexpr uint8_t TECS_MODE_TAKEOFF =
    2u;
  static constexpr uint8_t TECS_MODE_LAND =
    3u;
  static constexpr uint8_t TECS_MODE_LAND_THROTTLELIM =
    4u;
  static constexpr uint8_t TECS_MODE_BAD_DESCENT =
    5u;
  static constexpr uint8_t TECS_MODE_CLIMBOUT =
    6u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::TecsStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::TecsStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::TecsStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::TecsStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TecsStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TecsStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::TecsStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::TecsStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::TecsStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::TecsStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__TecsStatus
    std::shared_ptr<px4_msgs::msg::TecsStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__TecsStatus
    std::shared_ptr<px4_msgs::msg::TecsStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TecsStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->altitude_sp != other.altitude_sp) {
      return false;
    }
    if (this->altitude_filtered != other.altitude_filtered) {
      return false;
    }
    if (this->height_rate_setpoint != other.height_rate_setpoint) {
      return false;
    }
    if (this->height_rate != other.height_rate) {
      return false;
    }
    if (this->equivalent_airspeed_sp != other.equivalent_airspeed_sp) {
      return false;
    }
    if (this->true_airspeed_sp != other.true_airspeed_sp) {
      return false;
    }
    if (this->true_airspeed_filtered != other.true_airspeed_filtered) {
      return false;
    }
    if (this->true_airspeed_derivative_sp != other.true_airspeed_derivative_sp) {
      return false;
    }
    if (this->true_airspeed_derivative != other.true_airspeed_derivative) {
      return false;
    }
    if (this->true_airspeed_derivative_raw != other.true_airspeed_derivative_raw) {
      return false;
    }
    if (this->true_airspeed_innovation != other.true_airspeed_innovation) {
      return false;
    }
    if (this->total_energy_error != other.total_energy_error) {
      return false;
    }
    if (this->energy_distribution_error != other.energy_distribution_error) {
      return false;
    }
    if (this->total_energy_rate_error != other.total_energy_rate_error) {
      return false;
    }
    if (this->energy_distribution_rate_error != other.energy_distribution_rate_error) {
      return false;
    }
    if (this->total_energy != other.total_energy) {
      return false;
    }
    if (this->total_energy_rate != other.total_energy_rate) {
      return false;
    }
    if (this->total_energy_balance != other.total_energy_balance) {
      return false;
    }
    if (this->total_energy_balance_rate != other.total_energy_balance_rate) {
      return false;
    }
    if (this->total_energy_sp != other.total_energy_sp) {
      return false;
    }
    if (this->total_energy_rate_sp != other.total_energy_rate_sp) {
      return false;
    }
    if (this->total_energy_balance_sp != other.total_energy_balance_sp) {
      return false;
    }
    if (this->total_energy_balance_rate_sp != other.total_energy_balance_rate_sp) {
      return false;
    }
    if (this->throttle_integ != other.throttle_integ) {
      return false;
    }
    if (this->pitch_integ != other.pitch_integ) {
      return false;
    }
    if (this->throttle_sp != other.throttle_sp) {
      return false;
    }
    if (this->pitch_sp_rad != other.pitch_sp_rad) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const TecsStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TecsStatus_

// alias to use template instance with default allocator
using TecsStatus =
  px4_msgs::msg::TecsStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t TecsStatus_<ContainerAllocator>::TECS_MODE_NORMAL;
template<typename ContainerAllocator>
constexpr uint8_t TecsStatus_<ContainerAllocator>::TECS_MODE_UNDERSPEED;
template<typename ContainerAllocator>
constexpr uint8_t TecsStatus_<ContainerAllocator>::TECS_MODE_TAKEOFF;
template<typename ContainerAllocator>
constexpr uint8_t TecsStatus_<ContainerAllocator>::TECS_MODE_LAND;
template<typename ContainerAllocator>
constexpr uint8_t TecsStatus_<ContainerAllocator>::TECS_MODE_LAND_THROTTLELIM;
template<typename ContainerAllocator>
constexpr uint8_t TecsStatus_<ContainerAllocator>::TECS_MODE_BAD_DESCENT;
template<typename ContainerAllocator>
constexpr uint8_t TecsStatus_<ContainerAllocator>::TECS_MODE_CLIMBOUT;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__TECS_STATUS__STRUCT_HPP_
