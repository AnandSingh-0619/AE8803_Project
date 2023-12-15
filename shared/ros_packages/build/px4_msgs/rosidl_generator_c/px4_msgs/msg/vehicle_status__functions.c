// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/VehicleStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/vehicle_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__VehicleStatus__init(px4_msgs__msg__VehicleStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // nav_state
  // nav_state_timestamp
  // arming_state
  // hil_state
  // failsafe
  // failsafe_timestamp
  // system_type
  // system_id
  // component_id
  // vehicle_type
  // is_vtol
  // is_vtol_tailsitter
  // vtol_fw_permanent_stab
  // in_transition_mode
  // in_transition_to_fw
  // rc_signal_lost
  // rc_input_mode
  // data_link_lost
  // data_link_lost_counter
  // high_latency_data_link_lost
  // engine_failure
  // mission_failure
  // geofence_violated
  // failure_detector_status
  // onboard_control_sensors_present
  // onboard_control_sensors_enabled
  // onboard_control_sensors_health
  // latest_arming_reason
  // latest_disarming_reason
  // armed_time
  // takeoff_time
  return true;
}

void
px4_msgs__msg__VehicleStatus__fini(px4_msgs__msg__VehicleStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // nav_state
  // nav_state_timestamp
  // arming_state
  // hil_state
  // failsafe
  // failsafe_timestamp
  // system_type
  // system_id
  // component_id
  // vehicle_type
  // is_vtol
  // is_vtol_tailsitter
  // vtol_fw_permanent_stab
  // in_transition_mode
  // in_transition_to_fw
  // rc_signal_lost
  // rc_input_mode
  // data_link_lost
  // data_link_lost_counter
  // high_latency_data_link_lost
  // engine_failure
  // mission_failure
  // geofence_violated
  // failure_detector_status
  // onboard_control_sensors_present
  // onboard_control_sensors_enabled
  // onboard_control_sensors_health
  // latest_arming_reason
  // latest_disarming_reason
  // armed_time
  // takeoff_time
}

px4_msgs__msg__VehicleStatus *
px4_msgs__msg__VehicleStatus__create()
{
  px4_msgs__msg__VehicleStatus * msg = (px4_msgs__msg__VehicleStatus *)malloc(sizeof(px4_msgs__msg__VehicleStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__VehicleStatus));
  bool success = px4_msgs__msg__VehicleStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__VehicleStatus__destroy(px4_msgs__msg__VehicleStatus * msg)
{
  if (msg) {
    px4_msgs__msg__VehicleStatus__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__VehicleStatus__Sequence__init(px4_msgs__msg__VehicleStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__VehicleStatus * data = NULL;
  if (size) {
    data = (px4_msgs__msg__VehicleStatus *)calloc(size, sizeof(px4_msgs__msg__VehicleStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__VehicleStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__VehicleStatus__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
px4_msgs__msg__VehicleStatus__Sequence__fini(px4_msgs__msg__VehicleStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__VehicleStatus__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

px4_msgs__msg__VehicleStatus__Sequence *
px4_msgs__msg__VehicleStatus__Sequence__create(size_t size)
{
  px4_msgs__msg__VehicleStatus__Sequence * array = (px4_msgs__msg__VehicleStatus__Sequence *)malloc(sizeof(px4_msgs__msg__VehicleStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__VehicleStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__VehicleStatus__Sequence__destroy(px4_msgs__msg__VehicleStatus__Sequence * array)
{
  if (array) {
    px4_msgs__msg__VehicleStatus__Sequence__fini(array);
  }
  free(array);
}
