// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/position_setpoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__PositionSetpoint__init(px4_msgs__msg__PositionSetpoint * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // valid
  // type
  // vx
  // vy
  // vz
  // velocity_valid
  // velocity_frame
  // alt_valid
  // lat
  // lon
  // alt
  // yaw
  // yaw_valid
  // yawspeed
  // yawspeed_valid
  // landing_gear
  // loiter_radius
  // loiter_direction
  // acceptance_radius
  // cruising_speed
  // cruising_throttle
  // disable_weather_vane
  return true;
}

void
px4_msgs__msg__PositionSetpoint__fini(px4_msgs__msg__PositionSetpoint * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // valid
  // type
  // vx
  // vy
  // vz
  // velocity_valid
  // velocity_frame
  // alt_valid
  // lat
  // lon
  // alt
  // yaw
  // yaw_valid
  // yawspeed
  // yawspeed_valid
  // landing_gear
  // loiter_radius
  // loiter_direction
  // acceptance_radius
  // cruising_speed
  // cruising_throttle
  // disable_weather_vane
}

px4_msgs__msg__PositionSetpoint *
px4_msgs__msg__PositionSetpoint__create()
{
  px4_msgs__msg__PositionSetpoint * msg = (px4_msgs__msg__PositionSetpoint *)malloc(sizeof(px4_msgs__msg__PositionSetpoint));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__PositionSetpoint));
  bool success = px4_msgs__msg__PositionSetpoint__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__PositionSetpoint__destroy(px4_msgs__msg__PositionSetpoint * msg)
{
  if (msg) {
    px4_msgs__msg__PositionSetpoint__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__PositionSetpoint__Sequence__init(px4_msgs__msg__PositionSetpoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__PositionSetpoint * data = NULL;
  if (size) {
    data = (px4_msgs__msg__PositionSetpoint *)calloc(size, sizeof(px4_msgs__msg__PositionSetpoint));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__PositionSetpoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__PositionSetpoint__fini(&data[i - 1]);
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
px4_msgs__msg__PositionSetpoint__Sequence__fini(px4_msgs__msg__PositionSetpoint__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__PositionSetpoint__fini(&array->data[i]);
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

px4_msgs__msg__PositionSetpoint__Sequence *
px4_msgs__msg__PositionSetpoint__Sequence__create(size_t size)
{
  px4_msgs__msg__PositionSetpoint__Sequence * array = (px4_msgs__msg__PositionSetpoint__Sequence *)malloc(sizeof(px4_msgs__msg__PositionSetpoint__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__PositionSetpoint__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__PositionSetpoint__Sequence__destroy(px4_msgs__msg__PositionSetpoint__Sequence * array)
{
  if (array) {
    px4_msgs__msg__PositionSetpoint__Sequence__fini(array);
  }
  free(array);
}
