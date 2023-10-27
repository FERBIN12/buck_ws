// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from pointcloud:msg/PointCloud.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD__MSG__DETAIL__POINT_CLOUD__STRUCT_HPP_
#define POINTCLOUD__MSG__DETAIL__POINT_CLOUD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__pointcloud__msg__PointCloud __attribute__((deprecated))
#else
# define DEPRECATED__pointcloud__msg__PointCloud __declspec(deprecated)
#endif

namespace pointcloud
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PointCloud_
{
  using Type = PointCloud_<ContainerAllocator>;

  explicit PointCloud_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit PointCloud_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _x_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _x_type x;
  using _y_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _y_type y;
  using _z_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _z_type z;

  // setters for named parameter idiom
  Type & set__x(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    pointcloud::msg::PointCloud_<ContainerAllocator> *;
  using ConstRawPtr =
    const pointcloud::msg::PointCloud_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<pointcloud::msg::PointCloud_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<pointcloud::msg::PointCloud_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      pointcloud::msg::PointCloud_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<pointcloud::msg::PointCloud_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      pointcloud::msg::PointCloud_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<pointcloud::msg::PointCloud_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<pointcloud::msg::PointCloud_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<pointcloud::msg::PointCloud_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__pointcloud__msg__PointCloud
    std::shared_ptr<pointcloud::msg::PointCloud_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__pointcloud__msg__PointCloud
    std::shared_ptr<pointcloud::msg::PointCloud_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PointCloud_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const PointCloud_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PointCloud_

// alias to use template instance with default allocator
using PointCloud =
  pointcloud::msg::PointCloud_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace pointcloud

#endif  // POINTCLOUD__MSG__DETAIL__POINT_CLOUD__STRUCT_HPP_
