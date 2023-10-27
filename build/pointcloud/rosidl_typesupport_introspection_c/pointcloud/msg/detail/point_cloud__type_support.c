// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from pointcloud:msg/PointCloud.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "pointcloud/msg/detail/point_cloud__rosidl_typesupport_introspection_c.h"
#include "pointcloud/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "pointcloud/msg/detail/point_cloud__functions.h"
#include "pointcloud/msg/detail/point_cloud__struct.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `z`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__PointCloud_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  pointcloud__msg__PointCloud__init(message_memory);
}

void pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__PointCloud_fini_function(void * message_memory)
{
  pointcloud__msg__PointCloud__fini(message_memory);
}

size_t pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__size_function__PointCloud__x(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_const_function__PointCloud__x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_function__PointCloud__x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__fetch_function__PointCloud__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_const_function__PointCloud__x(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__assign_function__PointCloud__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_function__PointCloud__x(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__resize_function__PointCloud__x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__size_function__PointCloud__y(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_const_function__PointCloud__y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_function__PointCloud__y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__fetch_function__PointCloud__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_const_function__PointCloud__y(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__assign_function__PointCloud__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_function__PointCloud__y(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__resize_function__PointCloud__y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__size_function__PointCloud__z(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_const_function__PointCloud__z(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_function__PointCloud__z(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__fetch_function__PointCloud__z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_const_function__PointCloud__z(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__assign_function__PointCloud__z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_function__PointCloud__z(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__resize_function__PointCloud__z(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__PointCloud_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pointcloud__msg__PointCloud, x),  // bytes offset in struct
    NULL,  // default value
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__size_function__PointCloud__x,  // size() function pointer
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_const_function__PointCloud__x,  // get_const(index) function pointer
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_function__PointCloud__x,  // get(index) function pointer
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__fetch_function__PointCloud__x,  // fetch(index, &value) function pointer
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__assign_function__PointCloud__x,  // assign(index, value) function pointer
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__resize_function__PointCloud__x  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pointcloud__msg__PointCloud, y),  // bytes offset in struct
    NULL,  // default value
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__size_function__PointCloud__y,  // size() function pointer
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_const_function__PointCloud__y,  // get_const(index) function pointer
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_function__PointCloud__y,  // get(index) function pointer
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__fetch_function__PointCloud__y,  // fetch(index, &value) function pointer
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__assign_function__PointCloud__y,  // assign(index, value) function pointer
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__resize_function__PointCloud__y  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(pointcloud__msg__PointCloud, z),  // bytes offset in struct
    NULL,  // default value
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__size_function__PointCloud__z,  // size() function pointer
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_const_function__PointCloud__z,  // get_const(index) function pointer
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__get_function__PointCloud__z,  // get(index) function pointer
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__fetch_function__PointCloud__z,  // fetch(index, &value) function pointer
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__assign_function__PointCloud__z,  // assign(index, value) function pointer
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__resize_function__PointCloud__z  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__PointCloud_message_members = {
  "pointcloud__msg",  // message namespace
  "PointCloud",  // message name
  3,  // number of fields
  sizeof(pointcloud__msg__PointCloud),
  pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__PointCloud_message_member_array,  // message members
  pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__PointCloud_init_function,  // function to initialize message memory (memory has to be allocated)
  pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__PointCloud_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__PointCloud_message_type_support_handle = {
  0,
  &pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__PointCloud_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_pointcloud
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pointcloud, msg, PointCloud)() {
  if (!pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__PointCloud_message_type_support_handle.typesupport_identifier) {
    pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__PointCloud_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &pointcloud__msg__PointCloud__rosidl_typesupport_introspection_c__PointCloud_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
