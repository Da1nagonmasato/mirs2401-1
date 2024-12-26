// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mirs_msgs:msg/BasicParam.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__MSG__DETAIL__BASIC_PARAM__TRAITS_HPP_
#define MIRS_MSGS__MSG__DETAIL__BASIC_PARAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mirs_msgs/msg/detail/basic_param__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mirs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BasicParam & msg,
  std::ostream & out)
{
  out << "{";
  // member: wheel_radius
  {
    out << "wheel_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_radius, out);
    out << ", ";
  }

  // member: wheel_base
  {
    out << "wheel_base: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_base, out);
    out << ", ";
  }

  // member: rkp
  {
    out << "rkp: ";
    rosidl_generator_traits::value_to_yaml(msg.rkp, out);
    out << ", ";
  }

  // member: rki
  {
    out << "rki: ";
    rosidl_generator_traits::value_to_yaml(msg.rki, out);
    out << ", ";
  }

  // member: rkd
  {
    out << "rkd: ";
    rosidl_generator_traits::value_to_yaml(msg.rkd, out);
    out << ", ";
  }

  // member: lkp
  {
    out << "lkp: ";
    rosidl_generator_traits::value_to_yaml(msg.lkp, out);
    out << ", ";
  }

  // member: lki
  {
    out << "lki: ";
    rosidl_generator_traits::value_to_yaml(msg.lki, out);
    out << ", ";
  }

  // member: lkd
  {
    out << "lkd: ";
    rosidl_generator_traits::value_to_yaml(msg.lkd, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BasicParam & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: wheel_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_radius, out);
    out << "\n";
  }

  // member: wheel_base
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_base: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_base, out);
    out << "\n";
  }

  // member: rkp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rkp: ";
    rosidl_generator_traits::value_to_yaml(msg.rkp, out);
    out << "\n";
  }

  // member: rki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rki: ";
    rosidl_generator_traits::value_to_yaml(msg.rki, out);
    out << "\n";
  }

  // member: rkd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rkd: ";
    rosidl_generator_traits::value_to_yaml(msg.rkd, out);
    out << "\n";
  }

  // member: lkp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lkp: ";
    rosidl_generator_traits::value_to_yaml(msg.lkp, out);
    out << "\n";
  }

  // member: lki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lki: ";
    rosidl_generator_traits::value_to_yaml(msg.lki, out);
    out << "\n";
  }

  // member: lkd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lkd: ";
    rosidl_generator_traits::value_to_yaml(msg.lkd, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BasicParam & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mirs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mirs_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mirs_msgs::msg::BasicParam & msg,
  std::ostream & out, size_t indentation = 0)
{
  mirs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mirs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mirs_msgs::msg::BasicParam & msg)
{
  return mirs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mirs_msgs::msg::BasicParam>()
{
  return "mirs_msgs::msg::BasicParam";
}

template<>
inline const char * name<mirs_msgs::msg::BasicParam>()
{
  return "mirs_msgs/msg/BasicParam";
}

template<>
struct has_fixed_size<mirs_msgs::msg::BasicParam>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mirs_msgs::msg::BasicParam>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mirs_msgs::msg::BasicParam>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIRS_MSGS__MSG__DETAIL__BASIC_PARAM__TRAITS_HPP_
