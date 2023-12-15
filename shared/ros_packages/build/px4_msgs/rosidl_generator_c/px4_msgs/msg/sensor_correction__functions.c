// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/SensorCorrection.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/sensor_correction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__SensorCorrection__init(px4_msgs__msg__SensorCorrection * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // gyro_device_ids
  // gyro_temperature
  // gyro_offset_0
  // gyro_offset_1
  // gyro_offset_2
  // gyro_offset_3
  // accel_device_ids
  // accel_temperature
  // accel_offset_0
  // accel_offset_1
  // accel_offset_2
  // accel_offset_3
  // baro_device_ids
  // baro_temperature
  // baro_offset_0
  // baro_offset_1
  // baro_offset_2
  // baro_offset_3
  return true;
}

void
px4_msgs__msg__SensorCorrection__fini(px4_msgs__msg__SensorCorrection * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // gyro_device_ids
  // gyro_temperature
  // gyro_offset_0
  // gyro_offset_1
  // gyro_offset_2
  // gyro_offset_3
  // accel_device_ids
  // accel_temperature
  // accel_offset_0
  // accel_offset_1
  // accel_offset_2
  // accel_offset_3
  // baro_device_ids
  // baro_temperature
  // baro_offset_0
  // baro_offset_1
  // baro_offset_2
  // baro_offset_3
}

px4_msgs__msg__SensorCorrection *
px4_msgs__msg__SensorCorrection__create()
{
  px4_msgs__msg__SensorCorrection * msg = (px4_msgs__msg__SensorCorrection *)malloc(sizeof(px4_msgs__msg__SensorCorrection));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__SensorCorrection));
  bool success = px4_msgs__msg__SensorCorrection__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__SensorCorrection__destroy(px4_msgs__msg__SensorCorrection * msg)
{
  if (msg) {
    px4_msgs__msg__SensorCorrection__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__SensorCorrection__Sequence__init(px4_msgs__msg__SensorCorrection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__SensorCorrection * data = NULL;
  if (size) {
    data = (px4_msgs__msg__SensorCorrection *)calloc(size, sizeof(px4_msgs__msg__SensorCorrection));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__SensorCorrection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__SensorCorrection__fini(&data[i - 1]);
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
px4_msgs__msg__SensorCorrection__Sequence__fini(px4_msgs__msg__SensorCorrection__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__SensorCorrection__fini(&array->data[i]);
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

px4_msgs__msg__SensorCorrection__Sequence *
px4_msgs__msg__SensorCorrection__Sequence__create(size_t size)
{
  px4_msgs__msg__SensorCorrection__Sequence * array = (px4_msgs__msg__SensorCorrection__Sequence *)malloc(sizeof(px4_msgs__msg__SensorCorrection__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__SensorCorrection__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__SensorCorrection__Sequence__destroy(px4_msgs__msg__SensorCorrection__Sequence * array)
{
  if (array) {
    px4_msgs__msg__SensorCorrection__Sequence__fini(array);
  }
  free(array);
}
