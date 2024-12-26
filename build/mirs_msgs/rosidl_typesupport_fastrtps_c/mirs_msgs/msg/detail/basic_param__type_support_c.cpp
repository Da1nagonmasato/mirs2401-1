// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mirs_msgs:msg/BasicParam.idl
// generated code does not contain a copyright notice
#include "mirs_msgs/msg/detail/basic_param__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mirs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mirs_msgs/msg/detail/basic_param__struct.h"
#include "mirs_msgs/msg/detail/basic_param__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _BasicParam__ros_msg_type = mirs_msgs__msg__BasicParam;

static bool _BasicParam__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BasicParam__ros_msg_type * ros_message = static_cast<const _BasicParam__ros_msg_type *>(untyped_ros_message);
  // Field name: wheel_radius
  {
    cdr << ros_message->wheel_radius;
  }

  // Field name: wheel_base
  {
    cdr << ros_message->wheel_base;
  }

  // Field name: rkp
  {
    cdr << ros_message->rkp;
  }

  // Field name: rki
  {
    cdr << ros_message->rki;
  }

  // Field name: rkd
  {
    cdr << ros_message->rkd;
  }

  // Field name: lkp
  {
    cdr << ros_message->lkp;
  }

  // Field name: lki
  {
    cdr << ros_message->lki;
  }

  // Field name: lkd
  {
    cdr << ros_message->lkd;
  }

  return true;
}

static bool _BasicParam__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BasicParam__ros_msg_type * ros_message = static_cast<_BasicParam__ros_msg_type *>(untyped_ros_message);
  // Field name: wheel_radius
  {
    cdr >> ros_message->wheel_radius;
  }

  // Field name: wheel_base
  {
    cdr >> ros_message->wheel_base;
  }

  // Field name: rkp
  {
    cdr >> ros_message->rkp;
  }

  // Field name: rki
  {
    cdr >> ros_message->rki;
  }

  // Field name: rkd
  {
    cdr >> ros_message->rkd;
  }

  // Field name: lkp
  {
    cdr >> ros_message->lkp;
  }

  // Field name: lki
  {
    cdr >> ros_message->lki;
  }

  // Field name: lkd
  {
    cdr >> ros_message->lkd;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mirs_msgs
size_t get_serialized_size_mirs_msgs__msg__BasicParam(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BasicParam__ros_msg_type * ros_message = static_cast<const _BasicParam__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name wheel_radius
  {
    size_t item_size = sizeof(ros_message->wheel_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_base
  {
    size_t item_size = sizeof(ros_message->wheel_base);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rkp
  {
    size_t item_size = sizeof(ros_message->rkp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rki
  {
    size_t item_size = sizeof(ros_message->rki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rkd
  {
    size_t item_size = sizeof(ros_message->rkd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lkp
  {
    size_t item_size = sizeof(ros_message->lkp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lki
  {
    size_t item_size = sizeof(ros_message->lki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lkd
  {
    size_t item_size = sizeof(ros_message->lkd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BasicParam__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mirs_msgs__msg__BasicParam(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mirs_msgs
size_t max_serialized_size_mirs_msgs__msg__BasicParam(
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

  // member: wheel_radius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: wheel_base
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rkp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rki
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rkd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lkp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lki
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lkd
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
    using DataType = mirs_msgs__msg__BasicParam;
    is_plain =
      (
      offsetof(DataType, lkd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BasicParam__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mirs_msgs__msg__BasicParam(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BasicParam = {
  "mirs_msgs::msg",
  "BasicParam",
  _BasicParam__cdr_serialize,
  _BasicParam__cdr_deserialize,
  _BasicParam__get_serialized_size,
  _BasicParam__max_serialized_size
};

static rosidl_message_type_support_t _BasicParam__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BasicParam,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mirs_msgs, msg, BasicParam)() {
  return &_BasicParam__type_support;
}

#if defined(__cplusplus)
}
#endif
