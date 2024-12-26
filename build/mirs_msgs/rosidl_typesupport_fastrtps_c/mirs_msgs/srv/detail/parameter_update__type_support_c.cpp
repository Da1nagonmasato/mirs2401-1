// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mirs_msgs:srv/ParameterUpdate.idl
// generated code does not contain a copyright notice
#include "mirs_msgs/srv/detail/parameter_update__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mirs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mirs_msgs/srv/detail/parameter_update__struct.h"
#include "mirs_msgs/srv/detail/parameter_update__functions.h"
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


using _ParameterUpdate_Request__ros_msg_type = mirs_msgs__srv__ParameterUpdate_Request;

static bool _ParameterUpdate_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ParameterUpdate_Request__ros_msg_type * ros_message = static_cast<const _ParameterUpdate_Request__ros_msg_type *>(untyped_ros_message);
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

static bool _ParameterUpdate_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ParameterUpdate_Request__ros_msg_type * ros_message = static_cast<_ParameterUpdate_Request__ros_msg_type *>(untyped_ros_message);
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
size_t get_serialized_size_mirs_msgs__srv__ParameterUpdate_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ParameterUpdate_Request__ros_msg_type * ros_message = static_cast<const _ParameterUpdate_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _ParameterUpdate_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mirs_msgs__srv__ParameterUpdate_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mirs_msgs
size_t max_serialized_size_mirs_msgs__srv__ParameterUpdate_Request(
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
    using DataType = mirs_msgs__srv__ParameterUpdate_Request;
    is_plain =
      (
      offsetof(DataType, lkd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ParameterUpdate_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mirs_msgs__srv__ParameterUpdate_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ParameterUpdate_Request = {
  "mirs_msgs::srv",
  "ParameterUpdate_Request",
  _ParameterUpdate_Request__cdr_serialize,
  _ParameterUpdate_Request__cdr_deserialize,
  _ParameterUpdate_Request__get_serialized_size,
  _ParameterUpdate_Request__max_serialized_size
};

static rosidl_message_type_support_t _ParameterUpdate_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ParameterUpdate_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mirs_msgs, srv, ParameterUpdate_Request)() {
  return &_ParameterUpdate_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mirs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mirs_msgs/srv/detail/parameter_update__struct.h"
// already included above
// #include "mirs_msgs/srv/detail/parameter_update__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _ParameterUpdate_Response__ros_msg_type = mirs_msgs__srv__ParameterUpdate_Response;

static bool _ParameterUpdate_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ParameterUpdate_Response__ros_msg_type * ros_message = static_cast<const _ParameterUpdate_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _ParameterUpdate_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ParameterUpdate_Response__ros_msg_type * ros_message = static_cast<_ParameterUpdate_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mirs_msgs
size_t get_serialized_size_mirs_msgs__srv__ParameterUpdate_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ParameterUpdate_Response__ros_msg_type * ros_message = static_cast<const _ParameterUpdate_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ParameterUpdate_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mirs_msgs__srv__ParameterUpdate_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mirs_msgs
size_t max_serialized_size_mirs_msgs__srv__ParameterUpdate_Response(
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

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mirs_msgs__srv__ParameterUpdate_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ParameterUpdate_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mirs_msgs__srv__ParameterUpdate_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ParameterUpdate_Response = {
  "mirs_msgs::srv",
  "ParameterUpdate_Response",
  _ParameterUpdate_Response__cdr_serialize,
  _ParameterUpdate_Response__cdr_deserialize,
  _ParameterUpdate_Response__get_serialized_size,
  _ParameterUpdate_Response__max_serialized_size
};

static rosidl_message_type_support_t _ParameterUpdate_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ParameterUpdate_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mirs_msgs, srv, ParameterUpdate_Response)() {
  return &_ParameterUpdate_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "mirs_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mirs_msgs/srv/parameter_update.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ParameterUpdate__callbacks = {
  "mirs_msgs::srv",
  "ParameterUpdate",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mirs_msgs, srv, ParameterUpdate_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mirs_msgs, srv, ParameterUpdate_Response)(),
};

static rosidl_service_type_support_t ParameterUpdate__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ParameterUpdate__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mirs_msgs, srv, ParameterUpdate)() {
  return &ParameterUpdate__handle;
}

#if defined(__cplusplus)
}
#endif
