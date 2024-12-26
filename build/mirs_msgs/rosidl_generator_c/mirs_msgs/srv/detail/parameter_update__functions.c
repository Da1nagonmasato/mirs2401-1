// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mirs_msgs:srv/ParameterUpdate.idl
// generated code does not contain a copyright notice
#include "mirs_msgs/srv/detail/parameter_update__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
mirs_msgs__srv__ParameterUpdate_Request__init(mirs_msgs__srv__ParameterUpdate_Request * msg)
{
  if (!msg) {
    return false;
  }
  // wheel_radius
  // wheel_base
  // rkp
  // rki
  // rkd
  // lkp
  // lki
  // lkd
  return true;
}

void
mirs_msgs__srv__ParameterUpdate_Request__fini(mirs_msgs__srv__ParameterUpdate_Request * msg)
{
  if (!msg) {
    return;
  }
  // wheel_radius
  // wheel_base
  // rkp
  // rki
  // rkd
  // lkp
  // lki
  // lkd
}

bool
mirs_msgs__srv__ParameterUpdate_Request__are_equal(const mirs_msgs__srv__ParameterUpdate_Request * lhs, const mirs_msgs__srv__ParameterUpdate_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // wheel_radius
  if (lhs->wheel_radius != rhs->wheel_radius) {
    return false;
  }
  // wheel_base
  if (lhs->wheel_base != rhs->wheel_base) {
    return false;
  }
  // rkp
  if (lhs->rkp != rhs->rkp) {
    return false;
  }
  // rki
  if (lhs->rki != rhs->rki) {
    return false;
  }
  // rkd
  if (lhs->rkd != rhs->rkd) {
    return false;
  }
  // lkp
  if (lhs->lkp != rhs->lkp) {
    return false;
  }
  // lki
  if (lhs->lki != rhs->lki) {
    return false;
  }
  // lkd
  if (lhs->lkd != rhs->lkd) {
    return false;
  }
  return true;
}

bool
mirs_msgs__srv__ParameterUpdate_Request__copy(
  const mirs_msgs__srv__ParameterUpdate_Request * input,
  mirs_msgs__srv__ParameterUpdate_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // wheel_radius
  output->wheel_radius = input->wheel_radius;
  // wheel_base
  output->wheel_base = input->wheel_base;
  // rkp
  output->rkp = input->rkp;
  // rki
  output->rki = input->rki;
  // rkd
  output->rkd = input->rkd;
  // lkp
  output->lkp = input->lkp;
  // lki
  output->lki = input->lki;
  // lkd
  output->lkd = input->lkd;
  return true;
}

