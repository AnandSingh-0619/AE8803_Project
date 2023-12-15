// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/Ekf2Timestamps.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/ekf2_timestamps__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__Ekf2Timestamps__init(px4_msgs__msg__Ekf2Timestamps * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // airspeed_timestamp_rel
  // distance_sensor_timestamp_rel
  // optical_flow_timestamp_rel
  // vehicle_air_data_timestamp_rel
  // vehicle_magnetometer_timestamp_rel
  // visual_odometry_timestamp_rel
  return true;
}

void
px4_msgs__msg__Ekf2Timestamps__fini(px4_msgs__msg__Ekf2Timestamps * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // airspeed_timestamp_rel
  // distance_sensor_timestamp_rel
  // optical_flow_timestamp_rel
  // vehicle_air_data_timestamp_rel
  // vehicle_magnetometer_timestamp_rel
  // visual_odometry_timestamp_rel
}

px4_msgs__msg__Ekf2Timestamps *
px4_msgs__msg__Ekf2Timestamps__create()
{
  px4_msgs__msg__Ekf2Timestamps * msg = (px4_msgs__msg__Ekf2Timestamps *)malloc(sizeof(px4_msgs__msg__Ekf2Timestamps));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__Ekf2Timestamps));
  bool success = px4_msgs__msg__Ekf2Timestamps__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__Ekf2Timestamps__destroy(px4_msgs__msg__Ekf2Timestamps * msg)
{
  if (msg) {
    px4_msgs__msg__Ekf2Timestamps__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__Ekf2Timestamps__Sequence__init(px4_msgs__msg__Ekf2Timestamps__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__Ekf2Timestamps * data = NULL;
  if (size) {
    data = (px4_msgs__msg__Ekf2Timestamps *)calloc(size, sizeof(px4_msgs__msg__Ekf2Timestamps));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__Ekf2Timestamps__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__Ekf2Timestamps__fini(&data[i - 1]);
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
px4_msgs__msg__Ekf2Timestamps__Sequence__fini(px4_msgs__msg__Ekf2Timestamps__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__Ekf2Timestamps__fini(&array->data[i]);
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

px4_msgs__msg__Ekf2Timestamps__Sequence *
px4_msgs__msg__Ekf2Timestamps__Sequence__create(size_t size)
{
  px4_msgs__msg__Ekf2Timestamps__Sequence * array = (px4_msgs__msg__Ekf2Timestamps__Sequence *)malloc(sizeof(px4_msgs__msg__Ekf2Timestamps__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__Ekf2Timestamps__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__Ekf2Timestamps__Sequence__destroy(px4_msgs__msg__Ekf2Timestamps__Sequence * array)
{
  if (array) {
    px4_msgs__msg__Ekf2Timestamps__Sequence__fini(array);
  }
  free(array);
}
