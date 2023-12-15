// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__VEHICLE_STATUS_FLAGS__STRUCT_H_
#define PX4_MSGS__MSG__VEHICLE_STATUS_FLAGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/VehicleStatusFlags in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleStatusFlags
{
  uint64_t timestamp;
  bool condition_calibration_enabled;
  bool condition_system_sensors_initialized;
  bool condition_system_hotplug_timeout;
  bool condition_system_returned_to_home;
  bool condition_auto_mission_available;
  bool condition_angular_velocity_valid;
  bool condition_attitude_valid;
  bool condition_local_altitude_valid;
  bool condition_local_position_valid;
  bool condition_local_velocity_valid;
  bool condition_global_position_valid;
  bool condition_home_position_valid;
  bool condition_power_input_valid;
  bool condition_battery_healthy;
  bool condition_escs_error;
  bool condition_escs_failure;
  bool circuit_breaker_engaged_power_check;
  bool circuit_breaker_engaged_airspd_check;
  bool circuit_breaker_engaged_enginefailure_check;
  bool circuit_breaker_flight_termination_disabled;
  bool circuit_breaker_engaged_usb_check;
  bool circuit_breaker_engaged_posfailure_check;
  bool circuit_breaker_vtol_fw_arming_check;
  bool offboard_control_signal_lost;
  bool rc_signal_found_once;
  bool rc_input_blocked;
  bool rc_calibration_valid;
  bool vtol_transition_failure;
  bool usb_connected;
  bool sd_card_detected_once;
  bool avoidance_system_required;
  bool avoidance_system_valid;
} px4_msgs__msg__VehicleStatusFlags;

// Struct for a sequence of px4_msgs__msg__VehicleStatusFlags.
typedef struct px4_msgs__msg__VehicleStatusFlags__Sequence
{
  px4_msgs__msg__VehicleStatusFlags * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleStatusFlags__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__VEHICLE_STATUS_FLAGS__STRUCT_H_
