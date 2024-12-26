// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mirs_msgs:srv/Params.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__SRV__DETAIL__PARAMS__TRAITS_HPP_
#define MIRS_MSGS__SRV__DETAIL__PARAMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mirs_msgs/srv/detail/params__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mirs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Params_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: a
  {
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Params_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a: ";
    rosidl_generator_traits::value_to_yaml(msg.a, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Params_Request & msg, bool use_flow_style = false)
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
  const mirs_msgs::srv::Params_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mirs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mirs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mirs_msgs::srv::Params_Request & msg)
{
  return mirs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mirs_msgs::srv::Params_Request>()
{
  return "mirs_msgs::srv::Params_Request";
}

template<>
inline const char * name<mirs_msgs::srv::Params_Request>()
{
  return "mirs_msgs/srv/Params_Request";
}

template<>
struct has_fixed_size<mirs_msgs::srv::Params_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mirs_msgs::srv::Params_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mirs_msgs::srv::Params_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mirs_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Params_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: sum
  {
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Params_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sum
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sum: ";
    rosidl_generator_traits::value_to_yaml(msg.sum, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Params_Response & msg, bool use_flow_style = false)
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
  const mirs_msgs::srv::Params_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mirs_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mirs_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const mirs_msgs::srv::Params_Response & msg)
{
  return mirs_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mirs_msgs::srv::Params_Response>()
{
  return "mirs_msgs::srv::Params_Response";
}

template<>
inline const char * name<mirs_msgs::srv::Params_Response>()
{
  return "mirs_msgs/srv/Params_Response";
}

template<>
struct has_fixed_size<mirs_msgs::srv::Params_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mirs_msgs::srv::Params_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mirs_msgs::srv::Params_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mirs_msgs::srv::Params>()
{
  return "mirs_msgs::srv::Params";
}

template<>
inline const char * name<mirs_msgs::srv::Params>()
{
  return "mirs_msgs/srv/Params";
}

template<>
struct has_fixed_size<mirs_msgs::srv::Params>
  : std::integral_constant<
    bool,
    has_fixed_size<mirs_msgs::srv::Params_Request>::value &&
    has_fixed_size<mirs_msgs::srv::Params_Response>::value
  >
{
};

template<>
struct has_bounded_size<mirs_msgs::srv::Params>
  : std::integral_constant<
    bool,
    has_bounded_size<mirs_msgs::srv::Params_Request>::value &&
    has_bounded_size<mirs_msgs::srv::Params_Response>::value
  >
{
};

template<>
struct is_service<mirs_msgs::srv::Params>
  : std::true_type
{
};

template<>
struct is_service_request<mirs_msgs::srv::Params_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mirs_msgs::srv::Params_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MIRS_MSGS__SRV__DETAIL__PARAMS__TRAITS_HPP_
