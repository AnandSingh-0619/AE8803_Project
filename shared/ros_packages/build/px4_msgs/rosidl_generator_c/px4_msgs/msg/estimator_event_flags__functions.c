// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/EstimatorEventFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/estimator_event_flags__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__EstimatorEventFlags__init(px4_msgs__msg__EstimatorEventFlags * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // information_event_changes
  // gps_checks_passed
  // reset_vel_to_gps
  // reset_vel_to_flow
  // reset_vel_to_vision
  // reset_vel_to_zero
  // reset_pos_to_last_known
  // reset_pos_to_gps
  // reset_pos_to_vision
  // starting_gps_fusion
  // starting_vision_pos_fusion
  // starting_vision_vel_fusion
  // starting_vision_yaw_fusion
  // yaw_aligned_to_imu_gps
  // warning_event_changes
  // gps_quality_poor
  // gps_fusion_timout
  // gps_data_stopped
  // gps_data_stopped_using_alternate
  // height_sensor_timeout
  // stopping_navigation
  // invalid_accel_bias_cov_reset
  // bad_yaw_using_gps_course
  // stopping_mag_use
  // vision_data_stopped
  // emergency_yaw_reset_mag_stopped
  // emergency_yaw_reset_gps_yaw_stopped
  return true;
}

void
px4_msgs__msg__EstimatorEventFlags__fini(px4_msgs__msg__EstimatorEventFlags * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // information_event_changes
  // gps_checks_passed
  // reset_vel_to_gps
  // reset_vel_to_flow
  // reset_vel_to_vision
  // reset_vel_to_zero
  // reset_pos_to_last_known
  // reset_pos_to_gps
  // reset_pos_to_vision
  // starting_gps_fusion
  // starting_vision_pos_fusion
  // starting_vision_vel_fusion
  // starting_vision_yaw_fusion
  // yaw_aligned_to_imu_gps
  // warning_event_changes
  // gps_quality_poor
  // gps_fusion_timout
  // gps_data_stopped
  // gps_data_stopped_using_alternate
  // height_sensor_timeout
  // stopping_navigation
  // invalid_accel_bias_cov_reset
  // bad_yaw_using_gps_course
  // stopping_mag_use
  // vision_data_stopped
  // emergency_yaw_reset_mag_stopped
  // emergency_yaw_reset_gps_yaw_stopped
}

px4_msgs__msg__EstimatorEventFlags *
px4_msgs__msg__EstimatorEventFlags__create()
{
  px4_msgs__msg__EstimatorEventFlags * msg = (px4_msgs__msg__EstimatorEventFlags *)malloc(sizeof(px4_msgs__msg__EstimatorEventFlags));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__EstimatorEventFlags));
  bool success = px4_msgs__msg__EstimatorEventFlags__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__EstimatorEventFlags__destroy(px4_msgs__msg__EstimatorEventFlags * msg)
{
  if (msg) {
    px4_msgs__msg__EstimatorEventFlags__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__EstimatorEventFlags__Sequence__init(px4_msgs__msg__EstimatorEventFlags__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__EstimatorEventFlags * data = NULL;
  if (size) {
    data = (px4_msgs__msg__EstimatorEventFlags *)calloc(size, sizeof(px4_msgs__msg__EstimatorEventFlags));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__EstimatorEventFlags__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__EstimatorEventFlags__fini(&data[i - 1]);
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
px4_msgs__msg__EstimatorEventFlags__Sequence__fini(px4_msgs__msg__EstimatorEventFlags__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__EstimatorEventFlags__fini(&array->data[i]);
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

px4_msgs__msg__EstimatorEventFlags__Sequence *
px4_msgs__msg__EstimatorEventFlags__Sequence__create(size_t size)
{
  px4_msgs__msg__EstimatorEventFlags__Sequence * array = (px4_msgs__msg__EstimatorEventFlags__Sequence *)malloc(sizeof(px4_msgs__msg__EstimatorEventFlags__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__EstimatorEventFlags__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__EstimatorEventFlags__Sequence__destroy(px4_msgs__msg__EstimatorEventFlags__Sequence * array)
{
  if (array) {
    px4_msgs__msg__EstimatorEventFlags__Sequence__fini(array);
  }
  free(array);
}
