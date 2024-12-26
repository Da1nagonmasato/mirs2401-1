// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mirs_msgs:srv/NumberCommand.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__SRV__DETAIL__NUMBER_COMMAND__STRUCT_HPP_
#define MIRS_MSGS__SRV__DETAIL__NUMBER_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mirs_msgs__srv__NumberCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__mirs_msgs__srv__NumberCommand_Request __declspec(deprecated)
#endif

namespace mirs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NumberCommand_Request_
{
  using Type = NumberCommand_Request_<ContainerAllocator>;

  explicit NumberCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parameter = 0.0;
    }
  }

  explicit NumberCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->parameter = 0.0;
    }
  }

  // field types and members
  using _parameter_type =
    double;
  _parameter_type parameter;

  // setters for named parameter idiom
  Type & set__parameter(
    const double & _arg)
  {
    this->parameter = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mirs_msgs::srv::NumberCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mirs_msgs::srv::NumberCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mirs_msgs::srv::NumberCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mirs_msgs::srv::NumberCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::srv::NumberCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::srv::NumberCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::srv::NumberCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::srv::NumberCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mirs_msgs::srv::NumberCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mirs_msgs::srv::NumberCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mirs_msgs__srv__NumberCommand_Request
    std::shared_ptr<mirs_msgs::srv::NumberCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mirs_msgs__srv__NumberCommand_Request
    std::shared_ptr<mirs_msgs::srv::NumberCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NumberCommand_Request_ & other) const
  {
    if (this->parameter != other.parameter) {
      return false;
    }
    return true;
  }
  bool operator!=(const NumberCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NumberCommand_Request_

// alias to use template instance with default allocator
using NumberCommand_Request =
  mirs_msgs::srv::NumberCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mirs_msgs


#ifndef _WIN32
# define DEPRECATED__mirs_msgs__srv__NumberCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__mirs_msgs__srv__NumberCommand_Response __declspec(deprecated)
#endif

namespace mirs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NumberCommand_Response_
{
  using Type = NumberCommand_Response_<ContainerAllocator>;

  explicit NumberCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit NumberCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mirs_msgs::srv::NumberCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mirs_msgs::srv::NumberCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mirs_msgs::srv::NumberCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mirs_msgs::srv::NumberCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::srv::NumberCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::srv::NumberCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::srv::NumberCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::srv::NumberCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mirs_msgs::srv::NumberCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mirs_msgs::srv::NumberCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mirs_msgs__srv__NumberCommand_Response
    std::shared_ptr<mirs_msgs::srv::NumberCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mirs_msgs__srv__NumberCommand_Response
    std::shared_ptr<mirs_msgs::srv::NumberCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NumberCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const NumberCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NumberCommand_Response_

// alias to use template instance with default allocator
using NumberCommand_Response =
  mirs_msgs::srv::NumberCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mirs_msgs

namespace mirs_msgs
{

namespace srv
{

struct NumberCommand
{
  using Request = mirs_msgs::srv::NumberCommand_Request;
  using Response = mirs_msgs::srv::NumberCommand_Response;
};

}  // namespace srv

}  // namespace mirs_msgs

#endif  // MIRS_MSGS__SRV__DETAIL__NUMBER_COMMAND__STRUCT_HPP_
