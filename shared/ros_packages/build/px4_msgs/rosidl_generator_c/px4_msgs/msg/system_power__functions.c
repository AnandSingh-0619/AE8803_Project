// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/SystemPower.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/system_power__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__SystemPower__init(px4_msgs__msg__SystemPower * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // voltage5v_v
  // sensors3v3
  // sensors3v3_valid
  // usb_connected
  // brick_valid
  // usb_valid
  // servo_valid
  // periph_5v_oc
  // hipower_5v_oc
  // comp_5v_valid
  // can1_gps1_5v_valid
  return true;
}

void
px4_msgs__msg__SystemPower__fini(px4_msgs__msg__SystemPower * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // voltage5v_v
  // sensors3v3
  // sensors3v3_valid
  // usb_connected
  // brick_valid
  // usb_valid
  // servo_valid
  // periph_5v_oc
  // hipower_5v_oc
  // comp_5v_valid
  // can1_gps1_5v_valid
}

px4_msgs__msg__SystemPower *
px4_msgs__msg__SystemPower__create()
{
  px4_msgs__msg__SystemPower * msg = (px4_msgs__msg__SystemPower *)malloc(sizeof(px4_msgs__msg__SystemPower));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__SystemPower));
  bool success = px4_msgs__msg__SystemPower__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__SystemPower__destroy(px4_msgs__msg__SystemPower * msg)
{
  if (msg) {
    px4_msgs__msg__SystemPower__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__SystemPower__Sequence__init(px4_msgs__msg__SystemPower__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__SystemPower * data = NULL;
  if (size) {
    data = (px4_msgs__msg__SystemPower *)calloc(size, sizeof(px4_msgs__msg__SystemPower));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__SystemPower__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__SystemPower__fini(&data[i - 1]);
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
px4_msgs__msg__SystemPower__Sequence__fini(px4_msgs__msg__SystemPower__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__SystemPower__fini(&array->data[i]);
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

px4_msgs__msg__SystemPower__Sequence *
px4_msgs__msg__SystemPower__Sequence__create(size_t size)
{
  px4_msgs__msg__SystemPower__Sequence * array = (px4_msgs__msg__SystemPower__Sequence *)malloc(sizeof(px4_msgs__msg__SystemPower__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__SystemPower__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__SystemPower__Sequence__destroy(px4_msgs__msg__SystemPower__Sequence * array)
{
  if (array) {
    px4_msgs__msg__SystemPower__Sequence__fini(array);
  }
  free(array);
}
