// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mirs_msgs:srv/SimpleCommand.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__SRV__DETAIL__SIMPLE_COMMAND__BUILDER_HPP_
#define MIRS_MSGS__SRV__DETAIL__SIMPLE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mirs_msgs/srv/detail/simple_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mirs_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::srv::SimpleCommand_Request>()
{
  return ::mirs_msgs::srv::SimpleCommand_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mirs_msgs


namespace mirs_msgs
{

namespace srv
{

namespace builder
{

class Init_SimpleCommand_Response_success
{
public:
  Init_SimpleCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mirs_msgs::srv::SimpleCommand_Response success(::mirs_msgs::srv::SimpleCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mirs_msgs::srv::SimpleCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::srv::SimpleCommand_Response>()
{
  return mirs_msgs::srv::builder::Init_SimpleCommand_Response_success();
}

}  // namespace mirs_msgs

#endif  // MIRS_MSGS__SRV__DETAIL__SIMPLE_COMMAND__BUILDER_HPP_
