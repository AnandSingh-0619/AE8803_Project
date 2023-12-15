// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EscReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__ESC_REPORT__STRUCT_H_
#define PX4_MSGS__MSG__ESC_REPORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'FAILURE_NONE'.
enum
{
  px4_msgs__msg__EscReport__FAILURE_NONE = 0
};

/// Constant 'FAILURE_OVER_CURRENT_MASK'.
enum
{
  px4_msgs__msg__EscReport__FAILURE_OVER_CURRENT_MASK = 1
};

/// Constant 'FAILURE_OVER_VOLTAGE_MASK'.
enum
{
  px4_msgs__msg__EscReport__FAILURE_OVER_VOLTAGE_MASK = 2
};

/// Constant 'FAILURE_OVER_TEMPERATURE_MASK'.
enum
{
  px4_msgs__msg__EscReport__FAILURE_OVER_TEMPERATURE_MASK = 4
};

/// Constant 'FAILURE_OVER_RPM_MASK'.
enum
{
  px4_msgs__msg__EscReport__FAILURE_OVER_RPM_MASK = 8
};

/// Constant 'FAILURE_INCONSISTENT_CMD_MASK'.
enum
{
  px4_msgs__msg__EscReport__FAILURE_INCONSISTENT_CMD_MASK = 16
};

/// Constant 'FAILURE_MOTOR_STUCK_MASK'.
enum
{
  px4_msgs__msg__EscReport__FAILURE_MOTOR_STUCK_MASK = 32
};

/// Constant 'FAILURE_GENERIC_MASK'.
enum
{
  px4_msgs__msg__EscReport__FAILURE_GENERIC_MASK = 64
};

// Struct defined in msg/EscReport in the package px4_msgs.
typedef struct px4_msgs__msg__EscReport
{
  uint64_t timestamp;
  uint32_t esc_errorcount;
  int32_t esc_rpm;
  float esc_voltage;
  float esc_current;
  float esc_temperature;
  uint8_t esc_address;
  uint8_t esc_state;
  uint8_t failures;
} px4_msgs__msg__EscReport;

// Struct for a sequence of px4_msgs__msg__EscReport.
typedef struct px4_msgs__msg__EscReport__Sequence
{
  px4_msgs__msg__EscReport * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EscReport__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__ESC_REPORT__STRUCT_H_