mirs_msgs__srv__ParameterUpdate_Request *
mirs_msgs__srv__ParameterUpdate_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__srv__ParameterUpdate_Request * msg = (mirs_msgs__srv__ParameterUpdate_Request *)allocator.allocate(sizeof(mirs_msgs__srv__ParameterUpdate_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mirs_msgs__srv__ParameterUpdate_Request));
  bool success = mirs_msgs__srv__ParameterUpdate_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mirs_msgs__srv__ParameterUpdate_Request__destroy(mirs_msgs__srv__ParameterUpdate_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mirs_msgs__srv__ParameterUpdate_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mirs_msgs__srv__ParameterUpdate_Request__Sequence__init(mirs_msgs__srv__ParameterUpdate_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__srv__ParameterUpdate_Request * data = NULL;

  if (size) {
    data = (mirs_msgs__srv__ParameterUpdate_Request *)allocator.zero_allocate(size, sizeof(mirs_msgs__srv__ParameterUpdate_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mirs_msgs__srv__ParameterUpdate_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mirs_msgs__srv__ParameterUpdate_Request__fini(&data[i - 1]);
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
mirs_msgs__srv__ParameterUpdate_Request__Sequence__fini(mirs_msgs__srv__ParameterUpdate_Request__Sequence * array)
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
      mirs_msgs__srv__ParameterUpdate_Request__fini(&array->data[i]);
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

mirs_msgs__srv__ParameterUpdate_Request__Sequence *
mirs_msgs__srv__ParameterUpdate_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__srv__ParameterUpdate_Request__Sequence * array = (mirs_msgs__srv__ParameterUpdate_Request__Sequence *)allocator.allocate(sizeof(mirs_msgs__srv__ParameterUpdate_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mirs_msgs__srv__ParameterUpdate_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mirs_msgs__srv__ParameterUpdate_Request__Sequence__destroy(mirs_msgs__srv__ParameterUpdate_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mirs_msgs__srv__ParameterUpdate_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mirs_msgs__srv__ParameterUpdate_Request__Sequence__are_equal(const mirs_msgs__srv__ParameterUpdate_Request__Sequence * lhs, const mirs_msgs__srv__ParameterUpdate_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mirs_msgs__srv__ParameterUpdate_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mirs_msgs__srv__ParameterUpdate_Request__Sequence__copy(
  const mirs_msgs__srv__ParameterUpdate_Request__Sequence * input,
  mirs_msgs__srv__ParameterUpdate_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mirs_msgs__srv__ParameterUpdate_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mirs_msgs__srv__ParameterUpdate_Request * data =
      (mirs_msgs__srv__ParameterUpdate_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mirs_msgs__srv__ParameterUpdate_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mirs_msgs__srv__ParameterUpdate_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mirs_msgs__srv__ParameterUpdate_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mirs_msgs__srv__ParameterUpdate_Response__init(mirs_msgs__srv__ParameterUpdate_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
mirs_msgs__srv__ParameterUpdate_Response__fini(mirs_msgs__srv__ParameterUpdate_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
mirs_msgs__srv__ParameterUpdate_Response__are_equal(const mirs_msgs__srv__ParameterUpdate_Response * lhs, const mirs_msgs__srv__ParameterUpdate_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
mirs_msgs__srv__ParameterUpdate_Response__copy(
  const mirs_msgs__srv__ParameterUpdate_Response * input,
  mirs_msgs__srv__ParameterUpdate_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

mirs_msgs__srv__ParameterUpdate_Response *
mirs_msgs__srv__ParameterUpdate_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__srv__ParameterUpdate_Response * msg = (mirs_msgs__srv__ParameterUpdate_Response *)allocator.allocate(sizeof(mirs_msgs__srv__ParameterUpdate_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mirs_msgs__srv__ParameterUpdate_Response));
  bool success = mirs_msgs__srv__ParameterUpdate_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mirs_msgs__srv__ParameterUpdate_Response__destroy(mirs_msgs__srv__ParameterUpdate_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mirs_msgs__srv__ParameterUpdate_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mirs_msgs__srv__ParameterUpdate_Response__Sequence__init(mirs_msgs__srv__ParameterUpdate_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__srv__ParameterUpdate_Response * data = NULL;

  if (size) {
    data = (mirs_msgs__srv__ParameterUpdate_Response *)allocator.zero_allocate(size, sizeof(mirs_msgs__srv__ParameterUpdate_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mirs_msgs__srv__ParameterUpdate_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mirs_msgs__srv__ParameterUpdate_Response__fini(&data[i - 1]);
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
mirs_msgs__srv__ParameterUpdate_Response__Sequence__fini(mirs_msgs__srv__ParameterUpdate_Response__Sequence * array)
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
      mirs_msgs__srv__ParameterUpdate_Response__fini(&array->data[i]);
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

mirs_msgs__srv__ParameterUpdate_Response__Sequence *
mirs_msgs__srv__ParameterUpdate_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__srv__ParameterUpdate_Response__Sequence * array = (mirs_msgs__srv__ParameterUpdate_Response__Sequence *)allocator.allocate(sizeof(mirs_msgs__srv__ParameterUpdate_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mirs_msgs__srv__ParameterUpdate_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mirs_msgs__srv__ParameterUpdate_Response__Sequence__destroy(mirs_msgs__srv__ParameterUpdate_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mirs_msgs__srv__ParameterUpdate_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mirs_msgs__srv__ParameterUpdate_Response__Sequence__are_equal(const mirs_msgs__srv__ParameterUpdate_Response__Sequence * lhs, const mirs_msgs__srv__ParameterUpdate_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mirs_msgs__srv__ParameterUpdate_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mirs_msgs__srv__ParameterUpdate_Response__Sequence__copy(
  const mirs_msgs__srv__ParameterUpdate_Response__Sequence * input,
  mirs_msgs__srv__ParameterUpdate_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mirs_msgs__srv__ParameterUpdate_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mirs_msgs__srv__ParameterUpdate_Response * data =
      (mirs_msgs__srv__ParameterUpdate_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mirs_msgs__srv__ParameterUpdate_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mirs_msgs__srv__ParameterUpdate_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mirs_msgs__srv__ParameterUpdate_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
