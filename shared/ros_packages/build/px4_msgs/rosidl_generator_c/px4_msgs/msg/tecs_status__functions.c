// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/TecsStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/tecs_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__TecsStatus__init(px4_msgs__msg__TecsStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // altitude_sp
  // altitude_filtered
  // height_rate_setpoint
  // height_rate
  // equivalent_airspeed_sp
  // true_airspeed_sp
  // true_airspeed_filtered
  // true_airspeed_derivative_sp
  // true_airspeed_derivative
  // true_airspeed_derivative_raw
  // true_airspeed_innovation
  // total_energy_error
  // energy_distribution_error
  // total_energy_rate_error
  // energy_distribution_rate_error
  // total_energy
  // total_energy_rate
  // total_energy_balance
  // total_energy_balance_rate
  // total_energy_sp
  // total_energy_rate_sp
  // total_energy_balance_sp
  // total_energy_balance_rate_sp
  // throttle_integ
  // pitch_integ
  // throttle_sp
  // pitch_sp_rad
  // mode
  return true;
}

void
px4_msgs__msg__TecsStatus__fini(px4_msgs__msg__TecsStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // altitude_sp
  // altitude_filtered
  // height_rate_setpoint
  // height_rate
  // equivalent_airspeed_sp
  // true_airspeed_sp
  // true_airspeed_filtered
  // true_airspeed_derivative_sp
  // true_airspeed_derivative
  // true_airspeed_derivative_raw
  // true_airspeed_innovation
  // total_energy_error
  // energy_distribution_error
  // total_energy_rate_error
  // energy_distribution_rate_error
  // total_energy
  // total_energy_rate
  // total_energy_balance
  // total_energy_balance_rate
  // total_energy_sp
  // total_energy_rate_sp
  // total_energy_balance_sp
  // total_energy_balance_rate_sp
  // throttle_integ
  // pitch_integ
  // throttle_sp
  // pitch_sp_rad
  // mode
}

px4_msgs__msg__TecsStatus *
px4_msgs__msg__TecsStatus__create()
{
  px4_msgs__msg__TecsStatus * msg = (px4_msgs__msg__TecsStatus *)malloc(sizeof(px4_msgs__msg__TecsStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__TecsStatus));
  bool success = px4_msgs__msg__TecsStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__TecsStatus__destroy(px4_msgs__msg__TecsStatus * msg)
{
  if (msg) {
    px4_msgs__msg__TecsStatus__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__TecsStatus__Sequence__init(px4_msgs__msg__TecsStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__TecsStatus * data = NULL;
  if (size) {
    data = (px4_msgs__msg__TecsStatus *)calloc(size, sizeof(px4_msgs__msg__TecsStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__TecsStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__TecsStatus__fini(&data[i - 1]);
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
px4_msgs__msg__TecsStatus__Sequence__fini(px4_msgs__msg__TecsStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__TecsStatus__fini(&array->data[i]);
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

px4_msgs__msg__TecsStatus__Sequence *
px4_msgs__msg__TecsStatus__Sequence__create(size_t size)
{
  px4_msgs__msg__TecsStatus__Sequence * array = (px4_msgs__msg__TecsStatus__Sequence *)malloc(sizeof(px4_msgs__msg__TecsStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__TecsStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__TecsStatus__Sequence__destroy(px4_msgs__msg__TecsStatus__Sequence * array)
{
  if (array) {
    px4_msgs__msg__TecsStatus__Sequence__fini(array);
  }
  free(array);
}
