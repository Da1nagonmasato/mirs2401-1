// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mirs_msgs:msg/BasicParam.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__MSG__DETAIL__BASIC_PARAM__BUILDER_HPP_
#define MIRS_MSGS__MSG__DETAIL__BASIC_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mirs_msgs/msg/detail/basic_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mirs_msgs
{

namespace msg
{

namespace builder
{

class Init_BasicParam_lkd
{
public:
  explicit Init_BasicParam_lkd(::mirs_msgs::msg::BasicParam & msg)
  : msg_(msg)
  {}
  ::mirs_msgs::msg::BasicParam lkd(::mirs_msgs::msg::BasicParam::_lkd_type arg)
  {
    msg_.lkd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mirs_msgs::msg::BasicParam msg_;
};

class Init_BasicParam_lki
{
public:
  explicit Init_BasicParam_lki(::mirs_msgs::msg::BasicParam & msg)
  : msg_(msg)
  {}
  Init_BasicParam_lkd lki(::mirs_msgs::msg::BasicParam::_lki_type arg)
  {
    msg_.lki = std::move(arg);
    return Init_BasicParam_lkd(msg_);
  }

private:
  ::mirs_msgs::msg::BasicParam msg_;
};

class Init_BasicParam_lkp
{
public:
  explicit Init_BasicParam_lkp(::mirs_msgs::msg::BasicParam & msg)
  : msg_(msg)
  {}
  Init_BasicParam_lki lkp(::mirs_msgs::msg::BasicParam::_lkp_type arg)
  {
    msg_.lkp = std::move(arg);
    return Init_BasicParam_lki(msg_);
  }

private:
  ::mirs_msgs::msg::BasicParam msg_;
};

class Init_BasicParam_rkd
{
public:
  explicit Init_BasicParam_rkd(::mirs_msgs::msg::BasicParam & msg)
  : msg_(msg)
  {}
  Init_BasicParam_lkp rkd(::mirs_msgs::msg::BasicParam::_rkd_type arg)
  {
    msg_.rkd = std::move(arg);
    return Init_BasicParam_lkp(msg_);
  }

private:
  ::mirs_msgs::msg::BasicParam msg_;
};

class Init_BasicParam_rki
{
public:
  explicit Init_BasicParam_rki(::mirs_msgs::msg::BasicParam & msg)
  : msg_(msg)
  {}
  Init_BasicParam_rkd rki(::mirs_msgs::msg::BasicParam::_rki_type arg)
  {
    msg_.rki = std::move(arg);
    return Init_BasicParam_rkd(msg_);
  }

private:
  ::mirs_msgs::msg::BasicParam msg_;
};

class Init_BasicParam_rkp
{
public:
  explicit Init_BasicParam_rkp(::mirs_msgs::msg::BasicParam & msg)
  : msg_(msg)
  {}
  Init_BasicParam_rki rkp(::mirs_msgs::msg::BasicParam::_rkp_type arg)
  {
    msg_.rkp = std::move(arg);
    return Init_BasicParam_rki(msg_);
  }

private:
  ::mirs_msgs::msg::BasicParam msg_;
};

class Init_BasicParam_wheel_base
{
public:
  explicit Init_BasicParam_wheel_base(::mirs_msgs::msg::BasicParam & msg)
  : msg_(msg)
  {}
  Init_BasicParam_rkp wheel_base(::mirs_msgs::msg::BasicParam::_wheel_base_type arg)
  {
    msg_.wheel_base = std::move(arg);
    return Init_BasicParam_rkp(msg_);
  }

private:
  ::mirs_msgs::msg::BasicParam msg_;
};

class Init_BasicParam_wheel_radius
{
public:
  Init_BasicParam_wheel_radius()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BasicParam_wheel_base wheel_radius(::mirs_msgs::msg::BasicParam::_wheel_radius_type arg)
  {
    msg_.wheel_radius = std::move(arg);
    return Init_BasicParam_wheel_base(msg_);
  }

private:
  ::mirs_msgs::msg::BasicParam msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mirs_msgs::msg::BasicParam>()
{
  return mirs_msgs::msg::builder::Init_BasicParam_wheel_radius();
}

}  // namespace mirs_msgs

#endif  // MIRS_MSGS__MSG__DETAIL__BASIC_PARAM__BUILDER_HPP_
