// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from dobot_magician_interface:action/JointPTP.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MAGICIAN_INTERFACE__ACTION__DETAIL__JOINT_PTP__FUNCTIONS_H_
#define DOBOT_MAGICIAN_INTERFACE__ACTION__DETAIL__JOINT_PTP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "dobot_magician_interface/msg/rosidl_generator_c__visibility_control.h"

#include "dobot_magician_interface/action/detail/joint_ptp__struct.h"

/// Initialize action/JointPTP message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dobot_magician_interface__action__JointPTP_Goal
 * )) before or use
 * dobot_magician_interface__action__JointPTP_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Goal__init(dobot_magician_interface__action__JointPTP_Goal * msg);

/// Finalize action/JointPTP message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_Goal__fini(dobot_magician_interface__action__JointPTP_Goal * msg);

/// Create action/JointPTP message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dobot_magician_interface__action__JointPTP_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
dobot_magician_interface__action__JointPTP_Goal *
dobot_magician_interface__action__JointPTP_Goal__create();

/// Destroy action/JointPTP message.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_Goal__destroy(dobot_magician_interface__action__JointPTP_Goal * msg);

/// Check for action/JointPTP message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Goal__are_equal(const dobot_magician_interface__action__JointPTP_Goal * lhs, const dobot_magician_interface__action__JointPTP_Goal * rhs);

/// Copy a action/JointPTP message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Goal__copy(
  const dobot_magician_interface__action__JointPTP_Goal * input,
  dobot_magician_interface__action__JointPTP_Goal * output);

