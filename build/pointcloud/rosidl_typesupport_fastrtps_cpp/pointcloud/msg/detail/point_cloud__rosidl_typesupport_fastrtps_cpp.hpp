// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from pointcloud:msg/PointCloud.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD__MSG__DETAIL__POINT_CLOUD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define POINTCLOUD__MSG__DETAIL__POINT_CLOUD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "pointcloud/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "pointcloud/msg/detail/point_cloud__struct.hpp"

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

#include "fastcdr/Cdr.h"

namespace pointcloud
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pointcloud
cdr_serialize(
  const pointcloud::msg::PointCloud & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pointcloud
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pointcloud::msg::PointCloud & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pointcloud
get_serialized_size(
  const pointcloud::msg::PointCloud & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pointcloud
max_serialized_size_PointCloud(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pointcloud

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pointcloud
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pointcloud, msg, PointCloud)();

#ifdef __cplusplus
}
#endif

#endif  // POINTCLOUD__MSG__DETAIL__POINT_CLOUD__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
