// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/EstimatorSelectorStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/estimator_selector_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__EstimatorSelectorStatus__init(px4_msgs__msg__EstimatorSelectorStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // primary_instance
  // instances_available
  // instance_changed_count
  // last_instance_change
  // accel_device_id
  // baro_device_id
  // gyro_device_id
  // mag_device_id
  // combined_test_ratio
  // relative_test_ratio
  // healthy
  // accumulated_gyro_error
  // accumulated_accel_error
  // gyro_fault_detected
  // accel_fault_detected
  return true;
}

void
px4_msgs__msg__EstimatorSelectorStatus__fini(px4_msgs__msg__EstimatorSelectorStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // primary_instance
  // instances_available
  // instance_changed_count
  // last_instance_change
  // accel_device_id
  // baro_device_id
  // gyro_device_id
  // mag_device_id
  // combined_test_ratio
  // relative_test_ratio
  // healthy
  // accumulated_gyro_error
  // accumulated_accel_error
  // gyro_fault_detected
  // accel_fault_detected
}

px4_msgs__msg__EstimatorSelectorStatus *
px4_msgs__msg__EstimatorSelectorStatus__create()
{
  px4_msgs__msg__EstimatorSelectorStatus * msg = (px4_msgs__msg__EstimatorSelectorStatus *)malloc(sizeof(px4_msgs__msg__EstimatorSelectorStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__EstimatorSelectorStatus));
  bool success = px4_msgs__msg__EstimatorSelectorStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__EstimatorSelectorStatus__destroy(px4_msgs__msg__EstimatorSelectorStatus * msg)
{
  if (msg) {
    px4_msgs__msg__EstimatorSelectorStatus__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__EstimatorSelectorStatus__Sequence__init(px4_msgs__msg__EstimatorSelectorStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__EstimatorSelectorStatus * data = NULL;
  if (size) {
    data = (px4_msgs__msg__EstimatorSelectorStatus *)calloc(size, sizeof(px4_msgs__msg__EstimatorSelectorStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__EstimatorSelectorStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__EstimatorSelectorStatus__fini(&data[i - 1]);
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
px4_msgs__msg__EstimatorSelectorStatus__Sequence__fini(px4_msgs__msg__EstimatorSelectorStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__EstimatorSelectorStatus__fini(&array->data[i]);
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

px4_msgs__msg__EstimatorSelectorStatus__Sequence *
px4_msgs__msg__EstimatorSelectorStatus__Sequence__create(size_t size)
{
  px4_msgs__msg__EstimatorSelectorStatus__Sequence * array = (px4_msgs__msg__EstimatorSelectorStatus__Sequence *)malloc(sizeof(px4_msgs__msg__EstimatorSelectorStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__EstimatorSelectorStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__EstimatorSelectorStatus__Sequence__destroy(px4_msgs__msg__EstimatorSelectorStatus__Sequence * array)
{
  if (array) {
    px4_msgs__msg__EstimatorSelectorStatus__Sequence__fini(array);
  }
  free(array);
}
