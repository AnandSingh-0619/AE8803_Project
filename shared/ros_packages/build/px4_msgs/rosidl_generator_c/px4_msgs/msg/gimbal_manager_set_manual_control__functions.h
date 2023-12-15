// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/GimbalManagerSetManualControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__GIMBAL_MANAGER_SET_MANUAL_CONTROL__FUNCTIONS_H_
#define PX4_MSGS__MSG__GIMBAL_MANAGER_SET_MANUAL_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "px4_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "px4_msgs/msg/gimbal_manager_set_manual_control__struct.h"

/// Initialize msg/GimbalManagerSetManualControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * px4_msgs__msg__GimbalManagerSetManualControl
 * )) before or use
 * px4_msgs__msg__GimbalManagerSetManualControl__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__GimbalManagerSetManualControl__init(px4_msgs__msg__GimbalManagerSetManualControl * msg);

/// Finalize msg/GimbalManagerSetManualControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__GimbalManagerSetManualControl__fini(px4_msgs__msg__GimbalManagerSetManualControl * msg);

/// Create msg/GimbalManagerSetManualControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * px4_msgs__msg__GimbalManagerSetManualControl__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__GimbalManagerSetManualControl *
px4_msgs__msg__GimbalManagerSetManualControl__create();

/// Destroy msg/GimbalManagerSetManualControl message.
/**
 * It calls
 * px4_msgs__msg__GimbalManagerSetManualControl__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__GimbalManagerSetManualControl__destroy(px4_msgs__msg__GimbalManagerSetManualControl * msg);


/// Initialize array of msg/GimbalManagerSetManualControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * px4_msgs__msg__GimbalManagerSetManualControl__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__GimbalManagerSetManualControl__Sequence__init(px4_msgs__msg__GimbalManagerSetManualControl__Sequence * array, size_t size);

/// Finalize array of msg/GimbalManagerSetManualControl messages.
/**
 * It calls
 * px4_msgs__msg__GimbalManagerSetManualControl__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__GimbalManagerSetManualControl__Sequence__fini(px4_msgs__msg__GimbalManagerSetManualControl__Sequence * array);

/// Create array of msg/GimbalManagerSetManualControl messages.
/**
 * It allocates the memory for the array and calls
 * px4_msgs__msg__GimbalManagerSetManualControl__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__GimbalManagerSetManualControl__Sequence *
px4_msgs__msg__GimbalManagerSetManualControl__Sequence__create(size_t size);

/// Destroy array of msg/GimbalManagerSetManualControl messages.
/**
 * It calls
 * px4_msgs__msg__GimbalManagerSetManualControl__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__GimbalManagerSetManualControl__Sequence__destroy(px4_msgs__msg__GimbalManagerSetManualControl__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__GIMBAL_MANAGER_SET_MANUAL_CONTROL__FUNCTIONS_H_
