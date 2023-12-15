// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/Px4IoStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/px4_io_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__Px4IoStatus__init(px4_msgs__msg__Px4IoStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // free_memory_bytes
  // voltage_v
  // rssi_v
  // status_arm_sync
  // status_failsafe
  // status_fmu_initialized
  // status_fmu_ok
  // status_init_ok
  // status_outputs_armed
  // status_raw_pwm
  // status_rc_ok
  // status_rc_dsm
  // status_rc_ppm
  // status_rc_sbus
  // status_rc_st24
  // status_rc_sumd
  // status_safety_off
  // alarm_pwm_error
  // alarm_rc_lost
  // arming_failsafe_custom
  // arming_fmu_armed
  // arming_fmu_prearmed
  // arming_force_failsafe
  // arming_io_arm_ok
  // arming_lockdown
  // arming_termination_failsafe
  // pwm
  // pwm_disarmed
  // pwm_failsafe
  // pwm_rate_hz
  // raw_inputs
  return true;
}

void
px4_msgs__msg__Px4IoStatus__fini(px4_msgs__msg__Px4IoStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // free_memory_bytes
  // voltage_v
  // rssi_v
  // status_arm_sync
  // status_failsafe
  // status_fmu_initialized
  // status_fmu_ok
  // status_init_ok
  // status_outputs_armed
  // status_raw_pwm
  // status_rc_ok
  // status_rc_dsm
  // status_rc_ppm
  // status_rc_sbus
  // status_rc_st24
  // status_rc_sumd
  // status_safety_off
  // alarm_pwm_error
  // alarm_rc_lost
  // arming_failsafe_custom
  // arming_fmu_armed
  // arming_fmu_prearmed
  // arming_force_failsafe
  // arming_io_arm_ok
  // arming_lockdown
  // arming_termination_failsafe
  // pwm
  // pwm_disarmed
  // pwm_failsafe
  // pwm_rate_hz
  // raw_inputs
}

px4_msgs__msg__Px4IoStatus *
px4_msgs__msg__Px4IoStatus__create()
{
  px4_msgs__msg__Px4IoStatus * msg = (px4_msgs__msg__Px4IoStatus *)malloc(sizeof(px4_msgs__msg__Px4IoStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__Px4IoStatus));
  bool success = px4_msgs__msg__Px4IoStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__Px4IoStatus__destroy(px4_msgs__msg__Px4IoStatus * msg)
{
  if (msg) {
    px4_msgs__msg__Px4IoStatus__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__Px4IoStatus__Sequence__init(px4_msgs__msg__Px4IoStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__Px4IoStatus * data = NULL;
  if (size) {
    data = (px4_msgs__msg__Px4IoStatus *)calloc(size, sizeof(px4_msgs__msg__Px4IoStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__Px4IoStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__Px4IoStatus__fini(&data[i - 1]);
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
px4_msgs__msg__Px4IoStatus__Sequence__fini(px4_msgs__msg__Px4IoStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__Px4IoStatus__fini(&array->data[i]);
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

px4_msgs__msg__Px4IoStatus__Sequence *
px4_msgs__msg__Px4IoStatus__Sequence__create(size_t size)
{
  px4_msgs__msg__Px4IoStatus__Sequence * array = (px4_msgs__msg__Px4IoStatus__Sequence *)malloc(sizeof(px4_msgs__msg__Px4IoStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__Px4IoStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__Px4IoStatus__Sequence__destroy(px4_msgs__msg__Px4IoStatus__Sequence * array)
{
  if (array) {
    px4_msgs__msg__Px4IoStatus__Sequence__fini(array);
  }
  free(array);
}
