// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from dobot_magician_interface:action/JointPTP.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MAGICIAN_INTERFACE__ACTION__DETAIL__JOINT_PTP__STRUCT_H_
#define DOBOT_MAGICIAN_INTERFACE__ACTION__DETAIL__JOINT_PTP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_goal'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/JointPTP in the package dobot_magician_interface.
typedef struct dobot_magician_interface__action__JointPTP_Goal
{
  rosidl_runtime_c__float__Sequence joint_goal;
} dobot_magician_interface__action__JointPTP_Goal;

// Struct for a sequence of dobot_magician_interface__action__JointPTP_Goal.
typedef struct dobot_magician_interface__action__JointPTP_Goal__Sequence
{
  dobot_magician_interface__action__JointPTP_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_magician_interface__action__JointPTP_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/JointPTP in the package dobot_magician_interface.
typedef struct dobot_magician_interface__action__JointPTP_Result
{
  bool sucess;
} dobot_magician_interface__action__JointPTP_Result;

// Struct for a sequence of dobot_magician_interface__action__JointPTP_Result.
typedef struct dobot_magician_interface__action__JointPTP_Result__Sequence
{
  dobot_magician_interface__action__JointPTP_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_magician_interface__action__JointPTP_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'joint_state'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/JointPTP in the package dobot_magician_interface.
typedef struct dobot_magician_interface__action__JointPTP_Feedback
{
  rosidl_runtime_c__float__Sequence joint_state;
} dobot_magician_interface__action__JointPTP_Feedback;

// Struct for a sequence of dobot_magician_interface__action__JointPTP_Feedback.
typedef struct dobot_magician_interface__action__JointPTP_Feedback__Sequence
{
  dobot_magician_interface__action__JointPTP_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_magician_interface__action__JointPTP_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "dobot_magician_interface/action/detail/joint_ptp__struct.h"

/// Struct defined in action/JointPTP in the package dobot_magician_interface.
typedef struct dobot_magician_interface__action__JointPTP_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  dobot_magician_interface__action__JointPTP_Goal goal;
} dobot_magician_interface__action__JointPTP_SendGoal_Request;

// Struct for a sequence of dobot_magician_interface__action__JointPTP_SendGoal_Request.
typedef struct dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence
{
  dobot_magician_interface__action__JointPTP_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_magician_interface__action__JointPTP_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/JointPTP in the package dobot_magician_interface.
typedef struct dobot_magician_interface__action__JointPTP_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} dobot_magician_interface__action__JointPTP_SendGoal_Response;

// Struct for a sequence of dobot_magician_interface__action__JointPTP_SendGoal_Response.
typedef struct dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence
{
  dobot_magician_interface__action__JointPTP_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_magician_interface__action__JointPTP_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/JointPTP in the package dobot_magician_interface.
typedef struct dobot_magician_interface__action__JointPTP_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} dobot_magician_interface__action__JointPTP_GetResult_Request;

// Struct for a sequence of dobot_magician_interface__action__JointPTP_GetResult_Request.
typedef struct dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence
{
  dobot_magician_interface__action__JointPTP_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_magician_interface__action__JointPTP_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__struct.h"

/// Struct defined in action/JointPTP in the package dobot_magician_interface.
typedef struct dobot_magician_interface__action__JointPTP_GetResult_Response
{
  int8_t status;
  dobot_magician_interface__action__JointPTP_Result result;
} dobot_magician_interface__action__JointPTP_GetResult_Response;

// Struct for a sequence of dobot_magician_interface__action__JointPTP_GetResult_Response.
typedef struct dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence
{
  dobot_magician_interface__action__JointPTP_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_magician_interface__action__JointPTP_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__struct.h"

/// Struct defined in action/JointPTP in the package dobot_magician_interface.
typedef struct dobot_magician_interface__action__JointPTP_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  dobot_magician_interface__action__JointPTP_Feedback feedback;
} dobot_magician_interface__action__JointPTP_FeedbackMessage;

// Struct for a sequence of dobot_magician_interface__action__JointPTP_FeedbackMessage.
typedef struct dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence
{
  dobot_magician_interface__action__JointPTP_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} dobot_magician_interface__action__JointPTP_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DOBOT_MAGICIAN_INTERFACE__ACTION__DETAIL__JOINT_PTP__STRUCT_H_
