// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mirs_msgs:srv/Params.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__SRV__DETAIL__PARAMS__STRUCT_HPP_
#define MIRS_MSGS__SRV__DETAIL__PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mirs_msgs__srv__Params_Request __attribute__((deprecated))
#else
# define DEPRECATED__mirs_msgs__srv__Params_Request __declspec(deprecated)
#endif

namespace mirs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Params_Request_
{
  using Type = Params_Request_<ContainerAllocator>;

  explicit Params_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
    }
  }

  explicit Params_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->a = 0.0;
      this->b = 0.0;
    }
  }

  // field types and members
  using _a_type =
    double;
  _a_type a;
  using _b_type =
    double;
  _b_type b;

  // setters for named parameter idiom
  Type & set__a(
    const double & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__b(
    const double & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mirs_msgs::srv::Params_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mirs_msgs::srv::Params_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mirs_msgs::srv::Params_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mirs_msgs::srv::Params_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::srv::Params_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::srv::Params_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::srv::Params_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::srv::Params_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mirs_msgs::srv::Params_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mirs_msgs::srv::Params_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mirs_msgs__srv__Params_Request
    std::shared_ptr<mirs_msgs::srv::Params_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mirs_msgs__srv__Params_Request
    std::shared_ptr<mirs_msgs::srv::Params_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Params_Request_ & other) const
  {
    if (this->a != other.a) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const Params_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Params_Request_

// alias to use template instance with default allocator
using Params_Request =
  mirs_msgs::srv::Params_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mirs_msgs


#ifndef _WIN32
# define DEPRECATED__mirs_msgs__srv__Params_Response __attribute__((deprecated))
#else
# define DEPRECATED__mirs_msgs__srv__Params_Response __declspec(deprecated)
#endif

namespace mirs_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Params_Response_
{
  using Type = Params_Response_<ContainerAllocator>;

  explicit Params_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0.0;
    }
  }

  explicit Params_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sum = 0.0;
    }
  }

  // field types and members
  using _sum_type =
    double;
  _sum_type sum;

  // setters for named parameter idiom
  Type & set__sum(
    const double & _arg)
  {
    this->sum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mirs_msgs::srv::Params_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mirs_msgs::srv::Params_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mirs_msgs::srv::Params_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mirs_msgs::srv::Params_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::srv::Params_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::srv::Params_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::srv::Params_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::srv::Params_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mirs_msgs::srv::Params_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mirs_msgs::srv::Params_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mirs_msgs__srv__Params_Response
    std::shared_ptr<mirs_msgs::srv::Params_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mirs_msgs__srv__Params_Response
    std::shared_ptr<mirs_msgs::srv::Params_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Params_Response_ & other) const
  {
    if (this->sum != other.sum) {
      return false;
    }
    return true;
  }
  bool operator!=(const Params_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Params_Response_

// alias to use template instance with default allocator
using Params_Response =
  mirs_msgs::srv::Params_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mirs_msgs

namespace mirs_msgs
{

namespace srv
{

struct Params
{
  using Request = mirs_msgs::srv::Params_Request;
  using Response = mirs_msgs::srv::Params_Response;
};

}  // namespace srv

}  // namespace mirs_msgs

#endif  // MIRS_MSGS__SRV__DETAIL__PARAMS__STRUCT_HPP_
