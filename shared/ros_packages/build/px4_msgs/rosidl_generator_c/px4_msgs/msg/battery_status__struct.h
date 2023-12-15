// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__BATTERY_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__BATTERY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BATTERY_SOURCE_POWER_MODULE'.
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_SOURCE_POWER_MODULE = 0
};

/// Constant 'BATTERY_SOURCE_EXTERNAL'.
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_SOURCE_EXTERNAL = 1
};

/// Constant 'BATTERY_SOURCE_ESCS'.
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_SOURCE_ESCS = 2
};

/// Constant 'BATTERY_WARNING_NONE'.
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_WARNING_NONE = 0
};

/// Constant 'BATTERY_WARNING_LOW'.
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_WARNING_LOW = 1
};

/// Constant 'BATTERY_WARNING_CRITICAL'.
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_WARNING_CRITICAL = 2
};

/// Constant 'BATTERY_WARNING_EMERGENCY'.
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_WARNING_EMERGENCY = 3
};

/// Constant 'BATTERY_WARNING_FAILED'.
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_WARNING_FAILED = 4
};

/// Constant 'MAX_INSTANCES'.
enum
{
  px4_msgs__msg__BatteryStatus__MAX_INSTANCES = 4
};

// Struct defined in msg/BatteryStatus in the package px4_msgs.
typedef struct px4_msgs__msg__BatteryStatus
{
  uint64_t timestamp;
  bool connected;
  float voltage_v;
  float voltage_filtered_v;
  float current_a;
  float current_filtered_a;
  float current_average_a;
  float discharged_mah;
  float remaining;
  float scale;
  float temperature;
  int32_t cell_count;
  uint8_t source;
  uint8_t priority;
  uint16_t capacity;
  uint16_t cycle_count;
  uint16_t run_time_to_empty;
  uint16_t average_time_to_empty;
  uint16_t serial_number;
  uint16_t manufacture_date;
  uint16_t state_of_health;
  uint16_t max_error;
  uint8_t id;
  uint16_t interface_error;
  float voltage_cell_v[14];
  float max_cell_voltage_delta;
  bool is_powering_off;
  uint8_t warning;
  float average_power;
  float available_energy;
  float remaining_capacity;
  float design_capacity;
  uint16_t average_time_to_full;
  uint16_t over_discharge_count;
  float nominal_voltage;
} px4_msgs__msg__BatteryStatus;

// Struct for a sequence of px4_msgs__msg__BatteryStatus.
typedef struct px4_msgs__msg__BatteryStatus__Sequence
{
  px4_msgs__msg__BatteryStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__BatteryStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__BATTERY_STATUS__STRUCT_H_
