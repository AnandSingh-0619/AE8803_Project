// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleAngularAcceleration.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__VEHICLE_ANGULAR_ACCELERATION__FUNCTIONS_H_
#define PX4_MSGS__MSG__VEHICLE_ANGULAR_ACCELERATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "px4_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "px4_msgs/msg/vehicle_angular_acceleration__struct.h"

/// Initialize msg/VehicleAngularAcceleration message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * px4_msgs__msg__VehicleAngularAcceleration
 * )) before or use
 * px4_msgs__msg__VehicleAngularAcceleration__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__VehicleAngularAcceleration__init(px4_msgs__msg__VehicleAngularAcceleration * msg);

/// Finalize msg/VehicleAngularAcceleration message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__VehicleAngularAcceleration__fini(px4_msgs__msg__VehicleAngularAcceleration * msg);

/// Create msg/VehicleAngularAcceleration message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * px4_msgs__msg__VehicleAngularAcceleration__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__VehicleAngularAcceleration *
px4_msgs__msg__VehicleAngularAcceleration__create();

/// Destroy msg/VehicleAngularAcceleration message.
/**
 * It calls
 * px4_msgs__msg__VehicleAngularAcceleration__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__VehicleAngularAcceleration__destroy(px4_msgs__msg__VehicleAngularAcceleration * msg);


/// Initialize array of msg/VehicleAngularAcceleration messages.
/**
 * It allocates the memory for the number of elements and calls
 * px4_msgs__msg__VehicleAngularAcceleration__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__VehicleAngularAcceleration__Sequence__init(px4_msgs__msg__VehicleAngularAcceleration__Sequence * array, size_t size);

/// Finalize array of msg/VehicleAngularAcceleration messages.
/**
 * It calls
 * px4_msgs__msg__VehicleAngularAcceleration__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__VehicleAngularAcceleration__Sequence__fini(px4_msgs__msg__VehicleAngularAcceleration__Sequence * array);

/// Create array of msg/VehicleAngularAcceleration messages.
/**
 * It allocates the memory for the array and calls
 * px4_msgs__msg__VehicleAngularAcceleration__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__VehicleAngularAcceleration__Sequence *
px4_msgs__msg__VehicleAngularAcceleration__Sequence__create(size_t size);

/// Destroy array of msg/VehicleAngularAcceleration messages.
/**
 * It calls
 * px4_msgs__msg__VehicleAngularAcceleration__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__VehicleAngularAcceleration__Sequence__destroy(px4_msgs__msg__VehicleAngularAcceleration__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__VEHICLE_ANGULAR_ACCELERATION__FUNCTIONS_H_
