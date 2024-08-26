// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from darknet_ros_msgs:action/CheckForObjects.idl
// generated code does not contain a copyright notice

#ifndef DARKNET_ROS_MSGS__ACTION__CHECK_FOR_OBJECTS__FUNCTIONS_H_
#define DARKNET_ROS_MSGS__ACTION__CHECK_FOR_OBJECTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_generator_c/visibility_control.h"
#include "darknet_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "darknet_ros_msgs/action/check_for_objects__struct.h"

/// Initialize action/CheckForObjects message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * darknet_ros_msgs__action__CheckForObjects_Goal
 * )) before or use
 * darknet_ros_msgs__action__CheckForObjects_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__action__CheckForObjects_Goal__init(darknet_ros_msgs__action__CheckForObjects_Goal * msg);

/// Finalize action/CheckForObjects message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_Goal__fini(darknet_ros_msgs__action__CheckForObjects_Goal * msg);

/// Create action/CheckForObjects message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * darknet_ros_msgs__action__CheckForObjects_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__action__CheckForObjects_Goal *
darknet_ros_msgs__action__CheckForObjects_Goal__create();

/// Destroy action/CheckForObjects message.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_Goal__destroy(darknet_ros_msgs__action__CheckForObjects_Goal * msg);


/// Initialize array of action/CheckForObjects messages.
/**
 * It allocates the memory for the number of elements and calls
 * darknet_ros_msgs__action__CheckForObjects_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__action__CheckForObjects_Goal__Sequence__init(darknet_ros_msgs__action__CheckForObjects_Goal__Sequence * array, size_t size);

/// Finalize array of action/CheckForObjects messages.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_Goal__Sequence__fini(darknet_ros_msgs__action__CheckForObjects_Goal__Sequence * array);

/// Create array of action/CheckForObjects messages.
/**
 * It allocates the memory for the array and calls
 * darknet_ros_msgs__action__CheckForObjects_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__action__CheckForObjects_Goal__Sequence *
darknet_ros_msgs__action__CheckForObjects_Goal__Sequence__create(size_t size);

/// Destroy array of action/CheckForObjects messages.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_Goal__Sequence__destroy(darknet_ros_msgs__action__CheckForObjects_Goal__Sequence * array);

/// Initialize action/CheckForObjects message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * darknet_ros_msgs__action__CheckForObjects_Result
 * )) before or use
 * darknet_ros_msgs__action__CheckForObjects_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__action__CheckForObjects_Result__init(darknet_ros_msgs__action__CheckForObjects_Result * msg);

/// Finalize action/CheckForObjects message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_Result__fini(darknet_ros_msgs__action__CheckForObjects_Result * msg);

/// Create action/CheckForObjects message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * darknet_ros_msgs__action__CheckForObjects_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__action__CheckForObjects_Result *
darknet_ros_msgs__action__CheckForObjects_Result__create();

/// Destroy action/CheckForObjects message.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_Result__destroy(darknet_ros_msgs__action__CheckForObjects_Result * msg);


/// Initialize array of action/CheckForObjects messages.
/**
 * It allocates the memory for the number of elements and calls
 * darknet_ros_msgs__action__CheckForObjects_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__action__CheckForObjects_Result__Sequence__init(darknet_ros_msgs__action__CheckForObjects_Result__Sequence * array, size_t size);

/// Finalize array of action/CheckForObjects messages.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_Result__Sequence__fini(darknet_ros_msgs__action__CheckForObjects_Result__Sequence * array);

/// Create array of action/CheckForObjects messages.
/**
 * It allocates the memory for the array and calls
 * darknet_ros_msgs__action__CheckForObjects_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__action__CheckForObjects_Result__Sequence *
darknet_ros_msgs__action__CheckForObjects_Result__Sequence__create(size_t size);

/// Destroy array of action/CheckForObjects messages.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_Result__Sequence__destroy(darknet_ros_msgs__action__CheckForObjects_Result__Sequence * array);

/// Initialize action/CheckForObjects message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * darknet_ros_msgs__action__CheckForObjects_Feedback
 * )) before or use
 * darknet_ros_msgs__action__CheckForObjects_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__action__CheckForObjects_Feedback__init(darknet_ros_msgs__action__CheckForObjects_Feedback * msg);

/// Finalize action/CheckForObjects message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_Feedback__fini(darknet_ros_msgs__action__CheckForObjects_Feedback * msg);

/// Create action/CheckForObjects message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * darknet_ros_msgs__action__CheckForObjects_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__action__CheckForObjects_Feedback *
darknet_ros_msgs__action__CheckForObjects_Feedback__create();

/// Destroy action/CheckForObjects message.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_Feedback__destroy(darknet_ros_msgs__action__CheckForObjects_Feedback * msg);


/// Initialize array of action/CheckForObjects messages.
/**
 * It allocates the memory for the number of elements and calls
 * darknet_ros_msgs__action__CheckForObjects_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence__init(darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence * array, size_t size);

/// Finalize array of action/CheckForObjects messages.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence__fini(darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence * array);

/// Create array of action/CheckForObjects messages.
/**
 * It allocates the memory for the array and calls
 * darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence *
darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence__create(size_t size);

/// Destroy array of action/CheckForObjects messages.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence__destroy(darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence * array);

/// Initialize action/CheckForObjects message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * darknet_ros_msgs__action__CheckForObjects_SendGoal_Request
 * )) before or use
 * darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__init(darknet_ros_msgs__action__CheckForObjects_SendGoal_Request * msg);

/// Finalize action/CheckForObjects message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__fini(darknet_ros_msgs__action__CheckForObjects_SendGoal_Request * msg);

/// Create action/CheckForObjects message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request *
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__create();

/// Destroy action/CheckForObjects message.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__destroy(darknet_ros_msgs__action__CheckForObjects_SendGoal_Request * msg);


/// Initialize array of action/CheckForObjects messages.
/**
 * It allocates the memory for the number of elements and calls
 * darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence__init(darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/CheckForObjects messages.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence__fini(darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence * array);

/// Create array of action/CheckForObjects messages.
/**
 * It allocates the memory for the array and calls
 * darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence *
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/CheckForObjects messages.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence__destroy(darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence * array);

/// Initialize action/CheckForObjects message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * darknet_ros_msgs__action__CheckForObjects_SendGoal_Response
 * )) before or use
 * darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__init(darknet_ros_msgs__action__CheckForObjects_SendGoal_Response * msg);

/// Finalize action/CheckForObjects message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__fini(darknet_ros_msgs__action__CheckForObjects_SendGoal_Response * msg);

/// Create action/CheckForObjects message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response *
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__create();

/// Destroy action/CheckForObjects message.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__destroy(darknet_ros_msgs__action__CheckForObjects_SendGoal_Response * msg);


/// Initialize array of action/CheckForObjects messages.
/**
 * It allocates the memory for the number of elements and calls
 * darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence__init(darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/CheckForObjects messages.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence__fini(darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence * array);

/// Create array of action/CheckForObjects messages.
/**
 * It allocates the memory for the array and calls
 * darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence *
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/CheckForObjects messages.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence__destroy(darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence * array);

/// Initialize action/CheckForObjects message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * darknet_ros_msgs__action__CheckForObjects_GetResult_Request
 * )) before or use
 * darknet_ros_msgs__action__CheckForObjects_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__action__CheckForObjects_GetResult_Request__init(darknet_ros_msgs__action__CheckForObjects_GetResult_Request * msg);

/// Finalize action/CheckForObjects message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_GetResult_Request__fini(darknet_ros_msgs__action__CheckForObjects_GetResult_Request * msg);

/// Create action/CheckForObjects message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * darknet_ros_msgs__action__CheckForObjects_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__action__CheckForObjects_GetResult_Request *
darknet_ros_msgs__action__CheckForObjects_GetResult_Request__create();

/// Destroy action/CheckForObjects message.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_GetResult_Request__destroy(darknet_ros_msgs__action__CheckForObjects_GetResult_Request * msg);


/// Initialize array of action/CheckForObjects messages.
/**
 * It allocates the memory for the number of elements and calls
 * darknet_ros_msgs__action__CheckForObjects_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence__init(darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/CheckForObjects messages.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence__fini(darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence * array);

/// Create array of action/CheckForObjects messages.
/**
 * It allocates the memory for the array and calls
 * darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence *
darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/CheckForObjects messages.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence__destroy(darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence * array);

/// Initialize action/CheckForObjects message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * darknet_ros_msgs__action__CheckForObjects_GetResult_Response
 * )) before or use
 * darknet_ros_msgs__action__CheckForObjects_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__action__CheckForObjects_GetResult_Response__init(darknet_ros_msgs__action__CheckForObjects_GetResult_Response * msg);

/// Finalize action/CheckForObjects message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_GetResult_Response__fini(darknet_ros_msgs__action__CheckForObjects_GetResult_Response * msg);

/// Create action/CheckForObjects message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * darknet_ros_msgs__action__CheckForObjects_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__action__CheckForObjects_GetResult_Response *
darknet_ros_msgs__action__CheckForObjects_GetResult_Response__create();

/// Destroy action/CheckForObjects message.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_GetResult_Response__destroy(darknet_ros_msgs__action__CheckForObjects_GetResult_Response * msg);


/// Initialize array of action/CheckForObjects messages.
/**
 * It allocates the memory for the number of elements and calls
 * darknet_ros_msgs__action__CheckForObjects_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence__init(darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/CheckForObjects messages.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence__fini(darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence * array);

/// Create array of action/CheckForObjects messages.
/**
 * It allocates the memory for the array and calls
 * darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence *
darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/CheckForObjects messages.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence__destroy(darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence * array);

/// Initialize action/CheckForObjects message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * darknet_ros_msgs__action__CheckForObjects_FeedbackMessage
 * )) before or use
 * darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__init(darknet_ros_msgs__action__CheckForObjects_FeedbackMessage * msg);

/// Finalize action/CheckForObjects message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__fini(darknet_ros_msgs__action__CheckForObjects_FeedbackMessage * msg);

/// Create action/CheckForObjects message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage *
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__create();

/// Destroy action/CheckForObjects message.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__destroy(darknet_ros_msgs__action__CheckForObjects_FeedbackMessage * msg);


/// Initialize array of action/CheckForObjects messages.
/**
 * It allocates the memory for the number of elements and calls
 * darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence__init(darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/CheckForObjects messages.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence__fini(darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence * array);

/// Create array of action/CheckForObjects messages.
/**
 * It allocates the memory for the array and calls
 * darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence *
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/CheckForObjects messages.
/**
 * It calls
 * darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence__destroy(darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // DARKNET_ROS_MSGS__ACTION__CHECK_FOR_OBJECTS__FUNCTIONS_H_
