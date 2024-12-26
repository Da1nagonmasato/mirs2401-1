// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mirs_msgs:msg/BasicParam.idl
// generated code does not contain a copyright notice
#include "mirs_msgs/msg/detail/basic_param__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mirs_msgs/msg/detail/basic_param__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: wheel_radius
  cdr << ros_message.wheel_radius;
  // Member: wheel_base
  cdr << ros_message.wheel_base;
  // Member: rkp
  cdr << ros_message.rkp;
  // Member: rki
  cdr << ros_message.rki;
  // Member: rkd
  cdr << ros_message.rkd;
  // Member: lkp
  cdr << ros_message.lkp;
  // Member: lki
  cdr << ros_message.lki;
  // Member: lkd
  cdr << ros_message.lkd;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mirs_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mirs_msgs::msg::BasicParam & ros_message)
{
  // Member: wheel_radius
  cdr >> ros_message.wheel_radius;

  // Member: wheel_base
  cdr >> ros_message.wheel_base;

  // Member: rkp
  cdr >> ros_message.rkp;

  // Member: rki
  cdr >> ros_message.rki;

  // Member: rkd
  cdr >> ros_message.rkd;

  // Member: lkp
  cdr >> ros_message.lkp;

  // Member: lki
  cdr >> ros_message.lki;

  // Member: lkd
  cdr >> ros_message.lkd;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mirs_msgs
get_serialized_size(
  const mirs_msgs::msg::BasicParam & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: wheel_radius
  {
    size_t item_size = sizeof(ros_message.wheel_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_base
  {
    size_t item_size = sizeof(ros_message.wheel_base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rkp
  {
    size_t item_size = sizeof(ros_message.rkp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rki
  {
    size_t item_size = sizeof(ros_message.rki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rkd
  {
    size_t item_size = sizeof(ros_message.rkd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lkp
  {
    size_t item_size = sizeof(ros_message.lkp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lki
  {
    size_t item_size = sizeof(ros_message.lki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lkd
  {
    size_t item_size = sizeof(ros_message.lkd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mirs_msgs
max_serialized_size_BasicParam(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: wheel_radius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: wheel_base
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rkp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rki
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rkd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lkp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lki
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lkd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mirs_msgs::msg::BasicParam;
    is_plain =
      (
      offsetof(DataType, lkd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _BasicParam__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mirs_msgs::msg::BasicParam *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BasicParam__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mirs_msgs::msg::BasicParam *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BasicParam__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mirs_msgs::msg::BasicParam *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BasicParam__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BasicParam(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BasicParam__callbacks = {
  "mirs_msgs::msg",
  "BasicParam",
  _BasicParam__cdr_serialize,
  _BasicParam__cdr_deserialize,
  _BasicParam__get_serialized_size,
  _BasicParam__max_serialized_size
};

static rosidl_message_type_support_t _BasicParam__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BasicParam__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mirs_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mirs_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mirs_msgs::msg::BasicParam>()
{
  return &mirs_msgs::msg::typesupport_fastrtps_cpp::_BasicParam__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mirs_msgs, msg, BasicParam)() {
  return &mirs_msgs::msg::typesupport_fastrtps_cpp::_BasicParam__handle;
}

#ifdef __cplusplus
}
#endif
