// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mirs_msgs:srv/BasicCommand.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__SRV__DETAIL__BASIC_COMMAND__TRAITS_HPP_
#define MIRS_MSGS__SRV__DETAIL__BASIC_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mirs_msgs/srv/detail/basic_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mirs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const BasicCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: param1
  {
    out << "param1: ";
    rosidl_generator_traits::value_to_yaml(msg.param1, out);
    out << ", ";
  }

  // member: param2
  {
    out << "param2: ";
    rosidl_generator_traits::value_to_yaml(msg.param2, out);
    out << ", ";
  }

  // member: param3
  {
    out << "param3: ";
    rosidl_generator_traits::value_to_yaml(msg.param3, out);
    out << ", ";
  }

  // member: param4
  {
    out << "param4: ";
    rosidl_generator_traits::value_to_yaml(msg.param4, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BasicCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: param1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param1: ";
    rosidl_generator_traits::value_to_yaml(msg.param1, out);
    out << "\n";
  }

  // member: param2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param2: ";
    rosidl_generator_traits::value_to_yaml(msg.param2, out);
    out << "\n";
  }

  // member: param3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param3: ";
    rosidl_generator_traits::value_to_yaml(msg.param3, out);
    out << "\n";
  }

  // member: param4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "param4: ";
    rosidl_generator_traits::value_to_yaml(msg.param4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BasicCommand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mirs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mirs_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mirs_msgs::srv::BasicCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mirs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mirs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mirs_msgs::srv::BasicCommand_Request & msg)
{
  return mirs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mirs_msgs::srv::BasicCommand_Request>()
{
  return "mirs_msgs::srv::BasicCommand_Request";
}

template<>
inline const char * name<mirs_msgs::srv::BasicCommand_Request>()
{
  return "mirs_msgs/srv/BasicCommand_Request";
}

template<>
struct has_fixed_size<mirs_msgs::srv::BasicCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mirs_msgs::srv::BasicCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mirs_msgs::srv::BasicCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mirs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const BasicCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BasicCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BasicCommand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mirs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mirs_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mirs_msgs::srv::BasicCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mirs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mirs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mirs_msgs::srv::BasicCommand_Response & msg)
{
  return mirs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mirs_msgs::srv::BasicCommand_Response>()
{
  return "mirs_msgs::srv::BasicCommand_Response";
}

template<>
inline const char * name<mirs_msgs::srv::BasicCommand_Response>()
{
  return "mirs_msgs/srv/BasicCommand_Response";
}

template<>
struct has_fixed_size<mirs_msgs::srv::BasicCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mirs_msgs::srv::BasicCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mirs_msgs::srv::BasicCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mirs_msgs::srv::BasicCommand>()
{
  return "mirs_msgs::srv::BasicCommand";
}

template<>
inline const char * name<mirs_msgs::srv::BasicCommand>()
{
  return "mirs_msgs/srv/BasicCommand";
}

template<>
struct has_fixed_size<mirs_msgs::srv::BasicCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<mirs_msgs::srv::BasicCommand_Request>::value &&
    has_fixed_size<mirs_msgs::srv::BasicCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<mirs_msgs::srv::BasicCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<mirs_msgs::srv::BasicCommand_Request>::value &&
    has_bounded_size<mirs_msgs::srv::BasicCommand_Response>::value
  >
{
};

template<>
struct is_service<mirs_msgs::srv::BasicCommand>
  : std::true_type
{
};

template<>
struct is_service_request<mirs_msgs::srv::BasicCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mirs_msgs::srv::BasicCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MIRS_MSGS__SRV__DETAIL__BASIC_COMMAND__TRAITS_HPP_