/// Initialize array of action/JointPTP messages.
/**
 * It allocates the memory for the number of elements and calls
 * dobot_magician_interface__action__JointPTP_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Goal__Sequence__init(dobot_magician_interface__action__JointPTP_Goal__Sequence * array, size_t size);

/// Finalize array of action/JointPTP messages.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_Goal__Sequence__fini(dobot_magician_interface__action__JointPTP_Goal__Sequence * array);

/// Create array of action/JointPTP messages.
/**
 * It allocates the memory for the array and calls
 * dobot_magician_interface__action__JointPTP_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
dobot_magician_interface__action__JointPTP_Goal__Sequence *
dobot_magician_interface__action__JointPTP_Goal__Sequence__create(size_t size);

/// Destroy array of action/JointPTP messages.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_Goal__Sequence__destroy(dobot_magician_interface__action__JointPTP_Goal__Sequence * array);

/// Check for action/JointPTP message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Goal__Sequence__are_equal(const dobot_magician_interface__action__JointPTP_Goal__Sequence * lhs, const dobot_magician_interface__action__JointPTP_Goal__Sequence * rhs);

/// Copy an array of action/JointPTP messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Goal__Sequence__copy(
  const dobot_magician_interface__action__JointPTP_Goal__Sequence * input,
  dobot_magician_interface__action__JointPTP_Goal__Sequence * output);

/// Initialize action/JointPTP message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dobot_magician_interface__action__JointPTP_Result
 * )) before or use
 * dobot_magician_interface__action__JointPTP_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Result__init(dobot_magician_interface__action__JointPTP_Result * msg);

/// Finalize action/JointPTP message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_Result__fini(dobot_magician_interface__action__JointPTP_Result * msg);

/// Create action/JointPTP message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dobot_magician_interface__action__JointPTP_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
dobot_magician_interface__action__JointPTP_Result *
dobot_magician_interface__action__JointPTP_Result__create();

/// Destroy action/JointPTP message.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_Result__destroy(dobot_magician_interface__action__JointPTP_Result * msg);

/// Check for action/JointPTP message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Result__are_equal(const dobot_magician_interface__action__JointPTP_Result * lhs, const dobot_magician_interface__action__JointPTP_Result * rhs);

/// Copy a action/JointPTP message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Result__copy(
  const dobot_magician_interface__action__JointPTP_Result * input,
  dobot_magician_interface__action__JointPTP_Result * output);

/// Initialize array of action/JointPTP messages.
/**
 * It allocates the memory for the number of elements and calls
 * dobot_magician_interface__action__JointPTP_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Result__Sequence__init(dobot_magician_interface__action__JointPTP_Result__Sequence * array, size_t size);

/// Finalize array of action/JointPTP messages.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_Result__Sequence__fini(dobot_magician_interface__action__JointPTP_Result__Sequence * array);

/// Create array of action/JointPTP messages.
/**
 * It allocates the memory for the array and calls
 * dobot_magician_interface__action__JointPTP_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
dobot_magician_interface__action__JointPTP_Result__Sequence *
dobot_magician_interface__action__JointPTP_Result__Sequence__create(size_t size);

/// Destroy array of action/JointPTP messages.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_Result__Sequence__destroy(dobot_magician_interface__action__JointPTP_Result__Sequence * array);

/// Check for action/JointPTP message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Result__Sequence__are_equal(const dobot_magician_interface__action__JointPTP_Result__Sequence * lhs, const dobot_magician_interface__action__JointPTP_Result__Sequence * rhs);

/// Copy an array of action/JointPTP messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Result__Sequence__copy(
  const dobot_magician_interface__action__JointPTP_Result__Sequence * input,
  dobot_magician_interface__action__JointPTP_Result__Sequence * output);

/// Initialize action/JointPTP message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dobot_magician_interface__action__JointPTP_Feedback
 * )) before or use
 * dobot_magician_interface__action__JointPTP_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Feedback__init(dobot_magician_interface__action__JointPTP_Feedback * msg);

/// Finalize action/JointPTP message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_Feedback__fini(dobot_magician_interface__action__JointPTP_Feedback * msg);

/// Create action/JointPTP message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dobot_magician_interface__action__JointPTP_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
dobot_magician_interface__action__JointPTP_Feedback *
dobot_magician_interface__action__JointPTP_Feedback__create();

/// Destroy action/JointPTP message.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_Feedback__destroy(dobot_magician_interface__action__JointPTP_Feedback * msg);

/// Check for action/JointPTP message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Feedback__are_equal(const dobot_magician_interface__action__JointPTP_Feedback * lhs, const dobot_magician_interface__action__JointPTP_Feedback * rhs);

/// Copy a action/JointPTP message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Feedback__copy(
  const dobot_magician_interface__action__JointPTP_Feedback * input,
  dobot_magician_interface__action__JointPTP_Feedback * output);

/// Initialize array of action/JointPTP messages.
/**
 * It allocates the memory for the number of elements and calls
 * dobot_magician_interface__action__JointPTP_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Feedback__Sequence__init(dobot_magician_interface__action__JointPTP_Feedback__Sequence * array, size_t size);

/// Finalize array of action/JointPTP messages.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_Feedback__Sequence__fini(dobot_magician_interface__action__JointPTP_Feedback__Sequence * array);

/// Create array of action/JointPTP messages.
/**
 * It allocates the memory for the array and calls
 * dobot_magician_interface__action__JointPTP_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
dobot_magician_interface__action__JointPTP_Feedback__Sequence *
dobot_magician_interface__action__JointPTP_Feedback__Sequence__create(size_t size);

/// Destroy array of action/JointPTP messages.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_Feedback__Sequence__destroy(dobot_magician_interface__action__JointPTP_Feedback__Sequence * array);

/// Check for action/JointPTP message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Feedback__Sequence__are_equal(const dobot_magician_interface__action__JointPTP_Feedback__Sequence * lhs, const dobot_magician_interface__action__JointPTP_Feedback__Sequence * rhs);

/// Copy an array of action/JointPTP messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_Feedback__Sequence__copy(
  const dobot_magician_interface__action__JointPTP_Feedback__Sequence * input,
  dobot_magician_interface__action__JointPTP_Feedback__Sequence * output);

/// Initialize action/JointPTP message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dobot_magician_interface__action__JointPTP_SendGoal_Request
 * )) before or use
 * dobot_magician_interface__action__JointPTP_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_SendGoal_Request__init(dobot_magician_interface__action__JointPTP_SendGoal_Request * msg);

/// Finalize action/JointPTP message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_SendGoal_Request__fini(dobot_magician_interface__action__JointPTP_SendGoal_Request * msg);

/// Create action/JointPTP message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dobot_magician_interface__action__JointPTP_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
dobot_magician_interface__action__JointPTP_SendGoal_Request *
dobot_magician_interface__action__JointPTP_SendGoal_Request__create();

/// Destroy action/JointPTP message.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_SendGoal_Request__destroy(dobot_magician_interface__action__JointPTP_SendGoal_Request * msg);

/// Check for action/JointPTP message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_SendGoal_Request__are_equal(const dobot_magician_interface__action__JointPTP_SendGoal_Request * lhs, const dobot_magician_interface__action__JointPTP_SendGoal_Request * rhs);

/// Copy a action/JointPTP message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_SendGoal_Request__copy(
  const dobot_magician_interface__action__JointPTP_SendGoal_Request * input,
  dobot_magician_interface__action__JointPTP_SendGoal_Request * output);

/// Initialize array of action/JointPTP messages.
/**
 * It allocates the memory for the number of elements and calls
 * dobot_magician_interface__action__JointPTP_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence__init(dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/JointPTP messages.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence__fini(dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence * array);

/// Create array of action/JointPTP messages.
/**
 * It allocates the memory for the array and calls
 * dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence *
dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/JointPTP messages.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence__destroy(dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence * array);

/// Check for action/JointPTP message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence__are_equal(const dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence * lhs, const dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/JointPTP messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence__copy(
  const dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence * input,
  dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence * output);

/// Initialize action/JointPTP message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dobot_magician_interface__action__JointPTP_SendGoal_Response
 * )) before or use
 * dobot_magician_interface__action__JointPTP_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_SendGoal_Response__init(dobot_magician_interface__action__JointPTP_SendGoal_Response * msg);

/// Finalize action/JointPTP message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_SendGoal_Response__fini(dobot_magician_interface__action__JointPTP_SendGoal_Response * msg);

/// Create action/JointPTP message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dobot_magician_interface__action__JointPTP_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
dobot_magician_interface__action__JointPTP_SendGoal_Response *
dobot_magician_interface__action__JointPTP_SendGoal_Response__create();

/// Destroy action/JointPTP message.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_SendGoal_Response__destroy(dobot_magician_interface__action__JointPTP_SendGoal_Response * msg);

/// Check for action/JointPTP message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_SendGoal_Response__are_equal(const dobot_magician_interface__action__JointPTP_SendGoal_Response * lhs, const dobot_magician_interface__action__JointPTP_SendGoal_Response * rhs);

/// Copy a action/JointPTP message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_SendGoal_Response__copy(
  const dobot_magician_interface__action__JointPTP_SendGoal_Response * input,
  dobot_magician_interface__action__JointPTP_SendGoal_Response * output);

/// Initialize array of action/JointPTP messages.
/**
 * It allocates the memory for the number of elements and calls
 * dobot_magician_interface__action__JointPTP_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence__init(dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/JointPTP messages.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence__fini(dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence * array);

/// Create array of action/JointPTP messages.
/**
 * It allocates the memory for the array and calls
 * dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence *
dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/JointPTP messages.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence__destroy(dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence * array);

/// Check for action/JointPTP message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence__are_equal(const dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence * lhs, const dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/JointPTP messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence__copy(
  const dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence * input,
  dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence * output);

/// Initialize action/JointPTP message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dobot_magician_interface__action__JointPTP_GetResult_Request
 * )) before or use
 * dobot_magician_interface__action__JointPTP_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_GetResult_Request__init(dobot_magician_interface__action__JointPTP_GetResult_Request * msg);

/// Finalize action/JointPTP message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_GetResult_Request__fini(dobot_magician_interface__action__JointPTP_GetResult_Request * msg);

/// Create action/JointPTP message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dobot_magician_interface__action__JointPTP_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
dobot_magician_interface__action__JointPTP_GetResult_Request *
dobot_magician_interface__action__JointPTP_GetResult_Request__create();

/// Destroy action/JointPTP message.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_GetResult_Request__destroy(dobot_magician_interface__action__JointPTP_GetResult_Request * msg);

/// Check for action/JointPTP message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_GetResult_Request__are_equal(const dobot_magician_interface__action__JointPTP_GetResult_Request * lhs, const dobot_magician_interface__action__JointPTP_GetResult_Request * rhs);

/// Copy a action/JointPTP message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_GetResult_Request__copy(
  const dobot_magician_interface__action__JointPTP_GetResult_Request * input,
  dobot_magician_interface__action__JointPTP_GetResult_Request * output);

/// Initialize array of action/JointPTP messages.
/**
 * It allocates the memory for the number of elements and calls
 * dobot_magician_interface__action__JointPTP_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence__init(dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/JointPTP messages.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence__fini(dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence * array);

/// Create array of action/JointPTP messages.
/**
 * It allocates the memory for the array and calls
 * dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence *
dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/JointPTP messages.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence__destroy(dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence * array);

/// Check for action/JointPTP message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence__are_equal(const dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence * lhs, const dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence * rhs);

/// Copy an array of action/JointPTP messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence__copy(
  const dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence * input,
  dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence * output);

/// Initialize action/JointPTP message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dobot_magician_interface__action__JointPTP_GetResult_Response
 * )) before or use
 * dobot_magician_interface__action__JointPTP_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_GetResult_Response__init(dobot_magician_interface__action__JointPTP_GetResult_Response * msg);

/// Finalize action/JointPTP message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_GetResult_Response__fini(dobot_magician_interface__action__JointPTP_GetResult_Response * msg);

/// Create action/JointPTP message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dobot_magician_interface__action__JointPTP_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
dobot_magician_interface__action__JointPTP_GetResult_Response *
dobot_magician_interface__action__JointPTP_GetResult_Response__create();

/// Destroy action/JointPTP message.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_GetResult_Response__destroy(dobot_magician_interface__action__JointPTP_GetResult_Response * msg);

/// Check for action/JointPTP message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_GetResult_Response__are_equal(const dobot_magician_interface__action__JointPTP_GetResult_Response * lhs, const dobot_magician_interface__action__JointPTP_GetResult_Response * rhs);

/// Copy a action/JointPTP message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_GetResult_Response__copy(
  const dobot_magician_interface__action__JointPTP_GetResult_Response * input,
  dobot_magician_interface__action__JointPTP_GetResult_Response * output);

/// Initialize array of action/JointPTP messages.
/**
 * It allocates the memory for the number of elements and calls
 * dobot_magician_interface__action__JointPTP_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence__init(dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/JointPTP messages.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence__fini(dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence * array);

/// Create array of action/JointPTP messages.
/**
 * It allocates the memory for the array and calls
 * dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence *
dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/JointPTP messages.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence__destroy(dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence * array);

/// Check for action/JointPTP message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence__are_equal(const dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence * lhs, const dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence * rhs);

/// Copy an array of action/JointPTP messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence__copy(
  const dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence * input,
  dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence * output);

/// Initialize action/JointPTP message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * dobot_magician_interface__action__JointPTP_FeedbackMessage
 * )) before or use
 * dobot_magician_interface__action__JointPTP_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_FeedbackMessage__init(dobot_magician_interface__action__JointPTP_FeedbackMessage * msg);

/// Finalize action/JointPTP message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_FeedbackMessage__fini(dobot_magician_interface__action__JointPTP_FeedbackMessage * msg);

/// Create action/JointPTP message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * dobot_magician_interface__action__JointPTP_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
dobot_magician_interface__action__JointPTP_FeedbackMessage *
dobot_magician_interface__action__JointPTP_FeedbackMessage__create();

/// Destroy action/JointPTP message.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_FeedbackMessage__destroy(dobot_magician_interface__action__JointPTP_FeedbackMessage * msg);

/// Check for action/JointPTP message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_FeedbackMessage__are_equal(const dobot_magician_interface__action__JointPTP_FeedbackMessage * lhs, const dobot_magician_interface__action__JointPTP_FeedbackMessage * rhs);

/// Copy a action/JointPTP message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_FeedbackMessage__copy(
  const dobot_magician_interface__action__JointPTP_FeedbackMessage * input,
  dobot_magician_interface__action__JointPTP_FeedbackMessage * output);

/// Initialize array of action/JointPTP messages.
/**
 * It allocates the memory for the number of elements and calls
 * dobot_magician_interface__action__JointPTP_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence__init(dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/JointPTP messages.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence__fini(dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence * array);

/// Create array of action/JointPTP messages.
/**
 * It allocates the memory for the array and calls
 * dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence *
dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/JointPTP messages.
/**
 * It calls
 * dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
void
dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence__destroy(dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence * array);

/// Check for action/JointPTP message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence__are_equal(const dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence * lhs, const dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/JointPTP messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_dobot_magician_interface
bool
dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence__copy(
  const dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence * input,
  dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_MAGICIAN_INTERFACE__ACTION__DETAIL__JOINT_PTP__FUNCTIONS_H_