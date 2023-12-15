// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/DifferentialPressure.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DIFFERENTIAL_PRESSURE__STRUCT_H_
#define PX4_MSGS__MSG__DIFFERENTIAL_PRESSURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/DifferentialPressure in the package px4_msgs.
typedef struct px4_msgs__msg__DifferentialPressure
{
  uint64_t timestamp;
  uint64_t error_count;
  float differential_pressure_raw_pa;
  float differential_pressure_filtered_pa;
  float temperature;
  uint32_t device_id;
} px4_msgs__msg__DifferentialPressure;

// Struct for a sequence of px4_msgs__msg__DifferentialPressure.
typedef struct px4_msgs__msg__DifferentialPressure__Sequence
{
  px4_msgs__msg__DifferentialPressure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__DifferentialPressure__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DIFFERENTIAL_PRESSURE__STRUCT_H_
