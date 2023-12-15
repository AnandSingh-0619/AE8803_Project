// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleActuatorSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__VEHICLE_ACTUATOR_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__VEHICLE_ACTUATOR_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NUM_ACTUATOR_SETPOINT'.
enum
{
  px4_msgs__msg__VehicleActuatorSetpoint__NUM_ACTUATOR_SETPOINT = 16
};

// Struct defined in msg/VehicleActuatorSetpoint in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleActuatorSetpoint
{
  uint64_t timestamp;
  uint64_t timestamp_sample;
  float actuator[16];
} px4_msgs__msg__VehicleActuatorSetpoint;

// Struct for a sequence of px4_msgs__msg__VehicleActuatorSetpoint.
typedef struct px4_msgs__msg__VehicleActuatorSetpoint__Sequence
{
  px4_msgs__msg__VehicleActuatorSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleActuatorSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__VEHICLE_ACTUATOR_SETPOINT__STRUCT_H_
