// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/PositionSetpointTriplet.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/position_setpoint_triplet__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `previous`
// Member `current`
// Member `next`
#include "px4_msgs/msg/position_setpoint__functions.h"

bool
px4_msgs__msg__PositionSetpointTriplet__init(px4_msgs__msg__PositionSetpointTriplet * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // previous
  if (!px4_msgs__msg__PositionSetpoint__init(&msg->previous)) {
    px4_msgs__msg__PositionSetpointTriplet__fini(msg);
    return false;
  }
  // current
  if (!px4_msgs__msg__PositionSetpoint__init(&msg->current)) {
    px4_msgs__msg__PositionSetpointTriplet__fini(msg);
    return false;
  }
  // next
  if (!px4_msgs__msg__PositionSetpoint__init(&msg->next)) {
    px4_msgs__msg__PositionSetpointTriplet__fini(msg);
    return false;
  }
  return true;
}

void
px4_msgs__msg__PositionSetpointTriplet__fini(px4_msgs__msg__PositionSetpointTriplet * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // previous
  px4_msgs__msg__PositionSetpoint__fini(&msg->previous);
  // current
  px4_msgs__msg__PositionSetpoint__fini(&msg->current);
  // next
  px4_msgs__msg__PositionSetpoint__fini(&msg->next);
}

px4_msgs__msg__PositionSetpointTriplet *
px4_msgs__msg__PositionSetpointTriplet__create()
{
  px4_msgs__msg__PositionSetpointTriplet * msg = (px4_msgs__msg__PositionSetpointTriplet *)malloc(sizeof(px4_msgs__msg__PositionSetpointTriplet));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__PositionSetpointTriplet));
  bool success = px4_msgs__msg__PositionSetpointTriplet__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__PositionSetpointTriplet__destroy(px4_msgs__msg__PositionSetpointTriplet * msg)
{
  if (msg) {
    px4_msgs__msg__PositionSetpointTriplet__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__PositionSetpointTriplet__Sequence__init(px4_msgs__msg__PositionSetpointTriplet__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__PositionSetpointTriplet * data = NULL;
  if (size) {
    data = (px4_msgs__msg__PositionSetpointTriplet *)calloc(size, sizeof(px4_msgs__msg__PositionSetpointTriplet));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__PositionSetpointTriplet__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__PositionSetpointTriplet__fini(&data[i - 1]);
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
px4_msgs__msg__PositionSetpointTriplet__Sequence__fini(px4_msgs__msg__PositionSetpointTriplet__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__PositionSetpointTriplet__fini(&array->data[i]);
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

px4_msgs__msg__PositionSetpointTriplet__Sequence *
px4_msgs__msg__PositionSetpointTriplet__Sequence__create(size_t size)
{
  px4_msgs__msg__PositionSetpointTriplet__Sequence * array = (px4_msgs__msg__PositionSetpointTriplet__Sequence *)malloc(sizeof(px4_msgs__msg__PositionSetpointTriplet__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__PositionSetpointTriplet__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__PositionSetpointTriplet__Sequence__destroy(px4_msgs__msg__PositionSetpointTriplet__Sequence * array)
{
  if (array) {
    px4_msgs__msg__PositionSetpointTriplet__Sequence__fini(array);
  }
  free(array);
}
