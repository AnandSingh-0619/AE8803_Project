// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/OnboardComputerStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/onboard_computer_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__OnboardComputerStatus__init(px4_msgs__msg__OnboardComputerStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // uptime
  // type
  // cpu_cores
  // cpu_combined
  // gpu_cores
  // gpu_combined
  // temperature_board
  // temperature_core
  // fan_speed
  // ram_usage
  // ram_total
  // storage_type
  // storage_usage
  // storage_total
  // link_type
  // link_tx_rate
  // link_rx_rate
  // link_tx_max
  // link_rx_max
  return true;
}

void
px4_msgs__msg__OnboardComputerStatus__fini(px4_msgs__msg__OnboardComputerStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // uptime
  // type
  // cpu_cores
  // cpu_combined
  // gpu_cores
  // gpu_combined
  // temperature_board
  // temperature_core
  // fan_speed
  // ram_usage
  // ram_total
  // storage_type
  // storage_usage
  // storage_total
  // link_type
  // link_tx_rate
  // link_rx_rate
  // link_tx_max
  // link_rx_max
}

px4_msgs__msg__OnboardComputerStatus *
px4_msgs__msg__OnboardComputerStatus__create()
{
  px4_msgs__msg__OnboardComputerStatus * msg = (px4_msgs__msg__OnboardComputerStatus *)malloc(sizeof(px4_msgs__msg__OnboardComputerStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__OnboardComputerStatus));
  bool success = px4_msgs__msg__OnboardComputerStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__OnboardComputerStatus__destroy(px4_msgs__msg__OnboardComputerStatus * msg)
{
  if (msg) {
    px4_msgs__msg__OnboardComputerStatus__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__OnboardComputerStatus__Sequence__init(px4_msgs__msg__OnboardComputerStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__OnboardComputerStatus * data = NULL;
  if (size) {
    data = (px4_msgs__msg__OnboardComputerStatus *)calloc(size, sizeof(px4_msgs__msg__OnboardComputerStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__OnboardComputerStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__OnboardComputerStatus__fini(&data[i - 1]);
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
px4_msgs__msg__OnboardComputerStatus__Sequence__fini(px4_msgs__msg__OnboardComputerStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__OnboardComputerStatus__fini(&array->data[i]);
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

px4_msgs__msg__OnboardComputerStatus__Sequence *
px4_msgs__msg__OnboardComputerStatus__Sequence__create(size_t size)
{
  px4_msgs__msg__OnboardComputerStatus__Sequence * array = (px4_msgs__msg__OnboardComputerStatus__Sequence *)malloc(sizeof(px4_msgs__msg__OnboardComputerStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__OnboardComputerStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__OnboardComputerStatus__Sequence__destroy(px4_msgs__msg__OnboardComputerStatus__Sequence * array)
{
  if (array) {
    px4_msgs__msg__OnboardComputerStatus__Sequence__fini(array);
  }
  free(array);
}
