// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from dobot_magician_interface:action/JointPTP.idl
// generated code does not contain a copyright notice
#include "dobot_magician_interface/action/detail/joint_ptp__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "dobot_magician_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dobot_magician_interface/action/detail/joint_ptp__struct.h"
#include "dobot_magician_interface/action/detail/joint_ptp__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // joint_goal
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // joint_goal

// forward declare type support functions


using _JointPTP_Goal__ros_msg_type = dobot_magician_interface__action__JointPTP_Goal;

static bool _JointPTP_Goal__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointPTP_Goal__ros_msg_type * ros_message = static_cast<const _JointPTP_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_goal
  {
    size_t size = ros_message->joint_goal.size;
    auto array_ptr = ros_message->joint_goal.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _JointPTP_Goal__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointPTP_Goal__ros_msg_type * ros_message = static_cast<_JointPTP_Goal__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_goal
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_goal.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->joint_goal);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->joint_goal, size)) {
      fprintf(stderr, "failed to create array for field 'joint_goal'");
      return false;
    }
    auto array_ptr = ros_message->joint_goal.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_magician_interface
size_t get_serialized_size_dobot_magician_interface__action__JointPTP_Goal(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointPTP_Goal__ros_msg_type * ros_message = static_cast<const _JointPTP_Goal__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint_goal
  {
    size_t array_size = ros_message->joint_goal.size;
    auto array_ptr = ros_message->joint_goal.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JointPTP_Goal__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_magician_interface__action__JointPTP_Goal(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_magician_interface
size_t max_serialized_size_dobot_magician_interface__action__JointPTP_Goal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: joint_goal
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dobot_magician_interface__action__JointPTP_Goal;
    is_plain =
      (
      offsetof(DataType, joint_goal) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _JointPTP_Goal__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dobot_magician_interface__action__JointPTP_Goal(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointPTP_Goal = {
  "dobot_magician_interface::action",
  "JointPTP_Goal",
  _JointPTP_Goal__cdr_serialize,
  _JointPTP_Goal__cdr_deserialize,
  _JointPTP_Goal__get_serialized_size,
  _JointPTP_Goal__max_serialized_size
};

static rosidl_message_type_support_t _JointPTP_Goal__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointPTP_Goal,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_Goal)() {
  return &_JointPTP_Goal__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__struct.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _JointPTP_Result__ros_msg_type = dobot_magician_interface__action__JointPTP_Result;

static bool _JointPTP_Result__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointPTP_Result__ros_msg_type * ros_message = static_cast<const _JointPTP_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: sucess
  {
    cdr << (ros_message->sucess ? true : false);
  }

  return true;
}

static bool _JointPTP_Result__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointPTP_Result__ros_msg_type * ros_message = static_cast<_JointPTP_Result__ros_msg_type *>(untyped_ros_message);
  // Field name: sucess
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sucess = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_magician_interface
size_t get_serialized_size_dobot_magician_interface__action__JointPTP_Result(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointPTP_Result__ros_msg_type * ros_message = static_cast<const _JointPTP_Result__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sucess
  {
    size_t item_size = sizeof(ros_message->sucess);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JointPTP_Result__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_magician_interface__action__JointPTP_Result(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_magician_interface
size_t max_serialized_size_dobot_magician_interface__action__JointPTP_Result(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: sucess
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dobot_magician_interface__action__JointPTP_Result;
    is_plain =
      (
      offsetof(DataType, sucess) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _JointPTP_Result__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dobot_magician_interface__action__JointPTP_Result(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointPTP_Result = {
  "dobot_magician_interface::action",
  "JointPTP_Result",
  _JointPTP_Result__cdr_serialize,
  _JointPTP_Result__cdr_deserialize,
  _JointPTP_Result__get_serialized_size,
  _JointPTP_Result__max_serialized_size
};

static rosidl_message_type_support_t _JointPTP_Result__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointPTP_Result,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_Result)() {
  return &_JointPTP_Result__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__struct.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"  // joint_state
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"  // joint_state

// forward declare type support functions


using _JointPTP_Feedback__ros_msg_type = dobot_magician_interface__action__JointPTP_Feedback;

static bool _JointPTP_Feedback__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointPTP_Feedback__ros_msg_type * ros_message = static_cast<const _JointPTP_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_state
  {
    size_t size = ros_message->joint_state.size;
    auto array_ptr = ros_message->joint_state.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _JointPTP_Feedback__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointPTP_Feedback__ros_msg_type * ros_message = static_cast<_JointPTP_Feedback__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_state
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->joint_state.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->joint_state);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->joint_state, size)) {
      fprintf(stderr, "failed to create array for field 'joint_state'");
      return false;
    }
    auto array_ptr = ros_message->joint_state.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_magician_interface
size_t get_serialized_size_dobot_magician_interface__action__JointPTP_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointPTP_Feedback__ros_msg_type * ros_message = static_cast<const _JointPTP_Feedback__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint_state
  {
    size_t array_size = ros_message->joint_state.size;
    auto array_ptr = ros_message->joint_state.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JointPTP_Feedback__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_magician_interface__action__JointPTP_Feedback(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_magician_interface
size_t max_serialized_size_dobot_magician_interface__action__JointPTP_Feedback(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: joint_state
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dobot_magician_interface__action__JointPTP_Feedback;
    is_plain =
      (
      offsetof(DataType, joint_state) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _JointPTP_Feedback__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dobot_magician_interface__action__JointPTP_Feedback(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointPTP_Feedback = {
  "dobot_magician_interface::action",
  "JointPTP_Feedback",
  _JointPTP_Feedback__cdr_serialize,
  _JointPTP_Feedback__cdr_deserialize,
  _JointPTP_Feedback__get_serialized_size,
  _JointPTP_Feedback__max_serialized_size
};

static rosidl_message_type_support_t _JointPTP_Feedback__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointPTP_Feedback,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_Feedback)() {
  return &_JointPTP_Feedback__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__struct.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__functions.h"  // goal
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_dobot_magician_interface__action__JointPTP_Goal(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dobot_magician_interface__action__JointPTP_Goal(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_Goal)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dobot_magician_interface
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dobot_magician_interface
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dobot_magician_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _JointPTP_SendGoal_Request__ros_msg_type = dobot_magician_interface__action__JointPTP_SendGoal_Request;

static bool _JointPTP_SendGoal_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointPTP_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _JointPTP_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_Goal
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _JointPTP_SendGoal_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointPTP_SendGoal_Request__ros_msg_type * ros_message = static_cast<_JointPTP_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: goal
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_Goal
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_magician_interface
size_t get_serialized_size_dobot_magician_interface__action__JointPTP_SendGoal_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointPTP_SendGoal_Request__ros_msg_type * ros_message = static_cast<const _JointPTP_SendGoal_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name goal

  current_alignment += get_serialized_size_dobot_magician_interface__action__JointPTP_Goal(
    &(ros_message->goal), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _JointPTP_SendGoal_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_magician_interface__action__JointPTP_SendGoal_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_magician_interface
size_t max_serialized_size_dobot_magician_interface__action__JointPTP_SendGoal_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: goal_id
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: goal
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dobot_magician_interface__action__JointPTP_Goal(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dobot_magician_interface__action__JointPTP_SendGoal_Request;
    is_plain =
      (
      offsetof(DataType, goal) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _JointPTP_SendGoal_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dobot_magician_interface__action__JointPTP_SendGoal_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointPTP_SendGoal_Request = {
  "dobot_magician_interface::action",
  "JointPTP_SendGoal_Request",
  _JointPTP_SendGoal_Request__cdr_serialize,
  _JointPTP_SendGoal_Request__cdr_deserialize,
  _JointPTP_SendGoal_Request__get_serialized_size,
  _JointPTP_SendGoal_Request__max_serialized_size
};

static rosidl_message_type_support_t _JointPTP_SendGoal_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointPTP_SendGoal_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_SendGoal_Request)() {
  return &_JointPTP_SendGoal_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__struct.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dobot_magician_interface
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dobot_magician_interface
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dobot_magician_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();


using _JointPTP_SendGoal_Response__ros_msg_type = dobot_magician_interface__action__JointPTP_SendGoal_Response;

static bool _JointPTP_SendGoal_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointPTP_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _JointPTP_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    cdr << (ros_message->accepted ? true : false);
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stamp, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _JointPTP_SendGoal_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointPTP_SendGoal_Response__ros_msg_type * ros_message = static_cast<_JointPTP_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: accepted
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->accepted = tmp ? true : false;
  }

  // Field name: stamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stamp))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_magician_interface
size_t get_serialized_size_dobot_magician_interface__action__JointPTP_SendGoal_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointPTP_SendGoal_Response__ros_msg_type * ros_message = static_cast<const _JointPTP_SendGoal_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name accepted
  {
    size_t item_size = sizeof(ros_message->accepted);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stamp

  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _JointPTP_SendGoal_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_magician_interface__action__JointPTP_SendGoal_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_magician_interface
size_t max_serialized_size_dobot_magician_interface__action__JointPTP_SendGoal_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: accepted
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dobot_magician_interface__action__JointPTP_SendGoal_Response;
    is_plain =
      (
      offsetof(DataType, stamp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _JointPTP_SendGoal_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dobot_magician_interface__action__JointPTP_SendGoal_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointPTP_SendGoal_Response = {
  "dobot_magician_interface::action",
  "JointPTP_SendGoal_Response",
  _JointPTP_SendGoal_Response__cdr_serialize,
  _JointPTP_SendGoal_Response__cdr_deserialize,
  _JointPTP_SendGoal_Response__get_serialized_size,
  _JointPTP_SendGoal_Response__max_serialized_size
};

static rosidl_message_type_support_t _JointPTP_SendGoal_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointPTP_SendGoal_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_SendGoal_Response)() {
  return &_JointPTP_SendGoal_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "dobot_magician_interface/action/joint_ptp.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t JointPTP_SendGoal__callbacks = {
  "dobot_magician_interface::action",
  "JointPTP_SendGoal",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_SendGoal_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_SendGoal_Response)(),
};

static rosidl_service_type_support_t JointPTP_SendGoal__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &JointPTP_SendGoal__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_SendGoal)() {
  return &JointPTP_SendGoal__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__struct.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dobot_magician_interface
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dobot_magician_interface
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dobot_magician_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _JointPTP_GetResult_Request__ros_msg_type = dobot_magician_interface__action__JointPTP_GetResult_Request;

static bool _JointPTP_GetResult_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointPTP_GetResult_Request__ros_msg_type * ros_message = static_cast<const _JointPTP_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _JointPTP_GetResult_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointPTP_GetResult_Request__ros_msg_type * ros_message = static_cast<_JointPTP_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_magician_interface
size_t get_serialized_size_dobot_magician_interface__action__JointPTP_GetResult_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointPTP_GetResult_Request__ros_msg_type * ros_message = static_cast<const _JointPTP_GetResult_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _JointPTP_GetResult_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_magician_interface__action__JointPTP_GetResult_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_magician_interface
size_t max_serialized_size_dobot_magician_interface__action__JointPTP_GetResult_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: goal_id
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dobot_magician_interface__action__JointPTP_GetResult_Request;
    is_plain =
      (
      offsetof(DataType, goal_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _JointPTP_GetResult_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dobot_magician_interface__action__JointPTP_GetResult_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointPTP_GetResult_Request = {
  "dobot_magician_interface::action",
  "JointPTP_GetResult_Request",
  _JointPTP_GetResult_Request__cdr_serialize,
  _JointPTP_GetResult_Request__cdr_deserialize,
  _JointPTP_GetResult_Request__get_serialized_size,
  _JointPTP_GetResult_Request__max_serialized_size
};

static rosidl_message_type_support_t _JointPTP_GetResult_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointPTP_GetResult_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_GetResult_Request)() {
  return &_JointPTP_GetResult_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__struct.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__functions.h"  // result

// forward declare type support functions
size_t get_serialized_size_dobot_magician_interface__action__JointPTP_Result(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dobot_magician_interface__action__JointPTP_Result(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_Result)();


using _JointPTP_GetResult_Response__ros_msg_type = dobot_magician_interface__action__JointPTP_GetResult_Response;

static bool _JointPTP_GetResult_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointPTP_GetResult_Response__ros_msg_type * ros_message = static_cast<const _JointPTP_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_Result
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->result, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _JointPTP_GetResult_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointPTP_GetResult_Response__ros_msg_type * ros_message = static_cast<_JointPTP_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: result
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_Result
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->result))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_magician_interface
size_t get_serialized_size_dobot_magician_interface__action__JointPTP_GetResult_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointPTP_GetResult_Response__ros_msg_type * ros_message = static_cast<const _JointPTP_GetResult_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name result

  current_alignment += get_serialized_size_dobot_magician_interface__action__JointPTP_Result(
    &(ros_message->result), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _JointPTP_GetResult_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_magician_interface__action__JointPTP_GetResult_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_magician_interface
size_t max_serialized_size_dobot_magician_interface__action__JointPTP_GetResult_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: result
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dobot_magician_interface__action__JointPTP_Result(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dobot_magician_interface__action__JointPTP_GetResult_Response;
    is_plain =
      (
      offsetof(DataType, result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _JointPTP_GetResult_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dobot_magician_interface__action__JointPTP_GetResult_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointPTP_GetResult_Response = {
  "dobot_magician_interface::action",
  "JointPTP_GetResult_Response",
  _JointPTP_GetResult_Response__cdr_serialize,
  _JointPTP_GetResult_Response__cdr_deserialize,
  _JointPTP_GetResult_Response__get_serialized_size,
  _JointPTP_GetResult_Response__max_serialized_size
};

static rosidl_message_type_support_t _JointPTP_GetResult_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointPTP_GetResult_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_GetResult_Response)() {
  return &_JointPTP_GetResult_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dobot_magician_interface/action/joint_ptp.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t JointPTP_GetResult__callbacks = {
  "dobot_magician_interface::action",
  "JointPTP_GetResult",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_GetResult_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_GetResult_Response)(),
};

static rosidl_service_type_support_t JointPTP_GetResult__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &JointPTP_GetResult__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_GetResult)() {
  return &JointPTP_GetResult__handle;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "dobot_magician_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__struct.h"
// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "dobot_magician_interface/action/detail/joint_ptp__functions.h"  // feedback
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"  // goal_id

// forward declare type support functions
size_t get_serialized_size_dobot_magician_interface__action__JointPTP_Feedback(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_dobot_magician_interface__action__JointPTP_Feedback(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_Feedback)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dobot_magician_interface
size_t get_serialized_size_unique_identifier_msgs__msg__UUID(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dobot_magician_interface
size_t max_serialized_size_unique_identifier_msgs__msg__UUID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_dobot_magician_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID)();


using _JointPTP_FeedbackMessage__ros_msg_type = dobot_magician_interface__action__JointPTP_FeedbackMessage;

static bool _JointPTP_FeedbackMessage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JointPTP_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _JointPTP_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->goal_id, cdr))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_Feedback
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->feedback, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _JointPTP_FeedbackMessage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JointPTP_FeedbackMessage__ros_msg_type * ros_message = static_cast<_JointPTP_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  // Field name: goal_id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unique_identifier_msgs, msg, UUID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->goal_id))
    {
      return false;
    }
  }

  // Field name: feedback
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_Feedback
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->feedback))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_magician_interface
size_t get_serialized_size_dobot_magician_interface__action__JointPTP_FeedbackMessage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JointPTP_FeedbackMessage__ros_msg_type * ros_message = static_cast<const _JointPTP_FeedbackMessage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name goal_id

  current_alignment += get_serialized_size_unique_identifier_msgs__msg__UUID(
    &(ros_message->goal_id), current_alignment);
  // field.name feedback

  current_alignment += get_serialized_size_dobot_magician_interface__action__JointPTP_Feedback(
    &(ros_message->feedback), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _JointPTP_FeedbackMessage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_dobot_magician_interface__action__JointPTP_FeedbackMessage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_dobot_magician_interface
size_t max_serialized_size_dobot_magician_interface__action__JointPTP_FeedbackMessage(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: goal_id
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_unique_identifier_msgs__msg__UUID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: feedback
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_dobot_magician_interface__action__JointPTP_Feedback(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = dobot_magician_interface__action__JointPTP_FeedbackMessage;
    is_plain =
      (
      offsetof(DataType, feedback) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _JointPTP_FeedbackMessage__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_dobot_magician_interface__action__JointPTP_FeedbackMessage(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JointPTP_FeedbackMessage = {
  "dobot_magician_interface::action",
  "JointPTP_FeedbackMessage",
  _JointPTP_FeedbackMessage__cdr_serialize,
  _JointPTP_FeedbackMessage__cdr_deserialize,
  _JointPTP_FeedbackMessage__get_serialized_size,
  _JointPTP_FeedbackMessage__max_serialized_size
};

static rosidl_message_type_support_t _JointPTP_FeedbackMessage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JointPTP_FeedbackMessage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, dobot_magician_interface, action, JointPTP_FeedbackMessage)() {
  return &_JointPTP_FeedbackMessage__type_support;
}

#if defined(__cplusplus)
}
#endif