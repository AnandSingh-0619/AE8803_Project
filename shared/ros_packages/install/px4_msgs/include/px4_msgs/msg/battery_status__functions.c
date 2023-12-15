// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/battery_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__BatteryStatus__init(px4_msgs__msg__BatteryStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // connected
  // voltage_v
  // voltage_filtered_v
  // current_a
  // current_filtered_a
  // current_average_a
  // discharged_mah
  // remaining
  // scale
  // temperature
  // cell_count
  // source
  // priority
  // capacity
  // cycle_count
  // run_time_to_empty
  // average_time_to_empty
  // serial_number
  // manufacture_date
  // state_of_health
  // max_error
  // id
  // interface_error
  // voltage_cell_v
  // max_cell_voltage_delta
  // is_powering_off
  // warning
  // average_power
  // available_energy
  // remaining_capacity
  // design_capacity
  // average_time_to_full
  // over_discharge_count
  // nominal_voltage
  return true;
}

void
px4_msgs__msg__BatteryStatus__fini(px4_msgs__msg__BatteryStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // connected
  // voltage_v
  // voltage_filtered_v
  // current_a
  // current_filtered_a
  // current_average_a
  // discharged_mah
  // remaining
  // scale
  // temperature
  // cell_count
  // source
  // priority
  // capacity
  // cycle_count
  // run_time_to_empty
  // average_time_to_empty
  // serial_number
  // manufacture_date
  // state_of_health
  // max_error
  // id
  // interface_error
  // voltage_cell_v
  // max_cell_voltage_delta
  // is_powering_off
  // warning
  // average_power
  // available_energy
  // remaining_capacity
  // design_capacity
  // average_time_to_full
  // over_discharge_count
  // nominal_voltage
}

px4_msgs__msg__BatteryStatus *
px4_msgs__msg__BatteryStatus__create()
{
  px4_msgs__msg__BatteryStatus * msg = (px4_msgs__msg__BatteryStatus *)malloc(sizeof(px4_msgs__msg__BatteryStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__BatteryStatus));
  bool success = px4_msgs__msg__BatteryStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__BatteryStatus__destroy(px4_msgs__msg__BatteryStatus * msg)
{
  if (msg) {
    px4_msgs__msg__BatteryStatus__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__BatteryStatus__Sequence__init(px4_msgs__msg__BatteryStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__BatteryStatus * data = NULL;
  if (size) {
    data = (px4_msgs__msg__BatteryStatus *)calloc(size, sizeof(px4_msgs__msg__BatteryStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__BatteryStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__BatteryStatus__fini(&data[i - 1]);
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
px4_msgs__msg__BatteryStatus__Sequence__fini(px4_msgs__msg__BatteryStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__BatteryStatus__fini(&array->data[i]);
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

px4_msgs__msg__BatteryStatus__Sequence *
px4_msgs__msg__BatteryStatus__Sequence__create(size_t size)
{
  px4_msgs__msg__BatteryStatus__Sequence * array = (px4_msgs__msg__BatteryStatus__Sequence *)malloc(sizeof(px4_msgs__msg__BatteryStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__BatteryStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__BatteryStatus__Sequence__destroy(px4_msgs__msg__BatteryStatus__Sequence * array)
{
  if (array) {
    px4_msgs__msg__BatteryStatus__Sequence__fini(array);
  }
  free(array);
}
