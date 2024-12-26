// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mirs_msgs:srv/ParameterUpdate.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__SRV__DETAIL__PARAMETER_UPDATE__BUILDER_HPP_
#define MIRS_MSGS__SRV__DETAIL__PARAMETER_UPDATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mirs_msgs/srv/detail/parameter_update__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mirs_msgs
{

namespace srv
{

namespace builder
{

class Init_ParameterUpdate_Request_lkd
{
public:
  explicit Init_ParameterUpdate_Request_lkd(::mirs_msgs::srv::ParameterUpdate_Request & msg)
  : msg_(msg)
  {}
  ::mirs_msgs::srv::ParameterUpdate_Request lkd(::mirs_msgs::srv::ParameterUpdate_Request::_lkd_type arg)
  {
    msg_.lkd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mirs_msgs::srv::ParameterUpdate_Request msg_;
};

class Init_ParameterUpdate_Request_lki
{
public:
  explicit Init_ParameterUpdate_Request_lki(::mirs_msgs::srv::ParameterUpdate_Request & msg)
  : msg_(msg)
  {}
  Init_ParameterUpdate_Request_lkd lki(::mirs_msgs::srv::ParameterUpdate_Request::_lki_type arg)
  {
    msg_.lki = std::move(arg);
    return Init_ParameterUpdate_Request_lkd(msg_);
  }

private:
  ::mirs_msgs::srv::ParameterUpdate_Request msg_;
};

class Init_ParameterUpdate_Request_lkp
{
public:
  explicit Init_ParameterUpdate_Request_lkp(::mirs_msgs::srv::ParameterUpdate_Request & msg)
  : msg_(msg)
  {}
  Init_ParameterUpdate_Request_lki lkp(::mirs_msgs::srv::ParameterUpdate_Request::_lkp_type arg)
  {
    msg_.lkp = std::move(arg);
    return Init_ParameterUpdate_Request_lki(msg_);
  }

private:
  ::mirs_msgs::srv::ParameterUpdate_Request msg_;
};

class Init_ParameterUpdate_Request_rkd
{
public:
  explicit Init_ParameterUpdate_Request_rkd(::mirs_msgs::srv::ParameterUpdate_Request & msg)
  : msg_(msg)
  {}
  Init_ParameterUpdate_Request_lkp rkd(::mirs_msgs::srv::ParameterUpdate_Request::_rkd_type arg)
  {
    msg_.rkd = std::move(arg);
    return Init_ParameterUpdate_Request_lkp(msg_);
  }

private:
  ::mirs_msgs::srv::ParameterUpdate_Request msg_;
};

class Init_ParameterUpdate_Request_rki
{
public:
  explicit Init_ParameterUpdate_Request_rki(::mirs_msgs::srv::ParameterUpdate_Request & msg)
  : msg_(msg)
  {}
  Init_ParameterUpdate_Request_rkd rki(::mirs_msgs::srv::ParameterUpdate_Request::_rki_type arg)
  {
    msg_.rki = std::move(arg);
    return Init_ParameterUpdate_Request_rkd(msg_);
  }

private:
  ::mirs_msgs::srv::ParameterUpdate_Request msg_;
};

class Init_ParameterUpdate_Request_rkp
{
public:
  explicit Init_ParameterUpdate_Request_rkp(::mirs_msgs::srv::ParameterUpdate_Request & msg)
  : msg_(msg)
  {}
  Init_ParameterUpdate_Request_rki rkp(::mirs_msgs::srv::ParameterUpdate_Request::_rkp_type arg)
  {
    msg_.rkp = std::move(arg);
    return Init_ParameterUpdate_Request_rki(msg_);
  }

private:
  ::mirs_msgs::srv::ParameterUpdate_Request msg_;
};

class Init_ParameterUpdate_Request_wheel_base
{
public:
  explicit Init_ParameterUpdate_Request_wheel_base(::mirs_msgs::srv::ParameterUpdate_Request & msg)
  : msg_(msg)
  {}
  Init_ParameterUpdate_Request_rkp wheel_base(::mirs_msgs::srv::ParameterUpdate_Request::_wheel_base_type arg)
  {
    msg_.wheel_base = std::move(arg);
    return Init_ParameterUpdate_Request_rkp(msg_);
  }

private:
  ::mirs_msgs::srv::ParameterUpdate_Request msg_;
};

class Init_ParameterUpdate_Request_wheel_radius
{
public:
  Init_ParameterUpdate_Request_wheel_radius()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParameterUpdate_Request_wheel_base wheel_radius(::mirs_msgs::srv::ParameterUpdate_Request::_wheel_radius_type arg)
  {
    msg_.wheel_radius = std::move(arg);
    return Init_ParameterUpdate_Request_wheel_base(msg_);
  }

private:
  ::mirs_msgs::srv::ParameterUpdate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::srv::ParameterUpdate_Request>()
{
  return mirs_msgs::srv::builder::Init_ParameterUpdate_Request_wheel_radius();
}

}  // namespace mirs_msgs


namespace mirs_msgs
{

namespace srv
{

namespace builder
{

class Init_ParameterUpdate_Response_success
{
public:
  Init_ParameterUpdate_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mirs_msgs::srv::ParameterUpdate_Response success(::mirs_msgs::srv::ParameterUpdate_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mirs_msgs::srv::ParameterUpdate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::srv::ParameterUpdate_Response>()
{
  return mirs_msgs::srv::builder::Init_ParameterUpdate_Response_success();
}

}  // namespace mirs_msgs

#endif  // MIRS_MSGS__SRV__DETAIL__PARAMETER_UPDATE__BUILDER_HPP_
