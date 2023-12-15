// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/EstimatorStatusFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/estimator_status_flags__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__EstimatorStatusFlags__init(px4_msgs__msg__EstimatorStatusFlags * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // timestamp_sample
  // control_status_changes
  // cs_tilt_align
  // cs_yaw_align
  // cs_gps
  // cs_opt_flow
  // cs_mag_hdg
  // cs_mag_3d
  // cs_mag_dec
  // cs_in_air
  // cs_wind
  // cs_baro_hgt
  // cs_rng_hgt
  // cs_gps_hgt
  // cs_ev_pos
  // cs_ev_yaw
  // cs_ev_hgt
  // cs_fuse_beta
  // cs_mag_field_disturbed
  // cs_fixed_wing
  // cs_mag_fault
  // cs_fuse_aspd
  // cs_gnd_effect
  // cs_rng_stuck
  // cs_gps_yaw
  // cs_mag_aligned_in_flight
  // cs_ev_vel
  // cs_synthetic_mag_z
  // cs_vehicle_at_rest
  // cs_gps_yaw_fault
  // fault_status_changes
  // fs_bad_mag_x
  // fs_bad_mag_y
  // fs_bad_mag_z
  // fs_bad_hdg
  // fs_bad_mag_decl
  // fs_bad_airspeed
  // fs_bad_sideslip
  // fs_bad_optflow_x
  // fs_bad_optflow_y
  // fs_bad_vel_n
  // fs_bad_vel_e
  // fs_bad_vel_d
  // fs_bad_pos_n
  // fs_bad_pos_e
  // fs_bad_pos_d
  // fs_bad_acc_bias
  // fs_bad_acc_vertical
  // fs_bad_acc_clipping
  // innovation_fault_status_changes
  // reject_hor_vel
  // reject_ver_vel
  // reject_hor_pos
  // reject_ver_pos
  // reject_mag_x
  // reject_mag_y
  // reject_mag_z
  // reject_yaw
  // reject_airspeed
  // reject_sideslip
  // reject_hagl
  // reject_optflow_x
  // reject_optflow_y
  return true;
}

void
px4_msgs__msg__EstimatorStatusFlags__fini(px4_msgs__msg__EstimatorStatusFlags * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // timestamp_sample
  // control_status_changes
  // cs_tilt_align
  // cs_yaw_align
  // cs_gps
  // cs_opt_flow
  // cs_mag_hdg
  // cs_mag_3d
  // cs_mag_dec
  // cs_in_air
  // cs_wind
  // cs_baro_hgt
  // cs_rng_hgt
  // cs_gps_hgt
  // cs_ev_pos
  // cs_ev_yaw
  // cs_ev_hgt
  // cs_fuse_beta
  // cs_mag_field_disturbed
  // cs_fixed_wing
  // cs_mag_fault
  // cs_fuse_aspd
  // cs_gnd_effect
  // cs_rng_stuck
  // cs_gps_yaw
  // cs_mag_aligned_in_flight
  // cs_ev_vel
  // cs_synthetic_mag_z
  // cs_vehicle_at_rest
  // cs_gps_yaw_fault
  // fault_status_changes
  // fs_bad_mag_x
  // fs_bad_mag_y
  // fs_bad_mag_z
  // fs_bad_hdg
  // fs_bad_mag_decl
  // fs_bad_airspeed
  // fs_bad_sideslip
  // fs_bad_optflow_x
  // fs_bad_optflow_y
  // fs_bad_vel_n
  // fs_bad_vel_e
  // fs_bad_vel_d
  // fs_bad_pos_n
  // fs_bad_pos_e
  // fs_bad_pos_d
  // fs_bad_acc_bias
  // fs_bad_acc_vertical
  // fs_bad_acc_clipping
  // innovation_fault_status_changes
  // reject_hor_vel
  // reject_ver_vel
  // reject_hor_pos
  // reject_ver_pos
  // reject_mag_x
  // reject_mag_y
  // reject_mag_z
  // reject_yaw
  // reject_airspeed
  // reject_sideslip
  // reject_hagl
  // reject_optflow_x
  // reject_optflow_y
}

px4_msgs__msg__EstimatorStatusFlags *
px4_msgs__msg__EstimatorStatusFlags__create()
{
  px4_msgs__msg__EstimatorStatusFlags * msg = (px4_msgs__msg__EstimatorStatusFlags *)malloc(sizeof(px4_msgs__msg__EstimatorStatusFlags));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__EstimatorStatusFlags));
  bool success = px4_msgs__msg__EstimatorStatusFlags__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__EstimatorStatusFlags__destroy(px4_msgs__msg__EstimatorStatusFlags * msg)
{
  if (msg) {
    px4_msgs__msg__EstimatorStatusFlags__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__EstimatorStatusFlags__Sequence__init(px4_msgs__msg__EstimatorStatusFlags__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__EstimatorStatusFlags * data = NULL;
  if (size) {
    data = (px4_msgs__msg__EstimatorStatusFlags *)calloc(size, sizeof(px4_msgs__msg__EstimatorStatusFlags));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__EstimatorStatusFlags__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__EstimatorStatusFlags__fini(&data[i - 1]);
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
px4_msgs__msg__EstimatorStatusFlags__Sequence__fini(px4_msgs__msg__EstimatorStatusFlags__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__EstimatorStatusFlags__fini(&array->data[i]);
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

px4_msgs__msg__EstimatorStatusFlags__Sequence *
px4_msgs__msg__EstimatorStatusFlags__Sequence__create(size_t size)
{
  px4_msgs__msg__EstimatorStatusFlags__Sequence * array = (px4_msgs__msg__EstimatorStatusFlags__Sequence *)malloc(sizeof(px4_msgs__msg__EstimatorStatusFlags__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__EstimatorStatusFlags__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__EstimatorStatusFlags__Sequence__destroy(px4_msgs__msg__EstimatorStatusFlags__Sequence * array)
{
  if (array) {
    px4_msgs__msg__EstimatorStatusFlags__Sequence__fini(array);
  }
  free(array);
}
