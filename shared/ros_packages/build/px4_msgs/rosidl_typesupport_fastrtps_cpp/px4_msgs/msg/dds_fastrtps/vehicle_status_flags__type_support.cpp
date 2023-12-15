// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/vehicle_status_flags__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/vehicle_status_flags__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::VehicleStatusFlags & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: condition_calibration_enabled
  cdr << (ros_message.condition_calibration_enabled ? true : false);
  // Member: condition_system_sensors_initialized
  cdr << (ros_message.condition_system_sensors_initialized ? true : false);
  // Member: condition_system_hotplug_timeout
  cdr << (ros_message.condition_system_hotplug_timeout ? true : false);
  // Member: condition_system_returned_to_home
  cdr << (ros_message.condition_system_returned_to_home ? true : false);
  // Member: condition_auto_mission_available
  cdr << (ros_message.condition_auto_mission_available ? true : false);
  // Member: condition_angular_velocity_valid
  cdr << (ros_message.condition_angular_velocity_valid ? true : false);
  // Member: condition_attitude_valid
  cdr << (ros_message.condition_attitude_valid ? true : false);
  // Member: condition_local_altitude_valid
  cdr << (ros_message.condition_local_altitude_valid ? true : false);
  // Member: condition_local_position_valid
  cdr << (ros_message.condition_local_position_valid ? true : false);
  // Member: condition_local_velocity_valid
  cdr << (ros_message.condition_local_velocity_valid ? true : false);
  // Member: condition_global_position_valid
  cdr << (ros_message.condition_global_position_valid ? true : false);
  // Member: condition_home_position_valid
  cdr << (ros_message.condition_home_position_valid ? true : false);
  // Member: condition_power_input_valid
  cdr << (ros_message.condition_power_input_valid ? true : false);
  // Member: condition_battery_healthy
  cdr << (ros_message.condition_battery_healthy ? true : false);
  // Member: condition_escs_error
  cdr << (ros_message.condition_escs_error ? true : false);
  // Member: condition_escs_failure
  cdr << (ros_message.condition_escs_failure ? true : false);
  // Member: circuit_breaker_engaged_power_check
  cdr << (ros_message.circuit_breaker_engaged_power_check ? true : false);
  // Member: circuit_breaker_engaged_airspd_check
  cdr << (ros_message.circuit_breaker_engaged_airspd_check ? true : false);
  // Member: circuit_breaker_engaged_enginefailure_check
  cdr << (ros_message.circuit_breaker_engaged_enginefailure_check ? true : false);
  // Member: circuit_breaker_flight_termination_disabled
  cdr << (ros_message.circuit_breaker_flight_termination_disabled ? true : false);
  // Member: circuit_breaker_engaged_usb_check
  cdr << (ros_message.circuit_breaker_engaged_usb_check ? true : false);
  // Member: circuit_breaker_engaged_posfailure_check
  cdr << (ros_message.circuit_breaker_engaged_posfailure_check ? true : false);
  // Member: circuit_breaker_vtol_fw_arming_check
  cdr << (ros_message.circuit_breaker_vtol_fw_arming_check ? true : false);
  // Member: offboard_control_signal_lost
  cdr << (ros_message.offboard_control_signal_lost ? true : false);
  // Member: rc_signal_found_once
  cdr << (ros_message.rc_signal_found_once ? true : false);
  // Member: rc_input_blocked
  cdr << (ros_message.rc_input_blocked ? true : false);
  // Member: rc_calibration_valid
  cdr << (ros_message.rc_calibration_valid ? true : false);
  // Member: vtol_transition_failure
  cdr << (ros_message.vtol_transition_failure ? true : false);
  // Member: usb_connected
  cdr << (ros_message.usb_connected ? true : false);
  // Member: sd_card_detected_once
  cdr << (ros_message.sd_card_detected_once ? true : false);
  // Member: avoidance_system_required
  cdr << (ros_message.avoidance_system_required ? true : false);
  // Member: avoidance_system_valid
  cdr << (ros_message.avoidance_system_valid ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::VehicleStatusFlags & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: condition_calibration_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.condition_calibration_enabled = tmp ? true : false;
  }

  // Member: condition_system_sensors_initialized
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.condition_system_sensors_initialized = tmp ? true : false;
  }

  // Member: condition_system_hotplug_timeout
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.condition_system_hotplug_timeout = tmp ? true : false;
  }

  // Member: condition_system_returned_to_home
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.condition_system_returned_to_home = tmp ? true : false;
  }

  // Member: condition_auto_mission_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.condition_auto_mission_available = tmp ? true : false;
  }

  // Member: condition_angular_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.condition_angular_velocity_valid = tmp ? true : false;
  }

  // Member: condition_attitude_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.condition_attitude_valid = tmp ? true : false;
  }

  // Member: condition_local_altitude_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.condition_local_altitude_valid = tmp ? true : false;
  }

  // Member: condition_local_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.condition_local_position_valid = tmp ? true : false;
  }

  // Member: condition_local_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.condition_local_velocity_valid = tmp ? true : false;
  }

  // Member: condition_global_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.condition_global_position_valid = tmp ? true : false;
  }

  // Member: condition_home_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.condition_home_position_valid = tmp ? true : false;
  }

  // Member: condition_power_input_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.condition_power_input_valid = tmp ? true : false;
  }

  // Member: condition_battery_healthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.condition_battery_healthy = tmp ? true : false;
  }

  // Member: condition_escs_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.condition_escs_error = tmp ? true : false;
  }

  // Member: condition_escs_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.condition_escs_failure = tmp ? true : false;
  }

  // Member: circuit_breaker_engaged_power_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.circuit_breaker_engaged_power_check = tmp ? true : false;
  }

  // Member: circuit_breaker_engaged_airspd_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.circuit_breaker_engaged_airspd_check = tmp ? true : false;
  }

  // Member: circuit_breaker_engaged_enginefailure_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.circuit_breaker_engaged_enginefailure_check = tmp ? true : false;
  }

  // Member: circuit_breaker_flight_termination_disabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.circuit_breaker_flight_termination_disabled = tmp ? true : false;
  }

  // Member: circuit_breaker_engaged_usb_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.circuit_breaker_engaged_usb_check = tmp ? true : false;
  }

  // Member: circuit_breaker_engaged_posfailure_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.circuit_breaker_engaged_posfailure_check = tmp ? true : false;
  }

  // Member: circuit_breaker_vtol_fw_arming_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.circuit_breaker_vtol_fw_arming_check = tmp ? true : false;
  }

  // Member: offboard_control_signal_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.offboard_control_signal_lost = tmp ? true : false;
  }

  // Member: rc_signal_found_once
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rc_signal_found_once = tmp ? true : false;
  }

  // Member: rc_input_blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rc_input_blocked = tmp ? true : false;
  }

  // Member: rc_calibration_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rc_calibration_valid = tmp ? true : false;
  }

  // Member: vtol_transition_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vtol_transition_failure = tmp ? true : false;
  }

  // Member: usb_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.usb_connected = tmp ? true : false;
  }

  // Member: sd_card_detected_once
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_card_detected_once = tmp ? true : false;
  }

  // Member: avoidance_system_required
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.avoidance_system_required = tmp ? true : false;
  }

  // Member: avoidance_system_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.avoidance_system_valid = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::VehicleStatusFlags & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition_calibration_enabled
  {
    size_t item_size = sizeof(ros_message.condition_calibration_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition_system_sensors_initialized
  {
    size_t item_size = sizeof(ros_message.condition_system_sensors_initialized);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition_system_hotplug_timeout
  {
    size_t item_size = sizeof(ros_message.condition_system_hotplug_timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition_system_returned_to_home
  {
    size_t item_size = sizeof(ros_message.condition_system_returned_to_home);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition_auto_mission_available
  {
    size_t item_size = sizeof(ros_message.condition_auto_mission_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition_angular_velocity_valid
  {
    size_t item_size = sizeof(ros_message.condition_angular_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition_attitude_valid
  {
    size_t item_size = sizeof(ros_message.condition_attitude_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition_local_altitude_valid
  {
    size_t item_size = sizeof(ros_message.condition_local_altitude_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition_local_position_valid
  {
    size_t item_size = sizeof(ros_message.condition_local_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition_local_velocity_valid
  {
    size_t item_size = sizeof(ros_message.condition_local_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition_global_position_valid
  {
    size_t item_size = sizeof(ros_message.condition_global_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition_home_position_valid
  {
    size_t item_size = sizeof(ros_message.condition_home_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition_power_input_valid
  {
    size_t item_size = sizeof(ros_message.condition_power_input_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition_battery_healthy
  {
    size_t item_size = sizeof(ros_message.condition_battery_healthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition_escs_error
  {
    size_t item_size = sizeof(ros_message.condition_escs_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: condition_escs_failure
  {
    size_t item_size = sizeof(ros_message.condition_escs_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: circuit_breaker_engaged_power_check
  {
    size_t item_size = sizeof(ros_message.circuit_breaker_engaged_power_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: circuit_breaker_engaged_airspd_check
  {
    size_t item_size = sizeof(ros_message.circuit_breaker_engaged_airspd_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: circuit_breaker_engaged_enginefailure_check
  {
    size_t item_size = sizeof(ros_message.circuit_breaker_engaged_enginefailure_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: circuit_breaker_flight_termination_disabled
  {
    size_t item_size = sizeof(ros_message.circuit_breaker_flight_termination_disabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: circuit_breaker_engaged_usb_check
  {
    size_t item_size = sizeof(ros_message.circuit_breaker_engaged_usb_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: circuit_breaker_engaged_posfailure_check
  {
    size_t item_size = sizeof(ros_message.circuit_breaker_engaged_posfailure_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: circuit_breaker_vtol_fw_arming_check
  {
    size_t item_size = sizeof(ros_message.circuit_breaker_vtol_fw_arming_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: offboard_control_signal_lost
  {
    size_t item_size = sizeof(ros_message.offboard_control_signal_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_signal_found_once
  {
    size_t item_size = sizeof(ros_message.rc_signal_found_once);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_input_blocked
  {
    size_t item_size = sizeof(ros_message.rc_input_blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_calibration_valid
  {
    size_t item_size = sizeof(ros_message.rc_calibration_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vtol_transition_failure
  {
    size_t item_size = sizeof(ros_message.vtol_transition_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: usb_connected
  {
    size_t item_size = sizeof(ros_message.usb_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_card_detected_once
  {
    size_t item_size = sizeof(ros_message.sd_card_detected_once);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avoidance_system_required
  {
    size_t item_size = sizeof(ros_message.avoidance_system_required);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avoidance_system_valid
  {
    size_t item_size = sizeof(ros_message.avoidance_system_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_VehicleStatusFlags(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: condition_calibration_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: condition_system_sensors_initialized
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: condition_system_hotplug_timeout
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: condition_system_returned_to_home
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: condition_auto_mission_available
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: condition_angular_velocity_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: condition_attitude_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: condition_local_altitude_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: condition_local_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: condition_local_velocity_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: condition_global_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: condition_home_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: condition_power_input_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: condition_battery_healthy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: condition_escs_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: condition_escs_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: circuit_breaker_engaged_power_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: circuit_breaker_engaged_airspd_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: circuit_breaker_engaged_enginefailure_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: circuit_breaker_flight_termination_disabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: circuit_breaker_engaged_usb_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: circuit_breaker_engaged_posfailure_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: circuit_breaker_vtol_fw_arming_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: offboard_control_signal_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rc_signal_found_once
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rc_input_blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rc_calibration_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vtol_transition_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: usb_connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sd_card_detected_once
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: avoidance_system_required
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: avoidance_system_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleStatusFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleStatusFlags *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleStatusFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::VehicleStatusFlags *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleStatusFlags__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleStatusFlags *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleStatusFlags__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VehicleStatusFlags(full_bounded, 0);
}

static message_type_support_callbacks_t _VehicleStatusFlags__callbacks = {
  "px4_msgs::msg",
  "VehicleStatusFlags",
  _VehicleStatusFlags__cdr_serialize,
  _VehicleStatusFlags__cdr_deserialize,
  _VehicleStatusFlags__get_serialized_size,
  _VehicleStatusFlags__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStatusFlags__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleStatusFlags__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::VehicleStatusFlags>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleStatusFlags__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, VehicleStatusFlags)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleStatusFlags__handle;
}

#ifdef __cplusplus
}
#endif
