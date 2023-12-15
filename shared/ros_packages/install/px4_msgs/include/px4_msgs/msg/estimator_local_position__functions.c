// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/EstimatorLocalPosition.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/estimator_local_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__EstimatorLocalPosition__init(px4_msgs__msg__EstimatorLocalPosition * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // xy_valid
  // z_valid
  // v_xy_valid
  // v_z_valid
  // x
  // y
  // z
  // delta_xy
  // xy_reset_counter
  // delta_z
  // z_reset_counter
  // vx
  // vy
  // vz
  // z_deriv
  // delta_vxy
  // vxy_reset_counter
  // delta_vz
  // vz_reset_counter
  // ax
  // ay
  // az
  // heading
  // delta_heading
  // heading_reset_counter
  // xy_global
  // z_global
  // ref_timestamp
  // ref_lat
  // ref_lon
  // ref_alt
  // dist_bottom
  // dist_bottom_valid
  // dist_bottom_sensor_bitfield
  // eph
  // epv
  // evh
  // evv
  // vxy_max
  // vz_max
  // hagl_min
  // hagl_max
  return true;
}

void
px4_msgs__msg__EstimatorLocalPosition__fini(px4_msgs__msg__EstimatorLocalPosition * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // xy_valid
  // z_valid
  // v_xy_valid
  // v_z_valid
  // x
  // y
  // z
  // delta_xy
  // xy_reset_counter
  // delta_z
  // z_reset_counter
  // vx
  // vy
  // vz
  // z_deriv
  // delta_vxy
  // vxy_reset_counter
  // delta_vz
  // vz_reset_counter
  // ax
  // ay
  // az
  // heading
  // delta_heading
  // heading_reset_counter
  // xy_global
  // z_global
  // ref_timestamp
  // ref_lat
  // ref_lon
  // ref_alt
  // dist_bottom
  // dist_bottom_valid
  // dist_bottom_sensor_bitfield
  // eph
  // epv
  // evh
  // evv
  // vxy_max
  // vz_max
  // hagl_min
  // hagl_max
}

px4_msgs__msg__EstimatorLocalPosition *
px4_msgs__msg__EstimatorLocalPosition__create()
{
  px4_msgs__msg__EstimatorLocalPosition * msg = (px4_msgs__msg__EstimatorLocalPosition *)malloc(sizeof(px4_msgs__msg__EstimatorLocalPosition));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__EstimatorLocalPosition));
  bool success = px4_msgs__msg__EstimatorLocalPosition__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__EstimatorLocalPosition__destroy(px4_msgs__msg__EstimatorLocalPosition * msg)
{
  if (msg) {
    px4_msgs__msg__EstimatorLocalPosition__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__EstimatorLocalPosition__Sequence__init(px4_msgs__msg__EstimatorLocalPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__EstimatorLocalPosition * data = NULL;
  if (size) {
    data = (px4_msgs__msg__EstimatorLocalPosition *)calloc(size, sizeof(px4_msgs__msg__EstimatorLocalPosition));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__EstimatorLocalPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__EstimatorLocalPosition__fini(&data[i - 1]);
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
px4_msgs__msg__EstimatorLocalPosition__Sequence__fini(px4_msgs__msg__EstimatorLocalPosition__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__EstimatorLocalPosition__fini(&array->data[i]);
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

px4_msgs__msg__EstimatorLocalPosition__Sequence *
px4_msgs__msg__EstimatorLocalPosition__Sequence__create(size_t size)
{
  px4_msgs__msg__EstimatorLocalPosition__Sequence * array = (px4_msgs__msg__EstimatorLocalPosition__Sequence *)malloc(sizeof(px4_msgs__msg__EstimatorLocalPosition__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__EstimatorLocalPosition__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__EstimatorLocalPosition__Sequence__destroy(px4_msgs__msg__EstimatorLocalPosition__Sequence * array)
{
  if (array) {
    px4_msgs__msg__EstimatorLocalPosition__Sequence__fini(array);
  }
  free(array);
}
