// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mirs_msgs:msg/BasicParam.idl
// generated code does not contain a copyright notice

#ifndef MIRS_MSGS__MSG__DETAIL__BASIC_PARAM__STRUCT_HPP_
#define MIRS_MSGS__MSG__DETAIL__BASIC_PARAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mirs_msgs__msg__BasicParam __attribute__((deprecated))
#else
# define DEPRECATED__mirs_msgs__msg__BasicParam __declspec(deprecated)
#endif

namespace mirs_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BasicParam_
{
  using Type = BasicParam_<ContainerAllocator>;

  explicit BasicParam_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheel_radius = 0.0;
      this->wheel_base = 0.0;
      this->rkp = 0.0;
      this->rki = 0.0;
      this->rkd = 0.0;
      this->lkp = 0.0;
      this->lki = 0.0;
      this->lkd = 0.0;
    }
  }

  explicit BasicParam_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wheel_radius = 0.0;
      this->wheel_base = 0.0;
      this->rkp = 0.0;
      this->rki = 0.0;
      this->rkd = 0.0;
      this->lkp = 0.0;
      this->lki = 0.0;
      this->lkd = 0.0;
    }
  }

  // field types and members
  using _wheel_radius_type =
    double;
  _wheel_radius_type wheel_radius;
  using _wheel_base_type =
    double;
  _wheel_base_type wheel_base;
  using _rkp_type =
    double;
  _rkp_type rkp;
  using _rki_type =
    double;
  _rki_type rki;
  using _rkd_type =
    double;
  _rkd_type rkd;
  using _lkp_type =
    double;
  _lkp_type lkp;
  using _lki_type =
    double;
  _lki_type lki;
  using _lkd_type =
    double;
  _lkd_type lkd;

  // setters for named parameter idiom
  Type & set__wheel_radius(
    const double & _arg)
  {
    this->wheel_radius = _arg;
    return *this;
  }
  Type & set__wheel_base(
    const double & _arg)
  {
    this->wheel_base = _arg;
    return *this;
  }
  Type & set__rkp(
    const double & _arg)
  {
    this->rkp = _arg;
    return *this;
  }
  Type & set__rki(
    const double & _arg)
  {
    this->rki = _arg;
    return *this;
  }
  Type & set__rkd(
    const double & _arg)
  {
    this->rkd = _arg;
    return *this;
  }
  Type & set__lkp(
    const double & _arg)
  {
    this->lkp = _arg;
    return *this;
  }
  Type & set__lki(
    const double & _arg)
  {
    this->lki = _arg;
    return *this;
  }
  Type & set__lkd(
    const double & _arg)
  {
    this->lkd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mirs_msgs::msg::BasicParam_<ContainerAllocator> *;
  using ConstRawPtr =
    const mirs_msgs::msg::BasicParam_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mirs_msgs::msg::BasicParam_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mirs_msgs::msg::BasicParam_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::msg::BasicParam_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::msg::BasicParam_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mirs_msgs::msg::BasicParam_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mirs_msgs::msg::BasicParam_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mirs_msgs::msg::BasicParam_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mirs_msgs::msg::BasicParam_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mirs_msgs__msg__BasicParam
    std::shared_ptr<mirs_msgs::msg::BasicParam_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mirs_msgs__msg__BasicParam
    std::shared_ptr<mirs_msgs::msg::BasicParam_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BasicParam_ & other) const
  {
    if (this->wheel_radius != other.wheel_radius) {
      return false;
    }
    if (this->wheel_base != other.wheel_base) {
      return false;
    }
    if (this->rkp != other.rkp) {
      return false;
    }
    if (this->rki != other.rki) {
      return false;
    }
    if (this->rkd != other.rkd) {
      return false;
    }
    if (this->lkp != other.lkp) {
      return false;
    }
    if (this->lki != other.lki) {
      return false;
    }
    if (this->lkd != other.lkd) {
      return false;
    }
    return true;
  }
  bool operator!=(const BasicParam_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BasicParam_

// alias to use template instance with default allocator
using BasicParam =
  mirs_msgs::msg::BasicParam_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mirs_msgs

#endif  // MIRS_MSGS__MSG__DETAIL__BASIC_PARAM__STRUCT_HPP_
