// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VehicleLandDetected.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/vehicle_land_detected__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/vehicle_land_detected__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::VehicleLandDetected & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: alt_max
  cdr << ros_message.alt_max;
  // Member: freefall
  cdr << (ros_message.freefall ? true : false);
  // Member: ground_contact
  cdr << (ros_message.ground_contact ? true : false);
  // Member: maybe_landed
  cdr << (ros_message.maybe_landed ? true : false);
  // Member: landed
  cdr << (ros_message.landed ? true : false);
  // Member: in_ground_effect
  cdr << (ros_message.in_ground_effect ? true : false);
  // Member: in_descend
  cdr << (ros_message.in_descend ? true : false);
  // Member: has_low_throttle
  cdr << (ros_message.has_low_throttle ? true : false);
  // Member: vertical_movement
  cdr << (ros_message.vertical_movement ? true : false);
  // Member: horizontal_movement
  cdr << (ros_message.horizontal_movement ? true : false);
  // Member: close_to_ground_or_skipped_check
  cdr << (ros_message.close_to_ground_or_skipped_check ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::VehicleLandDetected & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: alt_max
  cdr >> ros_message.alt_max;

  // Member: freefall
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.freefall = tmp ? true : false;
  }

  // Member: ground_contact
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ground_contact = tmp ? true : false;
  }

  // Member: maybe_landed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.maybe_landed = tmp ? true : false;
  }

  // Member: landed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.landed = tmp ? true : false;
  }

  // Member: in_ground_effect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.in_ground_effect = tmp ? true : false;
  }

  // Member: in_descend
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.in_descend = tmp ? true : false;
  }

  // Member: has_low_throttle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.has_low_throttle = tmp ? true : false;
  }

  // Member: vertical_movement
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vertical_movement = tmp ? true : false;
  }

  // Member: horizontal_movement
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.horizontal_movement = tmp ? true : false;
  }

  // Member: close_to_ground_or_skipped_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.close_to_ground_or_skipped_check = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::VehicleLandDetected & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: alt_max
  {
    size_t item_size = sizeof(ros_message.alt_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: freefall
  {
    size_t item_size = sizeof(ros_message.freefall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ground_contact
  {
    size_t item_size = sizeof(ros_message.ground_contact);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: maybe_landed
  {
    size_t item_size = sizeof(ros_message.maybe_landed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: landed
  {
    size_t item_size = sizeof(ros_message.landed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: in_ground_effect
  {
    size_t item_size = sizeof(ros_message.in_ground_effect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: in_descend
  {
    size_t item_size = sizeof(ros_message.in_descend);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: has_low_throttle
  {
    size_t item_size = sizeof(ros_message.has_low_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vertical_movement
  {
    size_t item_size = sizeof(ros_message.vertical_movement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: horizontal_movement
  {
    size_t item_size = sizeof(ros_message.horizontal_movement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: close_to_ground_or_skipped_check
  {
    size_t item_size = sizeof(ros_message.close_to_ground_or_skipped_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_VehicleLandDetected(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: alt_max
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: freefall
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ground_contact
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: maybe_landed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: landed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: in_ground_effect
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: in_descend
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: has_low_throttle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vertical_movement
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: horizontal_movement
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: close_to_ground_or_skipped_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleLandDetected__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleLandDetected *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleLandDetected__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::VehicleLandDetected *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleLandDetected__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleLandDetected *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleLandDetected__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VehicleLandDetected(full_bounded, 0);
}

static message_type_support_callbacks_t _VehicleLandDetected__callbacks = {
  "px4_msgs::msg",
  "VehicleLandDetected",
  _VehicleLandDetected__cdr_serialize,
  _VehicleLandDetected__cdr_deserialize,
  _VehicleLandDetected__get_serialized_size,
  _VehicleLandDetected__max_serialized_size
};

static rosidl_message_type_support_t _VehicleLandDetected__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleLandDetected__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::VehicleLandDetected>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleLandDetected__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, VehicleLandDetected)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleLandDetected__handle;
}

#ifdef __cplusplus
}
#endif
