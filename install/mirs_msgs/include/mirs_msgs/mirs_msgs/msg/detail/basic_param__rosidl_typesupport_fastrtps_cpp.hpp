// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from mirs_msgs:msg/BasicParam.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__MSG__DETAIL__BASIC_PARAM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MIRS_MSGS__MSG__DETAIL__BASIC_PARAM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "mirs_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "mirs_msgs/msg/detail/basic_param__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace mirs_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mirs_msgs
cdr_serialize(
  const mirs_msgs::msg::BasicParam & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mirs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mirs_msgs::msg::BasicParam & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mirs_msgs
get_serialized_size(
  const mirs_msgs::msg::BasicParam & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mirs_msgs
max_serialized_size_BasicParam(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mirs_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mirs_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mirs_msgs, msg, BasicParam)();

#ifdef __cplusplus
}
#endif

#endif  // MIRS_MSGS__MSG__DETAIL__BASIC_PARAM__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
