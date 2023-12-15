// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_msgs:msg/TelemetryStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/telemetry_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
px4_msgs__msg__TelemetryStatus__init(px4_msgs__msg__TelemetryStatus * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // type
  // mode
  // flow_control
  // forwarding
  // mavlink_v2
  // ftp
  // streams
  // data_rate
  // rate_multiplier
  // tx_rate_avg
  // tx_error_rate_avg
  // tx_message_count
  // tx_buffer_overruns
  // rx_rate_avg
  // rx_message_count
  // rx_message_lost_count
  // rx_buffer_overruns
  // rx_parse_errors
  // rx_packet_drop_count
  // rx_message_lost_rate
  // heartbeat_type_antenna_tracker
  // heartbeat_type_gcs
  // heartbeat_type_onboard_controller
  // heartbeat_type_gimbal
  // heartbeat_type_adsb
  // heartbeat_type_camera
  // heartbeat_component_telemetry_radio
  // heartbeat_component_log
  // heartbeat_component_osd
  // heartbeat_component_obstacle_avoidance
  // heartbeat_component_vio
  // heartbeat_component_pairing_manager
  // heartbeat_component_udp_bridge
  // heartbeat_component_uart_bridge
  // avoidance_system_healthy
  return true;
}

void
px4_msgs__msg__TelemetryStatus__fini(px4_msgs__msg__TelemetryStatus * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // type
  // mode
  // flow_control
  // forwarding
  // mavlink_v2
  // ftp
  // streams
  // data_rate
  // rate_multiplier
  // tx_rate_avg
  // tx_error_rate_avg
  // tx_message_count
  // tx_buffer_overruns
  // rx_rate_avg
  // rx_message_count
  // rx_message_lost_count
  // rx_buffer_overruns
  // rx_parse_errors
  // rx_packet_drop_count
  // rx_message_lost_rate
  // heartbeat_type_antenna_tracker
  // heartbeat_type_gcs
  // heartbeat_type_onboard_controller
  // heartbeat_type_gimbal
  // heartbeat_type_adsb
  // heartbeat_type_camera
  // heartbeat_component_telemetry_radio
  // heartbeat_component_log
  // heartbeat_component_osd
  // heartbeat_component_obstacle_avoidance
  // heartbeat_component_vio
  // heartbeat_component_pairing_manager
  // heartbeat_component_udp_bridge
  // heartbeat_component_uart_bridge
  // avoidance_system_healthy
}

px4_msgs__msg__TelemetryStatus *
px4_msgs__msg__TelemetryStatus__create()
{
  px4_msgs__msg__TelemetryStatus * msg = (px4_msgs__msg__TelemetryStatus *)malloc(sizeof(px4_msgs__msg__TelemetryStatus));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_msgs__msg__TelemetryStatus));
  bool success = px4_msgs__msg__TelemetryStatus__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
px4_msgs__msg__TelemetryStatus__destroy(px4_msgs__msg__TelemetryStatus * msg)
{
  if (msg) {
    px4_msgs__msg__TelemetryStatus__fini(msg);
  }
  free(msg);
}


bool
px4_msgs__msg__TelemetryStatus__Sequence__init(px4_msgs__msg__TelemetryStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  px4_msgs__msg__TelemetryStatus * data = NULL;
  if (size) {
    data = (px4_msgs__msg__TelemetryStatus *)calloc(size, sizeof(px4_msgs__msg__TelemetryStatus));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_msgs__msg__TelemetryStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_msgs__msg__TelemetryStatus__fini(&data[i - 1]);
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
px4_msgs__msg__TelemetryStatus__Sequence__fini(px4_msgs__msg__TelemetryStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_msgs__msg__TelemetryStatus__fini(&array->data[i]);
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

px4_msgs__msg__TelemetryStatus__Sequence *
px4_msgs__msg__TelemetryStatus__Sequence__create(size_t size)
{
  px4_msgs__msg__TelemetryStatus__Sequence * array = (px4_msgs__msg__TelemetryStatus__Sequence *)malloc(sizeof(px4_msgs__msg__TelemetryStatus__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = px4_msgs__msg__TelemetryStatus__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
px4_msgs__msg__TelemetryStatus__Sequence__destroy(px4_msgs__msg__TelemetryStatus__Sequence * array)
{
  if (array) {
    px4_msgs__msg__TelemetryStatus__Sequence__fini(array);
  }
  free(array);
}
