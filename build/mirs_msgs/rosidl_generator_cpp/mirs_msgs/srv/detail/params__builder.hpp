// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mirs_msgs:srv/Params.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__SRV__DETAIL__PARAMS__BUILDER_HPP_
#define MIRS_MSGS__SRV__DETAIL__PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mirs_msgs/srv/detail/params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mirs_msgs
{

namespace srv
{

namespace builder
{

class Init_Params_Request_b
{
public:
  explicit Init_Params_Request_b(::mirs_msgs::srv::Params_Request & msg)
  : msg_(msg)
  {}
  ::mirs_msgs::srv::Params_Request b(::mirs_msgs::srv::Params_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mirs_msgs::srv::Params_Request msg_;
};

class Init_Params_Request_a
{
public:
  Init_Params_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Params_Request_b a(::mirs_msgs::srv::Params_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Params_Request_b(msg_);
  }

private:
  ::mirs_msgs::srv::Params_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::srv::Params_Request>()
{
  return mirs_msgs::srv::builder::Init_Params_Request_a();
}

}  // namespace mirs_msgs


namespace mirs_msgs
{

namespace srv
{

namespace builder
{

class Init_Params_Response_sum
{
public:
  Init_Params_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mirs_msgs::srv::Params_Response sum(::mirs_msgs::srv::Params_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mirs_msgs::srv::Params_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::srv::Params_Response>()
{
  return mirs_msgs::srv::builder::Init_Params_Response_sum();
}

}  // namespace mirs_msgs

#endif  // MIRS_MSGS__SRV__DETAIL__PARAMS__BUILDER_HPP_
