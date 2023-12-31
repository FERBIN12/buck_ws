// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from pointcloud:msg/PointCloud.idl
// generated code does not contain a copyright notice

#ifndef POINTCLOUD__MSG__DETAIL__POINT_CLOUD__STRUCT_H_
#define POINTCLOUD__MSG__DETAIL__POINT_CLOUD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'z'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PointCloud in the package pointcloud.
typedef struct pointcloud__msg__PointCloud
{
  rosidl_runtime_c__float__Sequence x;
  rosidl_runtime_c__float__Sequence y;
  rosidl_runtime_c__float__Sequence z;
} pointcloud__msg__PointCloud;

// Struct for a sequence of pointcloud__msg__PointCloud.
typedef struct pointcloud__msg__PointCloud__Sequence
{
  pointcloud__msg__PointCloud * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} pointcloud__msg__PointCloud__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // POINTCLOUD__MSG__DETAIL__POINT_CLOUD__STRUCT_H_
