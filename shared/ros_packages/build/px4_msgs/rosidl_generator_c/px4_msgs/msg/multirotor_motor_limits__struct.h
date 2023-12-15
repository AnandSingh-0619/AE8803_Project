// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/MultirotorMotorLimits.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__MULTIROTOR_MOTOR_LIMITS__STRUCT_H_
#define PX4_MSGS__MSG__MULTIROTOR_MOTOR_LIMITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MultirotorMotorLimits in the package px4_msgs.
typedef struct px4_msgs__msg__MultirotorMotorLimits
{
  uint64_t timestamp;
  uint16_t saturation_status;
} px4_msgs__msg__MultirotorMotorLimits;

// Struct for a sequence of px4_msgs__msg__MultirotorMotorLimits.
typedef struct px4_msgs__msg__MultirotorMotorLimits__Sequence
{
  px4_msgs__msg__MultirotorMotorLimits * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__MultirotorMotorLimits__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__MULTIROTOR_MOTOR_LIMITS__STRUCT_H_
