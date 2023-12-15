// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/EkfGpsDrift.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/ekf_gps_drift__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/ekf_gps_drift__struct.h"
#include "px4_msgs/msg/ekf_gps_drift__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _EkfGpsDrift__ros_msg_type = px4_msgs__msg__EkfGpsDrift;

static bool _EkfGpsDrift__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EkfGpsDrift__ros_msg_type * ros_message = static_cast<const _EkfGpsDrift__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: hpos_drift_rate
  {
    cdr << ros_message->hpos_drift_rate;
  }

  // Field name: vpos_drift_rate
  {
    cdr << ros_message->vpos_drift_rate;
  }

  // Field name: hspd
  {
    cdr << ros_message->hspd;
  }

  // Field name: blocked
  {
    cdr << (ros_message->blocked ? true : false);
  }

  return true;
}

static bool _EkfGpsDrift__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EkfGpsDrift__ros_msg_type * ros_message = static_cast<_EkfGpsDrift__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: hpos_drift_rate
  {
    cdr >> ros_message->hpos_drift_rate;
  }

  // Field name: vpos_drift_rate
  {
    cdr >> ros_message->vpos_drift_rate;
  }

  // Field name: hspd
  {
    cdr >> ros_message->hspd;
  }

  // Field name: blocked
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->blocked = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__EkfGpsDrift(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EkfGpsDrift__ros_msg_type * ros_message = static_cast<const _EkfGpsDrift__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hpos_drift_rate
  {
    size_t item_size = sizeof(ros_message->hpos_drift_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vpos_drift_rate
  {
    size_t item_size = sizeof(ros_message->vpos_drift_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hspd
  {
    size_t item_size = sizeof(ros_message->hspd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blocked
  {
    size_t item_size = sizeof(ros_message->blocked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EkfGpsDrift__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__EkfGpsDrift(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__EkfGpsDrift(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: hpos_drift_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vpos_drift_rate
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hspd
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: blocked
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EkfGpsDrift__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_px4_msgs__msg__EkfGpsDrift(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_EkfGpsDrift = {
  "px4_msgs::msg",
  "EkfGpsDrift",
  _EkfGpsDrift__cdr_serialize,
  _EkfGpsDrift__cdr_deserialize,
  _EkfGpsDrift__get_serialized_size,
  _EkfGpsDrift__max_serialized_size
};

static rosidl_message_type_support_t _EkfGpsDrift__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EkfGpsDrift,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, EkfGpsDrift)() {
  return &_EkfGpsDrift__type_support;
}

#if defined(__cplusplus)
}
#endif
