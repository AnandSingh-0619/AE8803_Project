// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_generator_c/visibility_control.h"
#include "px4_msgs/msg/vehicle_status_flags__struct.h"
#include "px4_msgs/msg/vehicle_status_flags__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool px4_msgs__msg__vehicle_status_flags__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp(
        "px4_msgs.msg._vehicle_status_flags.VehicleStatusFlags",
        full_classname_dest, 53) == 0);
  }
  px4_msgs__msg__VehicleStatusFlags * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // condition_calibration_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition_calibration_enabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->condition_calibration_enabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // condition_system_sensors_initialized
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition_system_sensors_initialized");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->condition_system_sensors_initialized = (Py_True == field);
    Py_DECREF(field);
  }
  {  // condition_system_hotplug_timeout
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition_system_hotplug_timeout");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->condition_system_hotplug_timeout = (Py_True == field);
    Py_DECREF(field);
  }
  {  // condition_system_returned_to_home
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition_system_returned_to_home");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->condition_system_returned_to_home = (Py_True == field);
    Py_DECREF(field);
  }
  {  // condition_auto_mission_available
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition_auto_mission_available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->condition_auto_mission_available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // condition_angular_velocity_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition_angular_velocity_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->condition_angular_velocity_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // condition_attitude_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition_attitude_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->condition_attitude_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // condition_local_altitude_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition_local_altitude_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->condition_local_altitude_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // condition_local_position_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition_local_position_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->condition_local_position_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // condition_local_velocity_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition_local_velocity_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->condition_local_velocity_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // condition_global_position_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition_global_position_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->condition_global_position_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // condition_home_position_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition_home_position_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->condition_home_position_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // condition_power_input_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition_power_input_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->condition_power_input_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // condition_battery_healthy
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition_battery_healthy");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->condition_battery_healthy = (Py_True == field);
    Py_DECREF(field);
  }
  {  // condition_escs_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition_escs_error");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->condition_escs_error = (Py_True == field);
    Py_DECREF(field);
  }
  {  // condition_escs_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition_escs_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->condition_escs_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // circuit_breaker_engaged_power_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "circuit_breaker_engaged_power_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->circuit_breaker_engaged_power_check = (Py_True == field);
    Py_DECREF(field);
  }
  {  // circuit_breaker_engaged_airspd_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "circuit_breaker_engaged_airspd_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->circuit_breaker_engaged_airspd_check = (Py_True == field);
    Py_DECREF(field);
  }
  {  // circuit_breaker_engaged_enginefailure_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "circuit_breaker_engaged_enginefailure_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->circuit_breaker_engaged_enginefailure_check = (Py_True == field);
    Py_DECREF(field);
  }
  {  // circuit_breaker_flight_termination_disabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "circuit_breaker_flight_termination_disabled");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->circuit_breaker_flight_termination_disabled = (Py_True == field);
    Py_DECREF(field);
  }
  {  // circuit_breaker_engaged_usb_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "circuit_breaker_engaged_usb_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->circuit_breaker_engaged_usb_check = (Py_True == field);
    Py_DECREF(field);
  }
  {  // circuit_breaker_engaged_posfailure_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "circuit_breaker_engaged_posfailure_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->circuit_breaker_engaged_posfailure_check = (Py_True == field);
    Py_DECREF(field);
  }
  {  // circuit_breaker_vtol_fw_arming_check
    PyObject * field = PyObject_GetAttrString(_pymsg, "circuit_breaker_vtol_fw_arming_check");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->circuit_breaker_vtol_fw_arming_check = (Py_True == field);
    Py_DECREF(field);
  }
  {  // offboard_control_signal_lost
    PyObject * field = PyObject_GetAttrString(_pymsg, "offboard_control_signal_lost");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->offboard_control_signal_lost = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rc_signal_found_once
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_signal_found_once");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rc_signal_found_once = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rc_input_blocked
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_input_blocked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rc_input_blocked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rc_calibration_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc_calibration_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rc_calibration_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // vtol_transition_failure
    PyObject * field = PyObject_GetAttrString(_pymsg, "vtol_transition_failure");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->vtol_transition_failure = (Py_True == field);
    Py_DECREF(field);
  }
  {  // usb_connected
    PyObject * field = PyObject_GetAttrString(_pymsg, "usb_connected");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->usb_connected = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sd_card_detected_once
    PyObject * field = PyObject_GetAttrString(_pymsg, "sd_card_detected_once");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->sd_card_detected_once = (Py_True == field);
    Py_DECREF(field);
  }
  {  // avoidance_system_required
    PyObject * field = PyObject_GetAttrString(_pymsg, "avoidance_system_required");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->avoidance_system_required = (Py_True == field);
    Py_DECREF(field);
  }
  {  // avoidance_system_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "avoidance_system_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->avoidance_system_valid = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_msgs__msg__vehicle_status_flags__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleStatusFlags */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_msgs.msg._vehicle_status_flags");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleStatusFlags");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_msgs__msg__VehicleStatusFlags * ros_message = (px4_msgs__msg__VehicleStatusFlags *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition_calibration_enabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->condition_calibration_enabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition_calibration_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition_system_sensors_initialized
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->condition_system_sensors_initialized ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition_system_sensors_initialized", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition_system_hotplug_timeout
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->condition_system_hotplug_timeout ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition_system_hotplug_timeout", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition_system_returned_to_home
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->condition_system_returned_to_home ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition_system_returned_to_home", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition_auto_mission_available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->condition_auto_mission_available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition_auto_mission_available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition_angular_velocity_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->condition_angular_velocity_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition_angular_velocity_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition_attitude_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->condition_attitude_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition_attitude_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition_local_altitude_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->condition_local_altitude_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition_local_altitude_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition_local_position_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->condition_local_position_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition_local_position_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition_local_velocity_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->condition_local_velocity_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition_local_velocity_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition_global_position_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->condition_global_position_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition_global_position_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition_home_position_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->condition_home_position_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition_home_position_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition_power_input_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->condition_power_input_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition_power_input_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition_battery_healthy
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->condition_battery_healthy ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition_battery_healthy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition_escs_error
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->condition_escs_error ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition_escs_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition_escs_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->condition_escs_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition_escs_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circuit_breaker_engaged_power_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->circuit_breaker_engaged_power_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "circuit_breaker_engaged_power_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circuit_breaker_engaged_airspd_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->circuit_breaker_engaged_airspd_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "circuit_breaker_engaged_airspd_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circuit_breaker_engaged_enginefailure_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->circuit_breaker_engaged_enginefailure_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "circuit_breaker_engaged_enginefailure_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circuit_breaker_flight_termination_disabled
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->circuit_breaker_flight_termination_disabled ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "circuit_breaker_flight_termination_disabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circuit_breaker_engaged_usb_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->circuit_breaker_engaged_usb_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "circuit_breaker_engaged_usb_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circuit_breaker_engaged_posfailure_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->circuit_breaker_engaged_posfailure_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "circuit_breaker_engaged_posfailure_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // circuit_breaker_vtol_fw_arming_check
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->circuit_breaker_vtol_fw_arming_check ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "circuit_breaker_vtol_fw_arming_check", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offboard_control_signal_lost
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->offboard_control_signal_lost ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offboard_control_signal_lost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_signal_found_once
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rc_signal_found_once ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_signal_found_once", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_input_blocked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rc_input_blocked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_input_blocked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc_calibration_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rc_calibration_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc_calibration_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vtol_transition_failure
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->vtol_transition_failure ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vtol_transition_failure", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // usb_connected
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->usb_connected ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "usb_connected", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sd_card_detected_once
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->sd_card_detected_once ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sd_card_detected_once", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avoidance_system_required
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->avoidance_system_required ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avoidance_system_required", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avoidance_system_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->avoidance_system_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avoidance_system_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
