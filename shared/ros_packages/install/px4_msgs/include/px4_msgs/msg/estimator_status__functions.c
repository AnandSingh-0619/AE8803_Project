// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/EstimatorStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/estimator_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__EstimatorStatus__init(px4_msgs__msg__EstimatorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // vibe
  // output_tracking_error
  // gps_check_fail_flags
  // control_mode_flags
  // filter_fault_flags
  // pos_horiz_accuracy
  // pos_vert_accuracy
  // innovation_check_flags
  // mag_test_ratio
  // vel_test_ratio
  // pos_test_ratio
  // hgt_test_ratio
  // tas_test_ratio
  // hagl_test_ratio
  // beta_test_ratio
  // solution_status_flags
  // reset_count_vel_ne
  // reset_count_vel_d
  // reset_count_pos_ne
  // reset_count_pod_d
  // reset_count_quat
  // time_slip
  // pre_flt_fail_innov_heading
  // pre_flt_fail_innov_vel_horiz
  // pre_flt_fail_innov_vel_vert
  // pre_flt_fail_innov_height
  // pre_flt_fail_mag_field_disturbed
  // accel_device_id
  // gyro_device_id
  // baro_device_id
  // mag_device_id
  // health_flags
  // timeout_flags
  return true;
}

void
px4_msgs__msg__EstimatorStatus__fini(px4_msgs__msg__EstimatorStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // vibe
  // output_tracking_error
  // gps_check_fail_flags
  // control_mode_flags
  // filter_fault_flags
  // pos_horiz_accuracy
  // pos_vert_accuracy
  // innovation_check_flags
  // mag_test_ratio
  // vel_test_ratio
  // pos_test_ratio
  // hgt_test_ratio
  // tas_test_ratio
  // hagl_test_ratio
  // beta_test_ratio
  // solution_status_flags
  // reset_count_vel_ne
  // reset_count_vel_d
  // reset_count_pos_ne
  // reset_count_pod_d
  // reset_count_quat
  // time_slip
  // pre_flt_fail_innov_heading
  // pre_flt_fail_innov_vel_horiz
  // pre_flt_fail_innov_vel_vert
  // pre_flt_fail_innov_height
  // pre_flt_fail_mag_field_disturbed
  // accel_device_id
  // gyro_device_id
  // baro_device_id
  // mag_device_id
  // health_flags
  // timeout_flags
}

px4_msgs__msg__EstimatorStatus *
px4_msgs__msg__EstimatorStatus__create()
{
  px4_msgs__msg__EstimatorStatus * msg = (px4_msgs__msg__EstimatorStatus *)malloc(sizeof(px4_msgs__msg__EstimatorStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__EstimatorStatus));
  bool success = px4_msgs__msg__EstimatorStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__EstimatorStatus__destroy(px4_msgs__msg__EstimatorStatus * msg)
{
  if (msg) {
    px4_msgs__msg__EstimatorStatus__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__EstimatorStatus__Sequence__init(px4_msgs__msg__EstimatorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__EstimatorStatus * data = NULL;
  if (size) {
    data = (px4_msgs__msg__EstimatorStatus *)calloc(size, sizeof(px4_msgs__msg__EstimatorStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__EstimatorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__EstimatorStatus__fini(&data[i - 1]);
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
px4_msgs__msg__EstimatorStatus__Sequence__fini(px4_msgs__msg__EstimatorStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__EstimatorStatus__fini(&array->data[i]);
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

px4_msgs__msg__EstimatorStatus__Sequence *
px4_msgs__msg__EstimatorStatus__Sequence__create(size_t size)
{
  px4_msgs__msg__EstimatorStatus__Sequence * array = (px4_msgs__msg__EstimatorStatus__Sequence *)malloc(sizeof(px4_msgs__msg__EstimatorStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__EstimatorStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__EstimatorStatus__Sequence__destroy(px4_msgs__msg__EstimatorStatus__Sequence * array)
{
  if (array) {
    px4_msgs__msg__EstimatorStatus__Sequence__fini(array);
  }
  free(array);
}
