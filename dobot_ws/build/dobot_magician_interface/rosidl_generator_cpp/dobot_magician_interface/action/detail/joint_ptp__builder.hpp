// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dobot_magician_interface:action/JointPTP.idl
// generated code does not contain a copyright notice

#ifndef DOBOT_MAGICIAN_INTERFACE__ACTION__DETAIL__JOINT_PTP__BUILDER_HPP_
#define DOBOT_MAGICIAN_INTERFACE__ACTION__DETAIL__JOINT_PTP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "dobot_magician_interface/action/detail/joint_ptp__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace dobot_magician_interface
{

namespace action
{

namespace builder
{

class Init_JointPTP_Goal_joint_goal
{
public:
  Init_JointPTP_Goal_joint_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_magician_interface::action::JointPTP_Goal joint_goal(::dobot_magician_interface::action::JointPTP_Goal::_joint_goal_type arg)
  {
    msg_.joint_goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_magician_interface::action::JointPTP_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_magician_interface::action::JointPTP_Goal>()
{
  return dobot_magician_interface::action::builder::Init_JointPTP_Goal_joint_goal();
}

}  // namespace dobot_magician_interface


namespace dobot_magician_interface
{

namespace action
{

namespace builder
{

class Init_JointPTP_Result_sucess
{
public:
  Init_JointPTP_Result_sucess()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_magician_interface::action::JointPTP_Result sucess(::dobot_magician_interface::action::JointPTP_Result::_sucess_type arg)
  {
    msg_.sucess = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_magician_interface::action::JointPTP_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_magician_interface::action::JointPTP_Result>()
{
  return dobot_magician_interface::action::builder::Init_JointPTP_Result_sucess();
}

}  // namespace dobot_magician_interface


namespace dobot_magician_interface
{

namespace action
{

namespace builder
{

class Init_JointPTP_Feedback_joint_state
{
public:
  Init_JointPTP_Feedback_joint_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_magician_interface::action::JointPTP_Feedback joint_state(::dobot_magician_interface::action::JointPTP_Feedback::_joint_state_type arg)
  {
    msg_.joint_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_magician_interface::action::JointPTP_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_magician_interface::action::JointPTP_Feedback>()
{
  return dobot_magician_interface::action::builder::Init_JointPTP_Feedback_joint_state();
}

}  // namespace dobot_magician_interface


namespace dobot_magician_interface
{

namespace action
{

namespace builder
{

class Init_JointPTP_SendGoal_Request_goal
{
public:
  explicit Init_JointPTP_SendGoal_Request_goal(::dobot_magician_interface::action::JointPTP_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::dobot_magician_interface::action::JointPTP_SendGoal_Request goal(::dobot_magician_interface::action::JointPTP_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_magician_interface::action::JointPTP_SendGoal_Request msg_;
};

class Init_JointPTP_SendGoal_Request_goal_id
{
public:
  Init_JointPTP_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointPTP_SendGoal_Request_goal goal_id(::dobot_magician_interface::action::JointPTP_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_JointPTP_SendGoal_Request_goal(msg_);
  }

private:
  ::dobot_magician_interface::action::JointPTP_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_magician_interface::action::JointPTP_SendGoal_Request>()
{
  return dobot_magician_interface::action::builder::Init_JointPTP_SendGoal_Request_goal_id();
}

}  // namespace dobot_magician_interface


namespace dobot_magician_interface
{

namespace action
{

namespace builder
{

class Init_JointPTP_SendGoal_Response_stamp
{
public:
  explicit Init_JointPTP_SendGoal_Response_stamp(::dobot_magician_interface::action::JointPTP_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::dobot_magician_interface::action::JointPTP_SendGoal_Response stamp(::dobot_magician_interface::action::JointPTP_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_magician_interface::action::JointPTP_SendGoal_Response msg_;
};

class Init_JointPTP_SendGoal_Response_accepted
{
public:
  Init_JointPTP_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointPTP_SendGoal_Response_stamp accepted(::dobot_magician_interface::action::JointPTP_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_JointPTP_SendGoal_Response_stamp(msg_);
  }

private:
  ::dobot_magician_interface::action::JointPTP_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_magician_interface::action::JointPTP_SendGoal_Response>()
{
  return dobot_magician_interface::action::builder::Init_JointPTP_SendGoal_Response_accepted();
}

}  // namespace dobot_magician_interface


namespace dobot_magician_interface
{

namespace action
{

namespace builder
{

class Init_JointPTP_GetResult_Request_goal_id
{
public:
  Init_JointPTP_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::dobot_magician_interface::action::JointPTP_GetResult_Request goal_id(::dobot_magician_interface::action::JointPTP_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_magician_interface::action::JointPTP_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_magician_interface::action::JointPTP_GetResult_Request>()
{
  return dobot_magician_interface::action::builder::Init_JointPTP_GetResult_Request_goal_id();
}

}  // namespace dobot_magician_interface


namespace dobot_magician_interface
{

namespace action
{

namespace builder
{

class Init_JointPTP_GetResult_Response_result
{
public:
  explicit Init_JointPTP_GetResult_Response_result(::dobot_magician_interface::action::JointPTP_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::dobot_magician_interface::action::JointPTP_GetResult_Response result(::dobot_magician_interface::action::JointPTP_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_magician_interface::action::JointPTP_GetResult_Response msg_;
};

class Init_JointPTP_GetResult_Response_status
{
public:
  Init_JointPTP_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointPTP_GetResult_Response_result status(::dobot_magician_interface::action::JointPTP_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_JointPTP_GetResult_Response_result(msg_);
  }

private:
  ::dobot_magician_interface::action::JointPTP_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_magician_interface::action::JointPTP_GetResult_Response>()
{
  return dobot_magician_interface::action::builder::Init_JointPTP_GetResult_Response_status();
}

}  // namespace dobot_magician_interface


namespace dobot_magician_interface
{

namespace action
{

namespace builder
{

class Init_JointPTP_FeedbackMessage_feedback
{
public:
  explicit Init_JointPTP_FeedbackMessage_feedback(::dobot_magician_interface::action::JointPTP_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::dobot_magician_interface::action::JointPTP_FeedbackMessage feedback(::dobot_magician_interface::action::JointPTP_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dobot_magician_interface::action::JointPTP_FeedbackMessage msg_;
};

class Init_JointPTP_FeedbackMessage_goal_id
{
public:
  Init_JointPTP_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointPTP_FeedbackMessage_feedback goal_id(::dobot_magician_interface::action::JointPTP_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_JointPTP_FeedbackMessage_feedback(msg_);
  }

private:
  ::dobot_magician_interface::action::JointPTP_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::dobot_magician_interface::action::JointPTP_FeedbackMessage>()
{
  return dobot_magician_interface::action::builder::Init_JointPTP_FeedbackMessage_goal_id();
}

}  // namespace dobot_magician_interface

#endif  // DOBOT_MAGICIAN_INTERFACE__ACTION__DETAIL__JOINT_PTP__BUILDER_HPP_
