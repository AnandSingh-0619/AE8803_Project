// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EkfGpsDrift.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__EKF_GPS_DRIFT__STRUCT_H_
#define PX4_MSGS__MSG__EKF_GPS_DRIFT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/EkfGpsDrift in the package px4_msgs.
typedef struct px4_msgs__msg__EkfGpsDrift
{
  uint64_t timestamp;
  float hpos_drift_rate;
  float vpos_drift_rate;
  float hspd;
  bool blocked;
} px4_msgs__msg__EkfGpsDrift;

// Struct for a sequence of px4_msgs__msg__EkfGpsDrift.
typedef struct px4_msgs__msg__EkfGpsDrift__Sequence
{
  px4_msgs__msg__EkfGpsDrift * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EkfGpsDrift__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__EKF_GPS_DRIFT__STRUCT_H_
