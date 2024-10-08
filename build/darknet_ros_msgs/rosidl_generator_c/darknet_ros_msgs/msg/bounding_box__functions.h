// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from darknet_ros_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef DARKNET_ROS_MSGS__MSG__BOUNDING_BOX__FUNCTIONS_H_
#define DARKNET_ROS_MSGS__MSG__BOUNDING_BOX__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "darknet_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "darknet_ros_msgs/msg/bounding_box__struct.h"

/// Initialize msg/BoundingBox message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * darknet_ros_msgs__msg__BoundingBox
 * )) before or use
 * darknet_ros_msgs__msg__BoundingBox__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__msg__BoundingBox__init(darknet_ros_msgs__msg__BoundingBox * msg);

/// Finalize msg/BoundingBox message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__msg__BoundingBox__fini(darknet_ros_msgs__msg__BoundingBox * msg);

/// Create msg/BoundingBox message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * darknet_ros_msgs__msg__BoundingBox__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__msg__BoundingBox *
darknet_ros_msgs__msg__BoundingBox__create();

/// Destroy msg/BoundingBox message.
/**
 * It calls
 * darknet_ros_msgs__msg__BoundingBox__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__msg__BoundingBox__destroy(darknet_ros_msgs__msg__BoundingBox * msg);


/// Initialize array of msg/BoundingBox messages.
/**
 * It allocates the memory for the number of elements and calls
 * darknet_ros_msgs__msg__BoundingBox__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__msg__BoundingBox__Sequence__init(darknet_ros_msgs__msg__BoundingBox__Sequence * array, size_t size);

/// Finalize array of msg/BoundingBox messages.
/**
 * It calls
 * darknet_ros_msgs__msg__BoundingBox__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__msg__BoundingBox__Sequence__fini(darknet_ros_msgs__msg__BoundingBox__Sequence * array);

/// Create array of msg/BoundingBox messages.
/**
 * It allocates the memory for the array and calls
 * darknet_ros_msgs__msg__BoundingBox__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__msg__BoundingBox__Sequence *
darknet_ros_msgs__msg__BoundingBox__Sequence__create(size_t size);

/// Destroy array of msg/BoundingBox messages.
/**
 * It calls
 * darknet_ros_msgs__msg__BoundingBox__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__msg__BoundingBox__Sequence__destroy(darknet_ros_msgs__msg__BoundingBox__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // DARKNET_ROS_MSGS__MSG__BOUNDING_BOX__FUNCTIONS_H_
