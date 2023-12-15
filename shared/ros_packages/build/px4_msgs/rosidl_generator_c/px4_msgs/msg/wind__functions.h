// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/Wind.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__WIND__FUNCTIONS_H_
#define PX4_MSGS__MSG__WIND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "px4_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "px4_msgs/msg/wind__struct.h"

/// Initialize msg/Wind message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * px4_msgs__msg__Wind
 * )) before or use
 * px4_msgs__msg__Wind__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__Wind__init(px4_msgs__msg__Wind * msg);

/// Finalize msg/Wind message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__Wind__fini(px4_msgs__msg__Wind * msg);

/// Create msg/Wind message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * px4_msgs__msg__Wind__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__Wind *
px4_msgs__msg__Wind__create();

/// Destroy msg/Wind message.
/**
 * It calls
 * px4_msgs__msg__Wind__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__Wind__destroy(px4_msgs__msg__Wind * msg);


/// Initialize array of msg/Wind messages.
/**
 * It allocates the memory for the number of elements and calls
 * px4_msgs__msg__Wind__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__Wind__Sequence__init(px4_msgs__msg__Wind__Sequence * array, size_t size);

/// Finalize array of msg/Wind messages.
/**
 * It calls
 * px4_msgs__msg__Wind__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__Wind__Sequence__fini(px4_msgs__msg__Wind__Sequence * array);

/// Create array of msg/Wind messages.
/**
 * It allocates the memory for the array and calls
 * px4_msgs__msg__Wind__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__Wind__Sequence *
px4_msgs__msg__Wind__Sequence__create(size_t size);

/// Destroy array of msg/Wind messages.
/**
 * It calls
 * px4_msgs__msg__Wind__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__Wind__Sequence__destroy(px4_msgs__msg__Wind__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__WIND__FUNCTIONS_H_
