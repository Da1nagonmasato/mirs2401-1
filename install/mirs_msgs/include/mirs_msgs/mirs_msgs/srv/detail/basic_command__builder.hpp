// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mirs_msgs:srv/BasicCommand.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__SRV__DETAIL__BASIC_COMMAND__BUILDER_HPP_
#define MIRS_MSGS__SRV__DETAIL__BASIC_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mirs_msgs/srv/detail/basic_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mirs_msgs
{

namespace srv
{

namespace builder
{

class Init_BasicCommand_Request_param4
{
public:
  explicit Init_BasicCommand_Request_param4(::mirs_msgs::srv::BasicCommand_Request & msg)
  : msg_(msg)
  {}
  ::mirs_msgs::srv::BasicCommand_Request param4(::mirs_msgs::srv::BasicCommand_Request::_param4_type arg)
  {
    msg_.param4 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mirs_msgs::srv::BasicCommand_Request msg_;
};

class Init_BasicCommand_Request_param3
{
public:
  explicit Init_BasicCommand_Request_param3(::mirs_msgs::srv::BasicCommand_Request & msg)
  : msg_(msg)
  {}
  Init_BasicCommand_Request_param4 param3(::mirs_msgs::srv::BasicCommand_Request::_param3_type arg)
  {
    msg_.param3 = std::move(arg);
    return Init_BasicCommand_Request_param4(msg_);
  }

private:
  ::mirs_msgs::srv::BasicCommand_Request msg_;
};

class Init_BasicCommand_Request_param2
{
public:
  explicit Init_BasicCommand_Request_param2(::mirs_msgs::srv::BasicCommand_Request & msg)
  : msg_(msg)
  {}
  Init_BasicCommand_Request_param3 param2(::mirs_msgs::srv::BasicCommand_Request::_param2_type arg)
  {
    msg_.param2 = std::move(arg);
    return Init_BasicCommand_Request_param3(msg_);
  }

private:
  ::mirs_msgs::srv::BasicCommand_Request msg_;
};

class Init_BasicCommand_Request_param1
{
public:
  Init_BasicCommand_Request_param1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BasicCommand_Request_param2 param1(::mirs_msgs::srv::BasicCommand_Request::_param1_type arg)
  {
    msg_.param1 = std::move(arg);
    return Init_BasicCommand_Request_param2(msg_);
  }

private:
  ::mirs_msgs::srv::BasicCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::srv::BasicCommand_Request>()
{
  return mirs_msgs::srv::builder::Init_BasicCommand_Request_param1();
}

}  // namespace mirs_msgs


namespace mirs_msgs
{

namespace srv
{

namespace builder
{

class Init_BasicCommand_Response_success
{
public:
  Init_BasicCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mirs_msgs::srv::BasicCommand_Response success(::mirs_msgs::srv::BasicCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mirs_msgs::srv::BasicCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::srv::BasicCommand_Response>()
{
  return mirs_msgs::srv::builder::Init_BasicCommand_Response_success();
}

}  // namespace mirs_msgs

#endif  // MIRS_MSGS__SRV__DETAIL__BASIC_COMMAND__BUILDER_HPP_
