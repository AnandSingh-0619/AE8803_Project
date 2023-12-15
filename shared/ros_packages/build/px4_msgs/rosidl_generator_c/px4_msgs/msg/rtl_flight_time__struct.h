// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RtlFlightTime.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__RTL_FLIGHT_TIME__STRUCT_H_
#define PX4_MSGS__MSG__RTL_FLIGHT_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RtlFlightTime in the package px4_msgs.
typedef struct px4_msgs__msg__RtlFlightTime
{
  uint64_t timestamp;
  float rtl_time_s;
  float rtl_limit_fraction;
} px4_msgs__msg__RtlFlightTime;

// Struct for a sequence of px4_msgs__msg__RtlFlightTime.
typedef struct px4_msgs__msg__RtlFlightTime__Sequence
{
  px4_msgs__msg__RtlFlightTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RtlFlightTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__RTL_FLIGHT_TIME__STRUCT_H_
