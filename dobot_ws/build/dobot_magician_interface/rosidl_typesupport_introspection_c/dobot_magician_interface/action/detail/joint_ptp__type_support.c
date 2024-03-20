// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from dobot_magician_interface:action/JointPTP.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "dobot_magician_interface/action/detail/joint_ptp__rosidl_typesupport_introspection_c.h"
#include "dobot_magician_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "dobot_magician_interface/action/detail/joint_ptp__functions.h"
#include "dobot_magician_interface/action/detail/joint_ptp__struct.h"


// Include directives for member types
// Member `joint_goal`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__JointPTP_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot_magician_interface__action__JointPTP_Goal__init(message_memory);
}

void dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__JointPTP_Goal_fini_function(void * message_memory)
{
  dobot_magician_interface__action__JointPTP_Goal__fini(message_memory);
}

size_t dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__size_function__JointPTP_Goal__joint_goal(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__get_const_function__JointPTP_Goal__joint_goal(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__get_function__JointPTP_Goal__joint_goal(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__fetch_function__JointPTP_Goal__joint_goal(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__get_const_function__JointPTP_Goal__joint_goal(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__assign_function__JointPTP_Goal__joint_goal(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__get_function__JointPTP_Goal__joint_goal(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__resize_function__JointPTP_Goal__joint_goal(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__JointPTP_Goal_message_member_array[1] = {
  {
    "joint_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_magician_interface__action__JointPTP_Goal, joint_goal),  // bytes offset in struct
    NULL,  // default value
    dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__size_function__JointPTP_Goal__joint_goal,  // size() function pointer
    dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__get_const_function__JointPTP_Goal__joint_goal,  // get_const(index) function pointer
    dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__get_function__JointPTP_Goal__joint_goal,  // get(index) function pointer
    dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__fetch_function__JointPTP_Goal__joint_goal,  // fetch(index, &value) function pointer
    dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__assign_function__JointPTP_Goal__joint_goal,  // assign(index, value) function pointer
    dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__resize_function__JointPTP_Goal__joint_goal  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__JointPTP_Goal_message_members = {
  "dobot_magician_interface__action",  // message namespace
  "JointPTP_Goal",  // message name
  1,  // number of fields
  sizeof(dobot_magician_interface__action__JointPTP_Goal),
  dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__JointPTP_Goal_message_member_array,  // message members
  dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__JointPTP_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__JointPTP_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__JointPTP_Goal_message_type_support_handle = {
  0,
  &dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__JointPTP_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_magician_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_Goal)() {
  if (!dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__JointPTP_Goal_message_type_support_handle.typesupport_identifier) {
    dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__JointPTP_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dobot_magician_interface__action__JointPTP_Goal__rosidl_typesupport_introspection_c__JointPTP_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void dobot_magician_interface__action__JointPTP_Result__rosidl_typesupport_introspection_c__JointPTP_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot_magician_interface__action__JointPTP_Result__init(message_memory);
}

void dobot_magician_interface__action__JointPTP_Result__rosidl_typesupport_introspection_c__JointPTP_Result_fini_function(void * message_memory)
{
  dobot_magician_interface__action__JointPTP_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dobot_magician_interface__action__JointPTP_Result__rosidl_typesupport_introspection_c__JointPTP_Result_message_member_array[1] = {
  {
    "sucess",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_magician_interface__action__JointPTP_Result, sucess),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dobot_magician_interface__action__JointPTP_Result__rosidl_typesupport_introspection_c__JointPTP_Result_message_members = {
  "dobot_magician_interface__action",  // message namespace
  "JointPTP_Result",  // message name
  1,  // number of fields
  sizeof(dobot_magician_interface__action__JointPTP_Result),
  dobot_magician_interface__action__JointPTP_Result__rosidl_typesupport_introspection_c__JointPTP_Result_message_member_array,  // message members
  dobot_magician_interface__action__JointPTP_Result__rosidl_typesupport_introspection_c__JointPTP_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  dobot_magician_interface__action__JointPTP_Result__rosidl_typesupport_introspection_c__JointPTP_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dobot_magician_interface__action__JointPTP_Result__rosidl_typesupport_introspection_c__JointPTP_Result_message_type_support_handle = {
  0,
  &dobot_magician_interface__action__JointPTP_Result__rosidl_typesupport_introspection_c__JointPTP_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_magician_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_Result)() {
  if (!dobot_magician_interface__action__JointPTP_Result__rosidl_typesupport_introspection_c__JointPTP_Result_message_type_support_handle.typesupport_identifier) {
    dobot_magician_interface__action__JointPTP_Result__rosidl_typesupport_introspection_c__JointPTP_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dobot_magician_interface__action__JointPTP_Result__rosidl_typesupport_introspection_c__JointPTP_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__struct.h"


// Include directives for member types
// Member `joint_state`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__JointPTP_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot_magician_interface__action__JointPTP_Feedback__init(message_memory);
}

void dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__JointPTP_Feedback_fini_function(void * message_memory)
{
  dobot_magician_interface__action__JointPTP_Feedback__fini(message_memory);
}

size_t dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__size_function__JointPTP_Feedback__joint_state(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__get_const_function__JointPTP_Feedback__joint_state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__get_function__JointPTP_Feedback__joint_state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__fetch_function__JointPTP_Feedback__joint_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__get_const_function__JointPTP_Feedback__joint_state(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__assign_function__JointPTP_Feedback__joint_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__get_function__JointPTP_Feedback__joint_state(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__resize_function__JointPTP_Feedback__joint_state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__JointPTP_Feedback_message_member_array[1] = {
  {
    "joint_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_magician_interface__action__JointPTP_Feedback, joint_state),  // bytes offset in struct
    NULL,  // default value
    dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__size_function__JointPTP_Feedback__joint_state,  // size() function pointer
    dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__get_const_function__JointPTP_Feedback__joint_state,  // get_const(index) function pointer
    dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__get_function__JointPTP_Feedback__joint_state,  // get(index) function pointer
    dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__fetch_function__JointPTP_Feedback__joint_state,  // fetch(index, &value) function pointer
    dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__assign_function__JointPTP_Feedback__joint_state,  // assign(index, value) function pointer
    dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__resize_function__JointPTP_Feedback__joint_state  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__JointPTP_Feedback_message_members = {
  "dobot_magician_interface__action",  // message namespace
  "JointPTP_Feedback",  // message name
  1,  // number of fields
  sizeof(dobot_magician_interface__action__JointPTP_Feedback),
  dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__JointPTP_Feedback_message_member_array,  // message members
  dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__JointPTP_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__JointPTP_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__JointPTP_Feedback_message_type_support_handle = {
  0,
  &dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__JointPTP_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_magician_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_Feedback)() {
  if (!dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__JointPTP_Feedback_message_type_support_handle.typesupport_identifier) {
    dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__JointPTP_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dobot_magician_interface__action__JointPTP_Feedback__rosidl_typesupport_introspection_c__JointPTP_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "dobot_magician_interface/action/joint_ptp.h"
// Member `goal`
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dobot_magician_interface__action__JointPTP_SendGoal_Request__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot_magician_interface__action__JointPTP_SendGoal_Request__init(message_memory);
}

void dobot_magician_interface__action__JointPTP_SendGoal_Request__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Request_fini_function(void * message_memory)
{
  dobot_magician_interface__action__JointPTP_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dobot_magician_interface__action__JointPTP_SendGoal_Request__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_magician_interface__action__JointPTP_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_magician_interface__action__JointPTP_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dobot_magician_interface__action__JointPTP_SendGoal_Request__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Request_message_members = {
  "dobot_magician_interface__action",  // message namespace
  "JointPTP_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(dobot_magician_interface__action__JointPTP_SendGoal_Request),
  dobot_magician_interface__action__JointPTP_SendGoal_Request__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Request_message_member_array,  // message members
  dobot_magician_interface__action__JointPTP_SendGoal_Request__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  dobot_magician_interface__action__JointPTP_SendGoal_Request__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dobot_magician_interface__action__JointPTP_SendGoal_Request__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Request_message_type_support_handle = {
  0,
  &dobot_magician_interface__action__JointPTP_SendGoal_Request__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_magician_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_SendGoal_Request)() {
  dobot_magician_interface__action__JointPTP_SendGoal_Request__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  dobot_magician_interface__action__JointPTP_SendGoal_Request__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_Goal)();
  if (!dobot_magician_interface__action__JointPTP_SendGoal_Request__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    dobot_magician_interface__action__JointPTP_SendGoal_Request__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dobot_magician_interface__action__JointPTP_SendGoal_Request__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dobot_magician_interface__action__JointPTP_SendGoal_Response__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot_magician_interface__action__JointPTP_SendGoal_Response__init(message_memory);
}

void dobot_magician_interface__action__JointPTP_SendGoal_Response__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Response_fini_function(void * message_memory)
{
  dobot_magician_interface__action__JointPTP_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dobot_magician_interface__action__JointPTP_SendGoal_Response__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_magician_interface__action__JointPTP_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_magician_interface__action__JointPTP_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dobot_magician_interface__action__JointPTP_SendGoal_Response__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Response_message_members = {
  "dobot_magician_interface__action",  // message namespace
  "JointPTP_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(dobot_magician_interface__action__JointPTP_SendGoal_Response),
  dobot_magician_interface__action__JointPTP_SendGoal_Response__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Response_message_member_array,  // message members
  dobot_magician_interface__action__JointPTP_SendGoal_Response__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  dobot_magician_interface__action__JointPTP_SendGoal_Response__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dobot_magician_interface__action__JointPTP_SendGoal_Response__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Response_message_type_support_handle = {
  0,
  &dobot_magician_interface__action__JointPTP_SendGoal_Response__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_magician_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_SendGoal_Response)() {
  dobot_magician_interface__action__JointPTP_SendGoal_Response__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!dobot_magician_interface__action__JointPTP_SendGoal_Response__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    dobot_magician_interface__action__JointPTP_SendGoal_Response__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dobot_magician_interface__action__JointPTP_SendGoal_Response__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_SendGoal_service_members = {
  "dobot_magician_interface__action",  // service namespace
  "JointPTP_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_SendGoal_service_type_support_handle = {
  0,
  &dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_magician_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_SendGoal)() {
  if (!dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_SendGoal_service_type_support_handle.typesupport_identifier) {
    dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_SendGoal_Response)()->data;
  }

  return &dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dobot_magician_interface__action__JointPTP_GetResult_Request__rosidl_typesupport_introspection_c__JointPTP_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot_magician_interface__action__JointPTP_GetResult_Request__init(message_memory);
}

void dobot_magician_interface__action__JointPTP_GetResult_Request__rosidl_typesupport_introspection_c__JointPTP_GetResult_Request_fini_function(void * message_memory)
{
  dobot_magician_interface__action__JointPTP_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dobot_magician_interface__action__JointPTP_GetResult_Request__rosidl_typesupport_introspection_c__JointPTP_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_magician_interface__action__JointPTP_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dobot_magician_interface__action__JointPTP_GetResult_Request__rosidl_typesupport_introspection_c__JointPTP_GetResult_Request_message_members = {
  "dobot_magician_interface__action",  // message namespace
  "JointPTP_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(dobot_magician_interface__action__JointPTP_GetResult_Request),
  dobot_magician_interface__action__JointPTP_GetResult_Request__rosidl_typesupport_introspection_c__JointPTP_GetResult_Request_message_member_array,  // message members
  dobot_magician_interface__action__JointPTP_GetResult_Request__rosidl_typesupport_introspection_c__JointPTP_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  dobot_magician_interface__action__JointPTP_GetResult_Request__rosidl_typesupport_introspection_c__JointPTP_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dobot_magician_interface__action__JointPTP_GetResult_Request__rosidl_typesupport_introspection_c__JointPTP_GetResult_Request_message_type_support_handle = {
  0,
  &dobot_magician_interface__action__JointPTP_GetResult_Request__rosidl_typesupport_introspection_c__JointPTP_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_magician_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_GetResult_Request)() {
  dobot_magician_interface__action__JointPTP_GetResult_Request__rosidl_typesupport_introspection_c__JointPTP_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!dobot_magician_interface__action__JointPTP_GetResult_Request__rosidl_typesupport_introspection_c__JointPTP_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    dobot_magician_interface__action__JointPTP_GetResult_Request__rosidl_typesupport_introspection_c__JointPTP_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dobot_magician_interface__action__JointPTP_GetResult_Request__rosidl_typesupport_introspection_c__JointPTP_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "dobot_magician_interface/action/joint_ptp.h"
// Member `result`
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dobot_magician_interface__action__JointPTP_GetResult_Response__rosidl_typesupport_introspection_c__JointPTP_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot_magician_interface__action__JointPTP_GetResult_Response__init(message_memory);
}

void dobot_magician_interface__action__JointPTP_GetResult_Response__rosidl_typesupport_introspection_c__JointPTP_GetResult_Response_fini_function(void * message_memory)
{
  dobot_magician_interface__action__JointPTP_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dobot_magician_interface__action__JointPTP_GetResult_Response__rosidl_typesupport_introspection_c__JointPTP_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_magician_interface__action__JointPTP_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_magician_interface__action__JointPTP_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dobot_magician_interface__action__JointPTP_GetResult_Response__rosidl_typesupport_introspection_c__JointPTP_GetResult_Response_message_members = {
  "dobot_magician_interface__action",  // message namespace
  "JointPTP_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(dobot_magician_interface__action__JointPTP_GetResult_Response),
  dobot_magician_interface__action__JointPTP_GetResult_Response__rosidl_typesupport_introspection_c__JointPTP_GetResult_Response_message_member_array,  // message members
  dobot_magician_interface__action__JointPTP_GetResult_Response__rosidl_typesupport_introspection_c__JointPTP_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  dobot_magician_interface__action__JointPTP_GetResult_Response__rosidl_typesupport_introspection_c__JointPTP_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dobot_magician_interface__action__JointPTP_GetResult_Response__rosidl_typesupport_introspection_c__JointPTP_GetResult_Response_message_type_support_handle = {
  0,
  &dobot_magician_interface__action__JointPTP_GetResult_Response__rosidl_typesupport_introspection_c__JointPTP_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_magician_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_GetResult_Response)() {
  dobot_magician_interface__action__JointPTP_GetResult_Response__rosidl_typesupport_introspection_c__JointPTP_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_Result)();
  if (!dobot_magician_interface__action__JointPTP_GetResult_Response__rosidl_typesupport_introspection_c__JointPTP_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    dobot_magician_interface__action__JointPTP_GetResult_Response__rosidl_typesupport_introspection_c__JointPTP_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dobot_magician_interface__action__JointPTP_GetResult_Response__rosidl_typesupport_introspection_c__JointPTP_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_GetResult_service_members = {
  "dobot_magician_interface__action",  // service namespace
  "JointPTP_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_GetResult_service_type_support_handle = {
  0,
  &dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_magician_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_GetResult)() {
  if (!dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_GetResult_service_type_support_handle.typesupport_identifier) {
    dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_GetResult_Response)()->data;
  }

  return &dobot_magician_interface__action__detail__joint_ptp__rosidl_typesupport_introspection_c__JointPTP_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__rosidl_typesupport_introspection_c.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "dobot_magician_interface/action/joint_ptp.h"
// Member `feedback`
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void dobot_magician_interface__action__JointPTP_FeedbackMessage__rosidl_typesupport_introspection_c__JointPTP_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  dobot_magician_interface__action__JointPTP_FeedbackMessage__init(message_memory);
}

void dobot_magician_interface__action__JointPTP_FeedbackMessage__rosidl_typesupport_introspection_c__JointPTP_FeedbackMessage_fini_function(void * message_memory)
{
  dobot_magician_interface__action__JointPTP_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember dobot_magician_interface__action__JointPTP_FeedbackMessage__rosidl_typesupport_introspection_c__JointPTP_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_magician_interface__action__JointPTP_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(dobot_magician_interface__action__JointPTP_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers dobot_magician_interface__action__JointPTP_FeedbackMessage__rosidl_typesupport_introspection_c__JointPTP_FeedbackMessage_message_members = {
  "dobot_magician_interface__action",  // message namespace
  "JointPTP_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(dobot_magician_interface__action__JointPTP_FeedbackMessage),
  dobot_magician_interface__action__JointPTP_FeedbackMessage__rosidl_typesupport_introspection_c__JointPTP_FeedbackMessage_message_member_array,  // message members
  dobot_magician_interface__action__JointPTP_FeedbackMessage__rosidl_typesupport_introspection_c__JointPTP_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  dobot_magician_interface__action__JointPTP_FeedbackMessage__rosidl_typesupport_introspection_c__JointPTP_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t dobot_magician_interface__action__JointPTP_FeedbackMessage__rosidl_typesupport_introspection_c__JointPTP_FeedbackMessage_message_type_support_handle = {
  0,
  &dobot_magician_interface__action__JointPTP_FeedbackMessage__rosidl_typesupport_introspection_c__JointPTP_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_dobot_magician_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_FeedbackMessage)() {
  dobot_magician_interface__action__JointPTP_FeedbackMessage__rosidl_typesupport_introspection_c__JointPTP_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  dobot_magician_interface__action__JointPTP_FeedbackMessage__rosidl_typesupport_introspection_c__JointPTP_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, dobot_magician_interface, action, JointPTP_Feedback)();
  if (!dobot_magician_interface__action__JointPTP_FeedbackMessage__rosidl_typesupport_introspection_c__JointPTP_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    dobot_magician_interface__action__JointPTP_FeedbackMessage__rosidl_typesupport_introspection_c__JointPTP_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &dobot_magician_interface__action__JointPTP_FeedbackMessage__rosidl_typesupport_introspection_c__JointPTP_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
