// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from pointcloud:msg/PointCloud.idl
// generated code does not contain a copyright notice
#include "pointcloud/msg/detail/point_cloud__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `z`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
pointcloud__msg__PointCloud__init(pointcloud__msg__PointCloud * msg)
{
  if (!msg) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__float__Sequence__init(&msg->x, 0)) {
    pointcloud__msg__PointCloud__fini(msg);
    return false;
  }
  // y
  if (!rosidl_runtime_c__float__Sequence__init(&msg->y, 0)) {
    pointcloud__msg__PointCloud__fini(msg);
    return false;
  }
  // z
  if (!rosidl_runtime_c__float__Sequence__init(&msg->z, 0)) {
    pointcloud__msg__PointCloud__fini(msg);
    return false;
  }
  return true;
}

void
pointcloud__msg__PointCloud__fini(pointcloud__msg__PointCloud * msg)
{
  if (!msg) {
    return;
  }
  // x
  rosidl_runtime_c__float__Sequence__fini(&msg->x);
  // y
  rosidl_runtime_c__float__Sequence__fini(&msg->y);
  // z
  rosidl_runtime_c__float__Sequence__fini(&msg->z);
}

bool
pointcloud__msg__PointCloud__are_equal(const pointcloud__msg__PointCloud * lhs, const pointcloud__msg__PointCloud * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->y), &(rhs->y)))
  {
    return false;
  }
  // z
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->z), &(rhs->z)))
  {
    return false;
  }
  return true;
}

bool
pointcloud__msg__PointCloud__copy(
  const pointcloud__msg__PointCloud * input,
  pointcloud__msg__PointCloud * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->y), &(output->y)))
  {
    return false;
  }
  // z
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->z), &(output->z)))
  {
    return false;
  }
  return true;
}

pointcloud__msg__PointCloud *
pointcloud__msg__PointCloud__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pointcloud__msg__PointCloud * msg = (pointcloud__msg__PointCloud *)allocator.allocate(sizeof(pointcloud__msg__PointCloud), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(pointcloud__msg__PointCloud));
  bool success = pointcloud__msg__PointCloud__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
pointcloud__msg__PointCloud__destroy(pointcloud__msg__PointCloud * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    pointcloud__msg__PointCloud__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
pointcloud__msg__PointCloud__Sequence__init(pointcloud__msg__PointCloud__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pointcloud__msg__PointCloud * data = NULL;

  if (size) {
    data = (pointcloud__msg__PointCloud *)allocator.zero_allocate(size, sizeof(pointcloud__msg__PointCloud), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = pointcloud__msg__PointCloud__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        pointcloud__msg__PointCloud__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
pointcloud__msg__PointCloud__Sequence__fini(pointcloud__msg__PointCloud__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      pointcloud__msg__PointCloud__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

pointcloud__msg__PointCloud__Sequence *
pointcloud__msg__PointCloud__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  pointcloud__msg__PointCloud__Sequence * array = (pointcloud__msg__PointCloud__Sequence *)allocator.allocate(sizeof(pointcloud__msg__PointCloud__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = pointcloud__msg__PointCloud__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
pointcloud__msg__PointCloud__Sequence__destroy(pointcloud__msg__PointCloud__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    pointcloud__msg__PointCloud__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
pointcloud__msg__PointCloud__Sequence__are_equal(const pointcloud__msg__PointCloud__Sequence * lhs, const pointcloud__msg__PointCloud__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!pointcloud__msg__PointCloud__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
pointcloud__msg__PointCloud__Sequence__copy(
  const pointcloud__msg__PointCloud__Sequence * input,
  pointcloud__msg__PointCloud__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(pointcloud__msg__PointCloud);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    pointcloud__msg__PointCloud * data =
      (pointcloud__msg__PointCloud *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!pointcloud__msg__PointCloud__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          pointcloud__msg__PointCloud__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!pointcloud__msg__PointCloud__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
