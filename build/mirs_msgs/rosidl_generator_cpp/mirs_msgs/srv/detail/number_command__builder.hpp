// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mirs_msgs:srv/NumberCommand.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__SRV__DETAIL__NUMBER_COMMAND__BUILDER_HPP_
#define MIRS_MSGS__SRV__DETAIL__NUMBER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mirs_msgs/srv/detail/number_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mirs_msgs
{

namespace srv
{

namespace builder
{

class Init_NumberCommand_Request_parameter
{
public:
  Init_NumberCommand_Request_parameter()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mirs_msgs::srv::NumberCommand_Request parameter(::mirs_msgs::srv::NumberCommand_Request::_parameter_type arg)
  {
    msg_.parameter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mirs_msgs::srv::NumberCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::srv::NumberCommand_Request>()
{
  return mirs_msgs::srv::builder::Init_NumberCommand_Request_parameter();
}

}  // namespace mirs_msgs


namespace mirs_msgs
{

namespace srv
{

namespace builder
{

class Init_NumberCommand_Response_success
{
public:
  Init_NumberCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mirs_msgs::srv::NumberCommand_Response success(::mirs_msgs::srv::NumberCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mirs_msgs::srv::NumberCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::srv::NumberCommand_Response>()
{
  return mirs_msgs::srv::builder::Init_NumberCommand_Response_success();
}

}  // namespace mirs_msgs

#endif  // MIRS_MSGS__SRV__DETAIL__NUMBER_COMMAND__BUILDER_HPP_
