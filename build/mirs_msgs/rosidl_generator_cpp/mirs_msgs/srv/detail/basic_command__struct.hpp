// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mirs_msgs:srv/BasicCommand.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__SRV__DETAIL__BASIC_COMMAND__STRUCT_HPP_
#define MIRS_MSGS__SRV__DETAIL__BASIC_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mirs_msgs__srv__BasicCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__mirs_msgs__srv__BasicCommand_Request __declspec(deprecated)
#endif

namespace mirs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BasicCommand_Request_
{
  using Type = BasicCommand_Request_<ContainerAllocator>;

  explicit BasicCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->param1 = 0.0;
      this->param2 = 0.0;
      this->param3 = 0.0;
      this->param4 = 0.0;
    }
  }

  explicit BasicCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->param1 = 0.0;
      this->param2 = 0.0;
      this->param3 = 0.0;
      this->param4 = 0.0;
    }
  }

  // field types and members
  using _param1_type =
    double;
  _param1_type param1;
  using _param2_type =
    double;
  _param2_type param2;
  using _param3_type =
    double;
  _param3_type param3;
  using _param4_type =
    double;
  _param4_type param4;

  // setters for named parameter idiom
  Type & set__param1(
    const double & _arg)
  {
    this->param1 = _arg;
    return *this;
  }
  Type & set__param2(
    const double & _arg)
  {
    this->param2 = _arg;
    return *this;
  }
  Type & set__param3(
    const double & _arg)
  {
    this->param3 = _arg;
    return *this;
  }
  Type & set__param4(
    const double & _arg)
  {
    this->param4 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mirs_msgs::srv::BasicCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mirs_msgs::srv::BasicCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mirs_msgs::srv::BasicCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mirs_msgs::srv::BasicCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::srv::BasicCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::srv::BasicCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::srv::BasicCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::srv::BasicCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mirs_msgs::srv::BasicCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mirs_msgs::srv::BasicCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mirs_msgs__srv__BasicCommand_Request
    std::shared_ptr<mirs_msgs::srv::BasicCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mirs_msgs__srv__BasicCommand_Request
    std::shared_ptr<mirs_msgs::srv::BasicCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BasicCommand_Request_ & other) const
  {
    if (this->param1 != other.param1) {
      return false;
    }
    if (this->param2 != other.param2) {
      return false;
    }
    if (this->param3 != other.param3) {
      return false;
    }
    if (this->param4 != other.param4) {
      return false;
    }
    return true;
  }
  bool operator!=(const BasicCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BasicCommand_Request_

// alias to use template instance with default allocator
using BasicCommand_Request =
  mirs_msgs::srv::BasicCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mirs_msgs


#ifndef _WIN32
# define DEPRECATED__mirs_msgs__srv__BasicCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__mirs_msgs__srv__BasicCommand_Response __declspec(deprecated)
#endif

namespace mirs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BasicCommand_Response_
{
  using Type = BasicCommand_Response_<ContainerAllocator>;

  explicit BasicCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit BasicCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    mirs_msgs::srv::BasicCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mirs_msgs::srv::BasicCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mirs_msgs::srv::BasicCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mirs_msgs::srv::BasicCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::srv::BasicCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::srv::BasicCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::srv::BasicCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::srv::BasicCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mirs_msgs::srv::BasicCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mirs_msgs::srv::BasicCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mirs_msgs__srv__BasicCommand_Response
    std::shared_ptr<mirs_msgs::srv::BasicCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mirs_msgs__srv__BasicCommand_Response
    std::shared_ptr<mirs_msgs::srv::BasicCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BasicCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const BasicCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BasicCommand_Response_

// alias to use template instance with default allocator
using BasicCommand_Response =
  mirs_msgs::srv::BasicCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mirs_msgs

namespace mirs_msgs
{

namespace srv
{

struct BasicCommand
{
  using Request = mirs_msgs::srv::BasicCommand_Request;
  using Response = mirs_msgs::srv::BasicCommand_Response;
};

}  // namespace srv

}  // namespace mirs_msgs

#endif  // MIRS_MSGS__SRV__DETAIL__BASIC_COMMAND__STRUCT_HPP_
