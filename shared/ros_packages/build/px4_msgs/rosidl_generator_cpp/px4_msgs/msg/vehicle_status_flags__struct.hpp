// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__VEHICLE_STATUS_FLAGS__STRUCT_HPP_
#define PX4_MSGS__MSG__VEHICLE_STATUS_FLAGS__STRUCT_HPP_

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
# define DEPRECATED__px4_msgs__msg__VehicleStatusFlags __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__VehicleStatusFlags __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleStatusFlags_
{
  using Type = VehicleStatusFlags_<ContainerAllocator>;

  explicit VehicleStatusFlags_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->condition_calibration_enabled = false;
      this->condition_system_sensors_initialized = false;
      this->condition_system_hotplug_timeout = false;
      this->condition_system_returned_to_home = false;
      this->condition_auto_mission_available = false;
      this->condition_angular_velocity_valid = false;
      this->condition_attitude_valid = false;
      this->condition_local_altitude_valid = false;
      this->condition_local_position_valid = false;
      this->condition_local_velocity_valid = false;
      this->condition_global_position_valid = false;
      this->condition_home_position_valid = false;
      this->condition_power_input_valid = false;
      this->condition_battery_healthy = false;
      this->condition_escs_error = false;
      this->condition_escs_failure = false;
      this->circuit_breaker_engaged_power_check = false;
      this->circuit_breaker_engaged_airspd_check = false;
      this->circuit_breaker_engaged_enginefailure_check = false;
      this->circuit_breaker_flight_termination_disabled = false;
      this->circuit_breaker_engaged_usb_check = false;
      this->circuit_breaker_engaged_posfailure_check = false;
      this->circuit_breaker_vtol_fw_arming_check = false;
      this->offboard_control_signal_lost = false;
      this->rc_signal_found_once = false;
      this->rc_input_blocked = false;
      this->rc_calibration_valid = false;
      this->vtol_transition_failure = false;
      this->usb_connected = false;
      this->sd_card_detected_once = false;
      this->avoidance_system_required = false;
      this->avoidance_system_valid = false;
    }
  }

  explicit VehicleStatusFlags_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->condition_calibration_enabled = false;
      this->condition_system_sensors_initialized = false;
      this->condition_system_hotplug_timeout = false;
      this->condition_system_returned_to_home = false;
      this->condition_auto_mission_available = false;
      this->condition_angular_velocity_valid = false;
      this->condition_attitude_valid = false;
      this->condition_local_altitude_valid = false;
      this->condition_local_position_valid = false;
      this->condition_local_velocity_valid = false;
      this->condition_global_position_valid = false;
      this->condition_home_position_valid = false;
      this->condition_power_input_valid = false;
      this->condition_battery_healthy = false;
      this->condition_escs_error = false;
      this->condition_escs_failure = false;
      this->circuit_breaker_engaged_power_check = false;
      this->circuit_breaker_engaged_airspd_check = false;
      this->circuit_breaker_engaged_enginefailure_check = false;
      this->circuit_breaker_flight_termination_disabled = false;
      this->circuit_breaker_engaged_usb_check = false;
      this->circuit_breaker_engaged_posfailure_check = false;
      this->circuit_breaker_vtol_fw_arming_check = false;
      this->offboard_control_signal_lost = false;
      this->rc_signal_found_once = false;
      this->rc_input_blocked = false;
      this->rc_calibration_valid = false;
      this->vtol_transition_failure = false;
      this->usb_connected = false;
      this->sd_card_detected_once = false;
      this->avoidance_system_required = false;
      this->avoidance_system_valid = false;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _condition_calibration_enabled_type =
    bool;
  _condition_calibration_enabled_type condition_calibration_enabled;
  using _condition_system_sensors_initialized_type =
    bool;
  _condition_system_sensors_initialized_type condition_system_sensors_initialized;
  using _condition_system_hotplug_timeout_type =
    bool;
  _condition_system_hotplug_timeout_type condition_system_hotplug_timeout;
  using _condition_system_returned_to_home_type =
    bool;
  _condition_system_returned_to_home_type condition_system_returned_to_home;
  using _condition_auto_mission_available_type =
    bool;
  _condition_auto_mission_available_type condition_auto_mission_available;
  using _condition_angular_velocity_valid_type =
    bool;
  _condition_angular_velocity_valid_type condition_angular_velocity_valid;
  using _condition_attitude_valid_type =
    bool;
  _condition_attitude_valid_type condition_attitude_valid;
  using _condition_local_altitude_valid_type =
    bool;
  _condition_local_altitude_valid_type condition_local_altitude_valid;
  using _condition_local_position_valid_type =
    bool;
  _condition_local_position_valid_type condition_local_position_valid;
  using _condition_local_velocity_valid_type =
    bool;
  _condition_local_velocity_valid_type condition_local_velocity_valid;
  using _condition_global_position_valid_type =
    bool;
  _condition_global_position_valid_type condition_global_position_valid;
  using _condition_home_position_valid_type =
    bool;
  _condition_home_position_valid_type condition_home_position_valid;
  using _condition_power_input_valid_type =
    bool;
  _condition_power_input_valid_type condition_power_input_valid;
  using _condition_battery_healthy_type =
    bool;
  _condition_battery_healthy_type condition_battery_healthy;
  using _condition_escs_error_type =
    bool;
  _condition_escs_error_type condition_escs_error;
  using _condition_escs_failure_type =
    bool;
  _condition_escs_failure_type condition_escs_failure;
  using _circuit_breaker_engaged_power_check_type =
    bool;
  _circuit_breaker_engaged_power_check_type circuit_breaker_engaged_power_check;
  using _circuit_breaker_engaged_airspd_check_type =
    bool;
  _circuit_breaker_engaged_airspd_check_type circuit_breaker_engaged_airspd_check;
  using _circuit_breaker_engaged_enginefailure_check_type =
    bool;
  _circuit_breaker_engaged_enginefailure_check_type circuit_breaker_engaged_enginefailure_check;
  using _circuit_breaker_flight_termination_disabled_type =
    bool;
  _circuit_breaker_flight_termination_disabled_type circuit_breaker_flight_termination_disabled;
  using _circuit_breaker_engaged_usb_check_type =
    bool;
  _circuit_breaker_engaged_usb_check_type circuit_breaker_engaged_usb_check;
  using _circuit_breaker_engaged_posfailure_check_type =
    bool;
  _circuit_breaker_engaged_posfailure_check_type circuit_breaker_engaged_posfailure_check;
  using _circuit_breaker_vtol_fw_arming_check_type =
    bool;
  _circuit_breaker_vtol_fw_arming_check_type circuit_breaker_vtol_fw_arming_check;
  using _offboard_control_signal_lost_type =
    bool;
  _offboard_control_signal_lost_type offboard_control_signal_lost;
  using _rc_signal_found_once_type =
    bool;
  _rc_signal_found_once_type rc_signal_found_once;
  using _rc_input_blocked_type =
    bool;
  _rc_input_blocked_type rc_input_blocked;
  using _rc_calibration_valid_type =
    bool;
  _rc_calibration_valid_type rc_calibration_valid;
  using _vtol_transition_failure_type =
    bool;
  _vtol_transition_failure_type vtol_transition_failure;
  using _usb_connected_type =
    bool;
  _usb_connected_type usb_connected;
  using _sd_card_detected_once_type =
    bool;
  _sd_card_detected_once_type sd_card_detected_once;
  using _avoidance_system_required_type =
    bool;
  _avoidance_system_required_type avoidance_system_required;
  using _avoidance_system_valid_type =
    bool;
  _avoidance_system_valid_type avoidance_system_valid;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__condition_calibration_enabled(
    const bool & _arg)
  {
    this->condition_calibration_enabled = _arg;
    return *this;
  }
  Type & set__condition_system_sensors_initialized(
    const bool & _arg)
  {
    this->condition_system_sensors_initialized = _arg;
    return *this;
  }
  Type & set__condition_system_hotplug_timeout(
    const bool & _arg)
  {
    this->condition_system_hotplug_timeout = _arg;
    return *this;
  }
  Type & set__condition_system_returned_to_home(
    const bool & _arg)
  {
    this->condition_system_returned_to_home = _arg;
    return *this;
  }
  Type & set__condition_auto_mission_available(
    const bool & _arg)
  {
    this->condition_auto_mission_available = _arg;
    return *this;
  }
  Type & set__condition_angular_velocity_valid(
    const bool & _arg)
  {
    this->condition_angular_velocity_valid = _arg;
    return *this;
  }
  Type & set__condition_attitude_valid(
    const bool & _arg)
  {
    this->condition_attitude_valid = _arg;
    return *this;
  }
  Type & set__condition_local_altitude_valid(
    const bool & _arg)
  {
    this->condition_local_altitude_valid = _arg;
    return *this;
  }
  Type & set__condition_local_position_valid(
    const bool & _arg)
  {
    this->condition_local_position_valid = _arg;
    return *this;
  }
  Type & set__condition_local_velocity_valid(
    const bool & _arg)
  {
    this->condition_local_velocity_valid = _arg;
    return *this;
  }
  Type & set__condition_global_position_valid(
    const bool & _arg)
  {
    this->condition_global_position_valid = _arg;
    return *this;
  }
  Type & set__condition_home_position_valid(
    const bool & _arg)
  {
    this->condition_home_position_valid = _arg;
    return *this;
  }
  Type & set__condition_power_input_valid(
    const bool & _arg)
  {
    this->condition_power_input_valid = _arg;
    return *this;
  }
  Type & set__condition_battery_healthy(
    const bool & _arg)
  {
    this->condition_battery_healthy = _arg;
    return *this;
  }
  Type & set__condition_escs_error(
    const bool & _arg)
  {
    this->condition_escs_error = _arg;
    return *this;
  }
  Type & set__condition_escs_failure(
    const bool & _arg)
  {
    this->condition_escs_failure = _arg;
    return *this;
  }
  Type & set__circuit_breaker_engaged_power_check(
    const bool & _arg)
  {
    this->circuit_breaker_engaged_power_check = _arg;
    return *this;
  }
  Type & set__circuit_breaker_engaged_airspd_check(
    const bool & _arg)
  {
    this->circuit_breaker_engaged_airspd_check = _arg;
    return *this;
  }
  Type & set__circuit_breaker_engaged_enginefailure_check(
    const bool & _arg)
  {
    this->circuit_breaker_engaged_enginefailure_check = _arg;
    return *this;
  }
  Type & set__circuit_breaker_flight_termination_disabled(
    const bool & _arg)
  {
    this->circuit_breaker_flight_termination_disabled = _arg;
    return *this;
  }
  Type & set__circuit_breaker_engaged_usb_check(
    const bool & _arg)
  {
    this->circuit_breaker_engaged_usb_check = _arg;
    return *this;
  }
  Type & set__circuit_breaker_engaged_posfailure_check(
    const bool & _arg)
  {
    this->circuit_breaker_engaged_posfailure_check = _arg;
    return *this;
  }
  Type & set__circuit_breaker_vtol_fw_arming_check(
    const bool & _arg)
  {
    this->circuit_breaker_vtol_fw_arming_check = _arg;
    return *this;
  }
  Type & set__offboard_control_signal_lost(
    const bool & _arg)
  {
    this->offboard_control_signal_lost = _arg;
    return *this;
  }
  Type & set__rc_signal_found_once(
    const bool & _arg)
  {
    this->rc_signal_found_once = _arg;
    return *this;
  }
  Type & set__rc_input_blocked(
    const bool & _arg)
  {
    this->rc_input_blocked = _arg;
    return *this;
  }
  Type & set__rc_calibration_valid(
    const bool & _arg)
  {
    this->rc_calibration_valid = _arg;
    return *this;
  }
  Type & set__vtol_transition_failure(
    const bool & _arg)
  {
    this->vtol_transition_failure = _arg;
    return *this;
  }
  Type & set__usb_connected(
    const bool & _arg)
  {
    this->usb_connected = _arg;
    return *this;
  }
  Type & set__sd_card_detected_once(
    const bool & _arg)
  {
    this->sd_card_detected_once = _arg;
    return *this;
  }
  Type & set__avoidance_system_required(
    const bool & _arg)
  {
    this->avoidance_system_required = _arg;
    return *this;
  }
  Type & set__avoidance_system_valid(
    const bool & _arg)
  {
    this->avoidance_system_valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__VehicleStatusFlags
    std::shared_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__VehicleStatusFlags
    std::shared_ptr<px4_msgs::msg::VehicleStatusFlags_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleStatusFlags_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->condition_calibration_enabled != other.condition_calibration_enabled) {
      return false;
    }
    if (this->condition_system_sensors_initialized != other.condition_system_sensors_initialized) {
      return false;
    }
    if (this->condition_system_hotplug_timeout != other.condition_system_hotplug_timeout) {
      return false;
    }
    if (this->condition_system_returned_to_home != other.condition_system_returned_to_home) {
      return false;
    }
    if (this->condition_auto_mission_available != other.condition_auto_mission_available) {
      return false;
    }
    if (this->condition_angular_velocity_valid != other.condition_angular_velocity_valid) {
      return false;
    }
    if (this->condition_attitude_valid != other.condition_attitude_valid) {
      return false;
    }
    if (this->condition_local_altitude_valid != other.condition_local_altitude_valid) {
      return false;
    }
    if (this->condition_local_position_valid != other.condition_local_position_valid) {
      return false;
    }
    if (this->condition_local_velocity_valid != other.condition_local_velocity_valid) {
      return false;
    }
    if (this->condition_global_position_valid != other.condition_global_position_valid) {
      return false;
    }
    if (this->condition_home_position_valid != other.condition_home_position_valid) {
      return false;
    }
    if (this->condition_power_input_valid != other.condition_power_input_valid) {
      return false;
    }
    if (this->condition_battery_healthy != other.condition_battery_healthy) {
      return false;
    }
    if (this->condition_escs_error != other.condition_escs_error) {
      return false;
    }
    if (this->condition_escs_failure != other.condition_escs_failure) {
      return false;
    }
    if (this->circuit_breaker_engaged_power_check != other.circuit_breaker_engaged_power_check) {
      return false;
    }
    if (this->circuit_breaker_engaged_airspd_check != other.circuit_breaker_engaged_airspd_check) {
      return false;
    }
    if (this->circuit_breaker_engaged_enginefailure_check != other.circuit_breaker_engaged_enginefailure_check) {
      return false;
    }
    if (this->circuit_breaker_flight_termination_disabled != other.circuit_breaker_flight_termination_disabled) {
      return false;
    }
    if (this->circuit_breaker_engaged_usb_check != other.circuit_breaker_engaged_usb_check) {
      return false;
    }
    if (this->circuit_breaker_engaged_posfailure_check != other.circuit_breaker_engaged_posfailure_check) {
      return false;
    }
    if (this->circuit_breaker_vtol_fw_arming_check != other.circuit_breaker_vtol_fw_arming_check) {
      return false;
    }
    if (this->offboard_control_signal_lost != other.offboard_control_signal_lost) {
      return false;
    }
    if (this->rc_signal_found_once != other.rc_signal_found_once) {
      return false;
    }
    if (this->rc_input_blocked != other.rc_input_blocked) {
      return false;
    }
    if (this->rc_calibration_valid != other.rc_calibration_valid) {
      return false;
    }
    if (this->vtol_transition_failure != other.vtol_transition_failure) {
      return false;
    }
    if (this->usb_connected != other.usb_connected) {
      return false;
    }
    if (this->sd_card_detected_once != other.sd_card_detected_once) {
      return false;
    }
    if (this->avoidance_system_required != other.avoidance_system_required) {
      return false;
    }
    if (this->avoidance_system_valid != other.avoidance_system_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleStatusFlags_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleStatusFlags_

// alias to use template instance with default allocator
using VehicleStatusFlags =
  px4_msgs::msg::VehicleStatusFlags_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__VEHICLE_STATUS_FLAGS__STRUCT_HPP_
