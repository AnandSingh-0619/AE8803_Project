// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/OpticalFlow.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/optical_flow__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__OpticalFlow__init(px4_msgs__msg__OpticalFlow * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // sensor_id
  // pixel_flow_x_integral
  // pixel_flow_y_integral
  // gyro_x_rate_integral
  // gyro_y_rate_integral
  // gyro_z_rate_integral
  // ground_distance_m
  // integration_timespan
  // time_since_last_sonar_update
  // frame_count_since_last_readout
  // gyro_temperature
  // quality
  // max_flow_rate
  // min_ground_distance
  // max_ground_distance
  // mode
  return true;
}

void
px4_msgs__msg__OpticalFlow__fini(px4_msgs__msg__OpticalFlow * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // sensor_id
  // pixel_flow_x_integral
  // pixel_flow_y_integral
  // gyro_x_rate_integral
  // gyro_y_rate_integral
  // gyro_z_rate_integral
  // ground_distance_m
  // integration_timespan
  // time_since_last_sonar_update
  // frame_count_since_last_readout
  // gyro_temperature
  // quality
  // max_flow_rate
  // min_ground_distance
  // max_ground_distance
  // mode
}

px4_msgs__msg__OpticalFlow *
px4_msgs__msg__OpticalFlow__create()
{
  px4_msgs__msg__OpticalFlow * msg = (px4_msgs__msg__OpticalFlow *)malloc(sizeof(px4_msgs__msg__OpticalFlow));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__OpticalFlow));
  bool success = px4_msgs__msg__OpticalFlow__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__OpticalFlow__destroy(px4_msgs__msg__OpticalFlow * msg)
{
  if (msg) {
    px4_msgs__msg__OpticalFlow__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__OpticalFlow__Sequence__init(px4_msgs__msg__OpticalFlow__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__OpticalFlow * data = NULL;
  if (size) {
    data = (px4_msgs__msg__OpticalFlow *)calloc(size, sizeof(px4_msgs__msg__OpticalFlow));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__OpticalFlow__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__OpticalFlow__fini(&data[i - 1]);
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
px4_msgs__msg__OpticalFlow__Sequence__fini(px4_msgs__msg__OpticalFlow__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__OpticalFlow__fini(&array->data[i]);
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

px4_msgs__msg__OpticalFlow__Sequence *
px4_msgs__msg__OpticalFlow__Sequence__create(size_t size)
{
  px4_msgs__msg__OpticalFlow__Sequence * array = (px4_msgs__msg__OpticalFlow__Sequence *)malloc(sizeof(px4_msgs__msg__OpticalFlow__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__OpticalFlow__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__OpticalFlow__Sequence__destroy(px4_msgs__msg__OpticalFlow__Sequence * array)
{
  if (array) {
    px4_msgs__msg__OpticalFlow__Sequence__fini(array);
  }
  free(array);
}
