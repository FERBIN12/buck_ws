// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from pointcloud:msg/PointCloud.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD__MSG__DETAIL__POINT_CLOUD__BUILDER_HPP_
#define POINTCLOUD__MSG__DETAIL__POINT_CLOUD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "pointcloud/msg/detail/point_cloud__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace pointcloud
{

namespace msg
{

namespace builder
{

class Init_PointCloud_z
{
public:
  explicit Init_PointCloud_z(::pointcloud::msg::PointCloud & msg)
  : msg_(msg)
  {}
  ::pointcloud::msg::PointCloud z(::pointcloud::msg::PointCloud::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::pointcloud::msg::PointCloud msg_;
};

class Init_PointCloud_y
{
public:
  explicit Init_PointCloud_y(::pointcloud::msg::PointCloud & msg)
  : msg_(msg)
  {}
  Init_PointCloud_z y(::pointcloud::msg::PointCloud::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PointCloud_z(msg_);
  }

private:
  ::pointcloud::msg::PointCloud msg_;
};

class Init_PointCloud_x
{
public:
  Init_PointCloud_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PointCloud_y x(::pointcloud::msg::PointCloud::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PointCloud_y(msg_);
  }

private:
  ::pointcloud::msg::PointCloud msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::pointcloud::msg::PointCloud>()
{
  return pointcloud::msg::builder::Init_PointCloud_x();
}

}  // namespace pointcloud

#endif  // POINTCLOUD__MSG__DETAIL__POINT_CLOUD__BUILDER_HPP_
