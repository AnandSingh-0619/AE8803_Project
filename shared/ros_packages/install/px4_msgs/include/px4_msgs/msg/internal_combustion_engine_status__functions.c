// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/InternalCombustionEngineStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/internal_combustion_engine_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__InternalCombustionEngineStatus__init(px4_msgs__msg__InternalCombustionEngineStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // state
  // flags
  // engine_load_percent
  // engine_speed_rpm
  // spark_dwell_time_ms
  // atmospheric_pressure_kpa
  // intake_manifold_pressure_kpa
  // intake_manifold_temperature
  // coolant_temperature
  // oil_pressure
  // oil_temperature
  // fuel_pressure
  // fuel_consumption_rate_cm3pm
  // estimated_consumed_fuel_volume_cm3
  // throttle_position_percent
  // ecu_index
  // spark_plug_usage
  // ignition_timing_deg
  // injection_time_ms
  // cylinder_head_temperature
  // exhaust_gas_temperature
  // lambda_coefficient
  return true;
}

void
px4_msgs__msg__InternalCombustionEngineStatus__fini(px4_msgs__msg__InternalCombustionEngineStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // state
  // flags
  // engine_load_percent
  // engine_speed_rpm
  // spark_dwell_time_ms
  // atmospheric_pressure_kpa
  // intake_manifold_pressure_kpa
  // intake_manifold_temperature
  // coolant_temperature
  // oil_pressure
  // oil_temperature
  // fuel_pressure
  // fuel_consumption_rate_cm3pm
  // estimated_consumed_fuel_volume_cm3
  // throttle_position_percent
  // ecu_index
  // spark_plug_usage
  // ignition_timing_deg
  // injection_time_ms
  // cylinder_head_temperature
  // exhaust_gas_temperature
  // lambda_coefficient
}

px4_msgs__msg__InternalCombustionEngineStatus *
px4_msgs__msg__InternalCombustionEngineStatus__create()
{
  px4_msgs__msg__InternalCombustionEngineStatus * msg = (px4_msgs__msg__InternalCombustionEngineStatus *)malloc(sizeof(px4_msgs__msg__InternalCombustionEngineStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__InternalCombustionEngineStatus));
  bool success = px4_msgs__msg__InternalCombustionEngineStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__InternalCombustionEngineStatus__destroy(px4_msgs__msg__InternalCombustionEngineStatus * msg)
{
  if (msg) {
    px4_msgs__msg__InternalCombustionEngineStatus__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__InternalCombustionEngineStatus__Sequence__init(px4_msgs__msg__InternalCombustionEngineStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__InternalCombustionEngineStatus * data = NULL;
  if (size) {
    data = (px4_msgs__msg__InternalCombustionEngineStatus *)calloc(size, sizeof(px4_msgs__msg__InternalCombustionEngineStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__InternalCombustionEngineStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__InternalCombustionEngineStatus__fini(&data[i - 1]);
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
px4_msgs__msg__InternalCombustionEngineStatus__Sequence__fini(px4_msgs__msg__InternalCombustionEngineStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__InternalCombustionEngineStatus__fini(&array->data[i]);
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

px4_msgs__msg__InternalCombustionEngineStatus__Sequence *
px4_msgs__msg__InternalCombustionEngineStatus__Sequence__create(size_t size)
{
  px4_msgs__msg__InternalCombustionEngineStatus__Sequence * array = (px4_msgs__msg__InternalCombustionEngineStatus__Sequence *)malloc(sizeof(px4_msgs__msg__InternalCombustionEngineStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__InternalCombustionEngineStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__InternalCombustionEngineStatus__Sequence__destroy(px4_msgs__msg__InternalCombustionEngineStatus__Sequence * array)
{
  if (array) {
    px4_msgs__msg__InternalCombustionEngineStatus__Sequence__fini(array);
  }
  free(array);
}
