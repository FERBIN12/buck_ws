// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from pointcloud:msg/PointCloud.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD__MSG__DETAIL__POINT_CLOUD__TRAITS_HPP_
#define POINTCLOUD__MSG__DETAIL__POINT_CLOUD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "pointcloud/msg/detail/point_cloud__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace pointcloud
{

namespace msg
{

inline void to_flow_style_yaml(
  const PointCloud & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    if (msg.x.size() == 0) {
      out << "x: []";
    } else {
      out << "x: [";
      size_t pending_items = msg.x.size();
      for (auto item : msg.x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y
  {
    if (msg.y.size() == 0) {
      out << "y: []";
    } else {
      out << "y: [";
      size_t pending_items = msg.y.size();
      for (auto item : msg.y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: z
  {
    if (msg.z.size() == 0) {
      out << "z: []";
    } else {
      out << "z: [";
      size_t pending_items = msg.z.size();
      for (auto item : msg.z) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PointCloud & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x.size() == 0) {
      out << "x: []\n";
    } else {
      out << "x:\n";
      for (auto item : msg.x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y.size() == 0) {
      out << "y: []\n";
    } else {
      out << "y:\n";
      for (auto item : msg.y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.z.size() == 0) {
      out << "z: []\n";
    } else {
      out << "z:\n";
      for (auto item : msg.z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PointCloud & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace pointcloud

namespace rosidl_generator_traits
{

[[deprecated("use pointcloud::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const pointcloud::msg::PointCloud & msg,
  std::ostream & out, size_t indentation = 0)
{
  pointcloud::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use pointcloud::msg::to_yaml() instead")]]
inline std::string to_yaml(const pointcloud::msg::PointCloud & msg)
{
  return pointcloud::msg::to_yaml(msg);
}

template<>
inline const char * data_type<pointcloud::msg::PointCloud>()
{
  return "pointcloud::msg::PointCloud";
}

template<>
inline const char * name<pointcloud::msg::PointCloud>()
{
  return "pointcloud/msg/PointCloud";
}

template<>
struct has_fixed_size<pointcloud::msg::PointCloud>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<pointcloud::msg::PointCloud>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<pointcloud::msg::PointCloud>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // POINTCLOUD__MSG__DETAIL__POINT_CLOUD__TRAITS_HPP_
