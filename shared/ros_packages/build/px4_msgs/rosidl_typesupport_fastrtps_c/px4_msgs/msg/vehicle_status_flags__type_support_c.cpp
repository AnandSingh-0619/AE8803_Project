// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/vehicle_status_flags__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/vehicle_status_flags__struct.h"
#include "px4_msgs/msg/vehicle_status_flags__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _VehicleStatusFlags__ros_msg_type = px4_msgs__msg__VehicleStatusFlags;

static bool _VehicleStatusFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleStatusFlags__ros_msg_type * ros_message = static_cast<const _VehicleStatusFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: condition_calibration_enabled
  {
    cdr << (ros_message->condition_calibration_enabled ? true : false);
  }

  // Field name: condition_system_sensors_initialized
  {
    cdr << (ros_message->condition_system_sensors_initialized ? true : false);
  }

  // Field name: condition_system_hotplug_timeout
  {
    cdr << (ros_message->condition_system_hotplug_timeout ? true : false);
  }

  // Field name: condition_system_returned_to_home
  {
    cdr << (ros_message->condition_system_returned_to_home ? true : false);
  }

  // Field name: condition_auto_mission_available
  {
    cdr << (ros_message->condition_auto_mission_available ? true : false);
  }

  // Field name: condition_angular_velocity_valid
  {
    cdr << (ros_message->condition_angular_velocity_valid ? true : false);
  }

  // Field name: condition_attitude_valid
  {
    cdr << (ros_message->condition_attitude_valid ? true : false);
  }

  // Field name: condition_local_altitude_valid
  {
    cdr << (ros_message->condition_local_altitude_valid ? true : false);
  }

  // Field name: condition_local_position_valid
  {
    cdr << (ros_message->condition_local_position_valid ? true : false);
  }

  // Field name: condition_local_velocity_valid
  {
    cdr << (ros_message->condition_local_velocity_valid ? true : false);
  }

  // Field name: condition_global_position_valid
  {
    cdr << (ros_message->condition_global_position_valid ? true : false);
  }

  // Field name: condition_home_position_valid
  {
    cdr << (ros_message->condition_home_position_valid ? true : false);
  }

  // Field name: condition_power_input_valid
  {
    cdr << (ros_message->condition_power_input_valid ? true : false);
  }

  // Field name: condition_battery_healthy
  {
    cdr << (ros_message->condition_battery_healthy ? true : false);
  }

  // Field name: condition_escs_error
  {
    cdr << (ros_message->condition_escs_error ? true : false);
  }

  // Field name: condition_escs_failure
  {
    cdr << (ros_message->condition_escs_failure ? true : false);
  }

  // Field name: circuit_breaker_engaged_power_check
  {
    cdr << (ros_message->circuit_breaker_engaged_power_check ? true : false);
  }

  // Field name: circuit_breaker_engaged_airspd_check
  {
    cdr << (ros_message->circuit_breaker_engaged_airspd_check ? true : false);
  }

  // Field name: circuit_breaker_engaged_enginefailure_check
  {
    cdr << (ros_message->circuit_breaker_engaged_enginefailure_check ? true : false);
  }

  // Field name: circuit_breaker_flight_termination_disabled
  {
    cdr << (ros_message->circuit_breaker_flight_termination_disabled ? true : false);
  }

  // Field name: circuit_breaker_engaged_usb_check
  {
    cdr << (ros_message->circuit_breaker_engaged_usb_check ? true : false);
  }

  // Field name: circuit_breaker_engaged_posfailure_check
  {
    cdr << (ros_message->circuit_breaker_engaged_posfailure_check ? true : false);
  }

  // Field name: circuit_breaker_vtol_fw_arming_check
  {
    cdr << (ros_message->circuit_breaker_vtol_fw_arming_check ? true : false);
  }

  // Field name: offboard_control_signal_lost
  {
    cdr << (ros_message->offboard_control_signal_lost ? true : false);
  }

  // Field name: rc_signal_found_once
  {
    cdr << (ros_message->rc_signal_found_once ? true : false);
  }

  // Field name: rc_input_blocked
  {
    cdr << (ros_message->rc_input_blocked ? true : false);
  }

  // Field name: rc_calibration_valid
  {
    cdr << (ros_message->rc_calibration_valid ? true : false);
  }

  // Field name: vtol_transition_failure
  {
    cdr << (ros_message->vtol_transition_failure ? true : false);
  }

  // Field name: usb_connected
  {
    cdr << (ros_message->usb_connected ? true : false);
  }

  // Field name: sd_card_detected_once
  {
    cdr << (ros_message->sd_card_detected_once ? true : false);
  }

  // Field name: avoidance_system_required
  {
    cdr << (ros_message->avoidance_system_required ? true : false);
  }

  // Field name: avoidance_system_valid
  {
    cdr << (ros_message->avoidance_system_valid ? true : false);
  }

  return true;
}

static bool _VehicleStatusFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleStatusFlags__ros_msg_type * ros_message = static_cast<_VehicleStatusFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: condition_calibration_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->condition_calibration_enabled = tmp ? true : false;
  }

  // Field name: condition_system_sensors_initialized
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->condition_system_sensors_initialized = tmp ? true : false;
  }

  // Field name: condition_system_hotplug_timeout
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->condition_system_hotplug_timeout = tmp ? true : false;
  }

  // Field name: condition_system_returned_to_home
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->condition_system_returned_to_home = tmp ? true : false;
  }

  // Field name: condition_auto_mission_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->condition_auto_mission_available = tmp ? true : false;
  }

  // Field name: condition_angular_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->condition_angular_velocity_valid = tmp ? true : false;
  }

  // Field name: condition_attitude_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->condition_attitude_valid = tmp ? true : false;
  }

  // Field name: condition_local_altitude_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->condition_local_altitude_valid = tmp ? true : false;
  }

  // Field name: condition_local_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->condition_local_position_valid = tmp ? true : false;
  }

  // Field name: condition_local_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->condition_local_velocity_valid = tmp ? true : false;
  }

  // Field name: condition_global_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->condition_global_position_valid = tmp ? true : false;
  }

  // Field name: condition_home_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->condition_home_position_valid = tmp ? true : false;
  }

  // Field name: condition_power_input_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->condition_power_input_valid = tmp ? true : false;
  }

  // Field name: condition_battery_healthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->condition_battery_healthy = tmp ? true : false;
  }

  // Field name: condition_escs_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->condition_escs_error = tmp ? true : false;
  }

  // Field name: condition_escs_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->condition_escs_failure = tmp ? true : false;
  }

  // Field name: circuit_breaker_engaged_power_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->circuit_breaker_engaged_power_check = tmp ? true : false;
  }

  // Field name: circuit_breaker_engaged_airspd_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->circuit_breaker_engaged_airspd_check = tmp ? true : false;
  }

  // Field name: circuit_breaker_engaged_enginefailure_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->circuit_breaker_engaged_enginefailure_check = tmp ? true : false;
  }

  // Field name: circuit_breaker_flight_termination_disabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->circuit_breaker_flight_termination_disabled = tmp ? true : false;
  }

  // Field name: circuit_breaker_engaged_usb_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->circuit_breaker_engaged_usb_check = tmp ? true : false;
  }

  // Field name: circuit_breaker_engaged_posfailure_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->circuit_breaker_engaged_posfailure_check = tmp ? true : false;
  }

  // Field name: circuit_breaker_vtol_fw_arming_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->circuit_breaker_vtol_fw_arming_check = tmp ? true : false;
  }

  // Field name: offboard_control_signal_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->offboard_control_signal_lost = tmp ? true : false;
  }

  // Field name: rc_signal_found_once
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rc_signal_found_once = tmp ? true : false;
  }

  // Field name: rc_input_blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rc_input_blocked = tmp ? true : false;
  }

  // Field name: rc_calibration_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rc_calibration_valid = tmp ? true : false;
  }

  // Field name: vtol_transition_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vtol_transition_failure = tmp ? true : false;
  }

  // Field name: usb_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->usb_connected = tmp ? true : false;
  }

  // Field name: sd_card_detected_once
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sd_card_detected_once = tmp ? true : false;
  }

  // Field name: avoidance_system_required
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->avoidance_system_required = tmp ? true : false;
  }

  // Field name: avoidance_system_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->avoidance_system_valid = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__VehicleStatusFlags(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleStatusFlags__ros_msg_type * ros_message = static_cast<const _VehicleStatusFlags__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition_calibration_enabled
  {
    size_t item_size = sizeof(ros_message->condition_calibration_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition_system_sensors_initialized
  {
    size_t item_size = sizeof(ros_message->condition_system_sensors_initialized);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition_system_hotplug_timeout
  {
    size_t item_size = sizeof(ros_message->condition_system_hotplug_timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition_system_returned_to_home
  {
    size_t item_size = sizeof(ros_message->condition_system_returned_to_home);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition_auto_mission_available
  {
    size_t item_size = sizeof(ros_message->condition_auto_mission_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition_angular_velocity_valid
  {
    size_t item_size = sizeof(ros_message->condition_angular_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition_attitude_valid
  {
    size_t item_size = sizeof(ros_message->condition_attitude_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition_local_altitude_valid
  {
    size_t item_size = sizeof(ros_message->condition_local_altitude_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition_local_position_valid
  {
    size_t item_size = sizeof(ros_message->condition_local_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition_local_velocity_valid
  {
    size_t item_size = sizeof(ros_message->condition_local_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition_global_position_valid
  {
    size_t item_size = sizeof(ros_message->condition_global_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition_home_position_valid
  {
    size_t item_size = sizeof(ros_message->condition_home_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition_power_input_valid
  {
    size_t item_size = sizeof(ros_message->condition_power_input_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition_battery_healthy
  {
    size_t item_size = sizeof(ros_message->condition_battery_healthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition_escs_error
  {
    size_t item_size = sizeof(ros_message->condition_escs_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name condition_escs_failure
  {
    size_t item_size = sizeof(ros_message->condition_escs_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name circuit_breaker_engaged_power_check
  {
    size_t item_size = sizeof(ros_message->circuit_breaker_engaged_power_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name circuit_breaker_engaged_airspd_check
  {
    size_t item_size = sizeof(ros_message->circuit_breaker_engaged_airspd_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name circuit_breaker_engaged_enginefailure_check
  {
    size_t item_size = sizeof(ros_message->circuit_breaker_engaged_enginefailure_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name circuit_breaker_flight_termination_disabled
  {
    size_t item_size = sizeof(ros_message->circuit_breaker_flight_termination_disabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name circuit_breaker_engaged_usb_check
  {
    size_t item_size = sizeof(ros_message->circuit_breaker_engaged_usb_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name circuit_breaker_engaged_posfailure_check
  {
    size_t item_size = sizeof(ros_message->circuit_breaker_engaged_posfailure_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name circuit_breaker_vtol_fw_arming_check
  {
    size_t item_size = sizeof(ros_message->circuit_breaker_vtol_fw_arming_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offboard_control_signal_lost
  {
    size_t item_size = sizeof(ros_message->offboard_control_signal_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_signal_found_once
  {
    size_t item_size = sizeof(ros_message->rc_signal_found_once);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_input_blocked
  {
    size_t item_size = sizeof(ros_message->rc_input_blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_calibration_valid
  {
    size_t item_size = sizeof(ros_message->rc_calibration_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vtol_transition_failure
  {
    size_t item_size = sizeof(ros_message->vtol_transition_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name usb_connected
  {
    size_t item_size = sizeof(ros_message->usb_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sd_card_detected_once
  {
    size_t item_size = sizeof(ros_message->sd_card_detected_once);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name avoidance_system_required
  {
    size_t item_size = sizeof(ros_message->avoidance_system_required);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name avoidance_system_valid
  {
    size_t item_size = sizeof(ros_message->avoidance_system_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleStatusFlags__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__VehicleStatusFlags(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__VehicleStatusFlags(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: condition_calibration_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: condition_system_sensors_initialized
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: condition_system_hotplug_timeout
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: condition_system_returned_to_home
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: condition_auto_mission_available
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: condition_angular_velocity_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: condition_attitude_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: condition_local_altitude_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: condition_local_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: condition_local_velocity_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: condition_global_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: condition_home_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: condition_power_input_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: condition_battery_healthy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: condition_escs_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: condition_escs_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: circuit_breaker_engaged_power_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: circuit_breaker_engaged_airspd_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: circuit_breaker_engaged_enginefailure_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: circuit_breaker_flight_termination_disabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: circuit_breaker_engaged_usb_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: circuit_breaker_engaged_posfailure_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: circuit_breaker_vtol_fw_arming_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: offboard_control_signal_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rc_signal_found_once
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rc_input_blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rc_calibration_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vtol_transition_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: usb_connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sd_card_detected_once
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: avoidance_system_required
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: avoidance_system_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleStatusFlags__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__VehicleStatusFlags(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_VehicleStatusFlags = {
  "px4_msgs::msg",
  "VehicleStatusFlags",
  _VehicleStatusFlags__cdr_serialize,
  _VehicleStatusFlags__cdr_deserialize,
  _VehicleStatusFlags__get_serialized_size,
  _VehicleStatusFlags__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStatusFlags__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleStatusFlags,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, VehicleStatusFlags)() {
  return &_VehicleStatusFlags__type_support;
}

#if defined(__cplusplus)
}
#endif
