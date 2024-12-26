// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mirs_msgs:action/Trigger.idl
// generated code does not contain a copyright notice
#include "mirs_msgs/action/detail/trigger__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mirs_msgs__action__Trigger_Goal__init(mirs_msgs__action__Trigger_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
mirs_msgs__action__Trigger_Goal__fini(mirs_msgs__action__Trigger_Goal * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
mirs_msgs__action__Trigger_Goal__are_equal(const mirs_msgs__action__Trigger_Goal * lhs, const mirs_msgs__action__Trigger_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
mirs_msgs__action__Trigger_Goal__copy(
  const mirs_msgs__action__Trigger_Goal * input,
  mirs_msgs__action__Trigger_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

mirs_msgs__action__Trigger_Goal *
mirs_msgs__action__Trigger_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_Goal * msg = (mirs_msgs__action__Trigger_Goal *)allocator.allocate(sizeof(mirs_msgs__action__Trigger_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mirs_msgs__action__Trigger_Goal));
  bool success = mirs_msgs__action__Trigger_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mirs_msgs__action__Trigger_Goal__destroy(mirs_msgs__action__Trigger_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mirs_msgs__action__Trigger_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mirs_msgs__action__Trigger_Goal__Sequence__init(mirs_msgs__action__Trigger_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_Goal * data = NULL;

  if (size) {
    data = (mirs_msgs__action__Trigger_Goal *)allocator.zero_allocate(size, sizeof(mirs_msgs__action__Trigger_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mirs_msgs__action__Trigger_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mirs_msgs__action__Trigger_Goal__fini(&data[i - 1]);
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
mirs_msgs__action__Trigger_Goal__Sequence__fini(mirs_msgs__action__Trigger_Goal__Sequence * array)
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
      mirs_msgs__action__Trigger_Goal__fini(&array->data[i]);
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

mirs_msgs__action__Trigger_Goal__Sequence *
mirs_msgs__action__Trigger_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_Goal__Sequence * array = (mirs_msgs__action__Trigger_Goal__Sequence *)allocator.allocate(sizeof(mirs_msgs__action__Trigger_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mirs_msgs__action__Trigger_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mirs_msgs__action__Trigger_Goal__Sequence__destroy(mirs_msgs__action__Trigger_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mirs_msgs__action__Trigger_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mirs_msgs__action__Trigger_Goal__Sequence__are_equal(const mirs_msgs__action__Trigger_Goal__Sequence * lhs, const mirs_msgs__action__Trigger_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mirs_msgs__action__Trigger_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mirs_msgs__action__Trigger_Goal__Sequence__copy(
  const mirs_msgs__action__Trigger_Goal__Sequence * input,
  mirs_msgs__action__Trigger_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mirs_msgs__action__Trigger_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mirs_msgs__action__Trigger_Goal * data =
      (mirs_msgs__action__Trigger_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mirs_msgs__action__Trigger_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mirs_msgs__action__Trigger_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mirs_msgs__action__Trigger_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mirs_msgs__action__Trigger_Result__init(mirs_msgs__action__Trigger_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
mirs_msgs__action__Trigger_Result__fini(mirs_msgs__action__Trigger_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
mirs_msgs__action__Trigger_Result__are_equal(const mirs_msgs__action__Trigger_Result * lhs, const mirs_msgs__action__Trigger_Result * rhs)
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
mirs_msgs__action__Trigger_Result__copy(
  const mirs_msgs__action__Trigger_Result * input,
  mirs_msgs__action__Trigger_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

mirs_msgs__action__Trigger_Result *
mirs_msgs__action__Trigger_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_Result * msg = (mirs_msgs__action__Trigger_Result *)allocator.allocate(sizeof(mirs_msgs__action__Trigger_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mirs_msgs__action__Trigger_Result));
  bool success = mirs_msgs__action__Trigger_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mirs_msgs__action__Trigger_Result__destroy(mirs_msgs__action__Trigger_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mirs_msgs__action__Trigger_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mirs_msgs__action__Trigger_Result__Sequence__init(mirs_msgs__action__Trigger_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_Result * data = NULL;

  if (size) {
    data = (mirs_msgs__action__Trigger_Result *)allocator.zero_allocate(size, sizeof(mirs_msgs__action__Trigger_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mirs_msgs__action__Trigger_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mirs_msgs__action__Trigger_Result__fini(&data[i - 1]);
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
mirs_msgs__action__Trigger_Result__Sequence__fini(mirs_msgs__action__Trigger_Result__Sequence * array)
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
      mirs_msgs__action__Trigger_Result__fini(&array->data[i]);
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

mirs_msgs__action__Trigger_Result__Sequence *
mirs_msgs__action__Trigger_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_Result__Sequence * array = (mirs_msgs__action__Trigger_Result__Sequence *)allocator.allocate(sizeof(mirs_msgs__action__Trigger_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mirs_msgs__action__Trigger_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mirs_msgs__action__Trigger_Result__Sequence__destroy(mirs_msgs__action__Trigger_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mirs_msgs__action__Trigger_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mirs_msgs__action__Trigger_Result__Sequence__are_equal(const mirs_msgs__action__Trigger_Result__Sequence * lhs, const mirs_msgs__action__Trigger_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mirs_msgs__action__Trigger_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mirs_msgs__action__Trigger_Result__Sequence__copy(
  const mirs_msgs__action__Trigger_Result__Sequence * input,
  mirs_msgs__action__Trigger_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mirs_msgs__action__Trigger_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mirs_msgs__action__Trigger_Result * data =
      (mirs_msgs__action__Trigger_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mirs_msgs__action__Trigger_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mirs_msgs__action__Trigger_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mirs_msgs__action__Trigger_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mirs_msgs__action__Trigger_Feedback__init(mirs_msgs__action__Trigger_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
mirs_msgs__action__Trigger_Feedback__fini(mirs_msgs__action__Trigger_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
mirs_msgs__action__Trigger_Feedback__are_equal(const mirs_msgs__action__Trigger_Feedback * lhs, const mirs_msgs__action__Trigger_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
mirs_msgs__action__Trigger_Feedback__copy(
  const mirs_msgs__action__Trigger_Feedback * input,
  mirs_msgs__action__Trigger_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

mirs_msgs__action__Trigger_Feedback *
mirs_msgs__action__Trigger_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_Feedback * msg = (mirs_msgs__action__Trigger_Feedback *)allocator.allocate(sizeof(mirs_msgs__action__Trigger_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mirs_msgs__action__Trigger_Feedback));
  bool success = mirs_msgs__action__Trigger_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mirs_msgs__action__Trigger_Feedback__destroy(mirs_msgs__action__Trigger_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mirs_msgs__action__Trigger_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mirs_msgs__action__Trigger_Feedback__Sequence__init(mirs_msgs__action__Trigger_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_Feedback * data = NULL;

  if (size) {
    data = (mirs_msgs__action__Trigger_Feedback *)allocator.zero_allocate(size, sizeof(mirs_msgs__action__Trigger_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mirs_msgs__action__Trigger_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mirs_msgs__action__Trigger_Feedback__fini(&data[i - 1]);
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
mirs_msgs__action__Trigger_Feedback__Sequence__fini(mirs_msgs__action__Trigger_Feedback__Sequence * array)
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
      mirs_msgs__action__Trigger_Feedback__fini(&array->data[i]);
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

mirs_msgs__action__Trigger_Feedback__Sequence *
mirs_msgs__action__Trigger_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_Feedback__Sequence * array = (mirs_msgs__action__Trigger_Feedback__Sequence *)allocator.allocate(sizeof(mirs_msgs__action__Trigger_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mirs_msgs__action__Trigger_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mirs_msgs__action__Trigger_Feedback__Sequence__destroy(mirs_msgs__action__Trigger_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mirs_msgs__action__Trigger_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mirs_msgs__action__Trigger_Feedback__Sequence__are_equal(const mirs_msgs__action__Trigger_Feedback__Sequence * lhs, const mirs_msgs__action__Trigger_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mirs_msgs__action__Trigger_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mirs_msgs__action__Trigger_Feedback__Sequence__copy(
  const mirs_msgs__action__Trigger_Feedback__Sequence * input,
  mirs_msgs__action__Trigger_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mirs_msgs__action__Trigger_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mirs_msgs__action__Trigger_Feedback * data =
      (mirs_msgs__action__Trigger_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mirs_msgs__action__Trigger_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mirs_msgs__action__Trigger_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mirs_msgs__action__Trigger_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "mirs_msgs/action/detail/trigger__functions.h"

bool
mirs_msgs__action__Trigger_SendGoal_Request__init(mirs_msgs__action__Trigger_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mirs_msgs__action__Trigger_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!mirs_msgs__action__Trigger_Goal__init(&msg->goal)) {
    mirs_msgs__action__Trigger_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
mirs_msgs__action__Trigger_SendGoal_Request__fini(mirs_msgs__action__Trigger_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  mirs_msgs__action__Trigger_Goal__fini(&msg->goal);
}

bool
mirs_msgs__action__Trigger_SendGoal_Request__are_equal(const mirs_msgs__action__Trigger_SendGoal_Request * lhs, const mirs_msgs__action__Trigger_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!mirs_msgs__action__Trigger_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
mirs_msgs__action__Trigger_SendGoal_Request__copy(
  const mirs_msgs__action__Trigger_SendGoal_Request * input,
  mirs_msgs__action__Trigger_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!mirs_msgs__action__Trigger_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

mirs_msgs__action__Trigger_SendGoal_Request *
mirs_msgs__action__Trigger_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_SendGoal_Request * msg = (mirs_msgs__action__Trigger_SendGoal_Request *)allocator.allocate(sizeof(mirs_msgs__action__Trigger_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mirs_msgs__action__Trigger_SendGoal_Request));
  bool success = mirs_msgs__action__Trigger_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mirs_msgs__action__Trigger_SendGoal_Request__destroy(mirs_msgs__action__Trigger_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mirs_msgs__action__Trigger_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mirs_msgs__action__Trigger_SendGoal_Request__Sequence__init(mirs_msgs__action__Trigger_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_SendGoal_Request * data = NULL;

  if (size) {
    data = (mirs_msgs__action__Trigger_SendGoal_Request *)allocator.zero_allocate(size, sizeof(mirs_msgs__action__Trigger_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mirs_msgs__action__Trigger_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mirs_msgs__action__Trigger_SendGoal_Request__fini(&data[i - 1]);
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
mirs_msgs__action__Trigger_SendGoal_Request__Sequence__fini(mirs_msgs__action__Trigger_SendGoal_Request__Sequence * array)
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
      mirs_msgs__action__Trigger_SendGoal_Request__fini(&array->data[i]);
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

mirs_msgs__action__Trigger_SendGoal_Request__Sequence *
mirs_msgs__action__Trigger_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_SendGoal_Request__Sequence * array = (mirs_msgs__action__Trigger_SendGoal_Request__Sequence *)allocator.allocate(sizeof(mirs_msgs__action__Trigger_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mirs_msgs__action__Trigger_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mirs_msgs__action__Trigger_SendGoal_Request__Sequence__destroy(mirs_msgs__action__Trigger_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mirs_msgs__action__Trigger_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mirs_msgs__action__Trigger_SendGoal_Request__Sequence__are_equal(const mirs_msgs__action__Trigger_SendGoal_Request__Sequence * lhs, const mirs_msgs__action__Trigger_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mirs_msgs__action__Trigger_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mirs_msgs__action__Trigger_SendGoal_Request__Sequence__copy(
  const mirs_msgs__action__Trigger_SendGoal_Request__Sequence * input,
  mirs_msgs__action__Trigger_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mirs_msgs__action__Trigger_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mirs_msgs__action__Trigger_SendGoal_Request * data =
      (mirs_msgs__action__Trigger_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mirs_msgs__action__Trigger_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mirs_msgs__action__Trigger_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mirs_msgs__action__Trigger_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
mirs_msgs__action__Trigger_SendGoal_Response__init(mirs_msgs__action__Trigger_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mirs_msgs__action__Trigger_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
mirs_msgs__action__Trigger_SendGoal_Response__fini(mirs_msgs__action__Trigger_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
mirs_msgs__action__Trigger_SendGoal_Response__are_equal(const mirs_msgs__action__Trigger_SendGoal_Response * lhs, const mirs_msgs__action__Trigger_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
mirs_msgs__action__Trigger_SendGoal_Response__copy(
  const mirs_msgs__action__Trigger_SendGoal_Response * input,
  mirs_msgs__action__Trigger_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

mirs_msgs__action__Trigger_SendGoal_Response *
mirs_msgs__action__Trigger_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_SendGoal_Response * msg = (mirs_msgs__action__Trigger_SendGoal_Response *)allocator.allocate(sizeof(mirs_msgs__action__Trigger_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mirs_msgs__action__Trigger_SendGoal_Response));
  bool success = mirs_msgs__action__Trigger_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mirs_msgs__action__Trigger_SendGoal_Response__destroy(mirs_msgs__action__Trigger_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mirs_msgs__action__Trigger_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mirs_msgs__action__Trigger_SendGoal_Response__Sequence__init(mirs_msgs__action__Trigger_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_SendGoal_Response * data = NULL;

  if (size) {
    data = (mirs_msgs__action__Trigger_SendGoal_Response *)allocator.zero_allocate(size, sizeof(mirs_msgs__action__Trigger_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mirs_msgs__action__Trigger_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mirs_msgs__action__Trigger_SendGoal_Response__fini(&data[i - 1]);
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
mirs_msgs__action__Trigger_SendGoal_Response__Sequence__fini(mirs_msgs__action__Trigger_SendGoal_Response__Sequence * array)
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
      mirs_msgs__action__Trigger_SendGoal_Response__fini(&array->data[i]);
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

mirs_msgs__action__Trigger_SendGoal_Response__Sequence *
mirs_msgs__action__Trigger_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_SendGoal_Response__Sequence * array = (mirs_msgs__action__Trigger_SendGoal_Response__Sequence *)allocator.allocate(sizeof(mirs_msgs__action__Trigger_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mirs_msgs__action__Trigger_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mirs_msgs__action__Trigger_SendGoal_Response__Sequence__destroy(mirs_msgs__action__Trigger_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mirs_msgs__action__Trigger_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mirs_msgs__action__Trigger_SendGoal_Response__Sequence__are_equal(const mirs_msgs__action__Trigger_SendGoal_Response__Sequence * lhs, const mirs_msgs__action__Trigger_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mirs_msgs__action__Trigger_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mirs_msgs__action__Trigger_SendGoal_Response__Sequence__copy(
  const mirs_msgs__action__Trigger_SendGoal_Response__Sequence * input,
  mirs_msgs__action__Trigger_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mirs_msgs__action__Trigger_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mirs_msgs__action__Trigger_SendGoal_Response * data =
      (mirs_msgs__action__Trigger_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mirs_msgs__action__Trigger_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mirs_msgs__action__Trigger_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mirs_msgs__action__Trigger_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
mirs_msgs__action__Trigger_GetResult_Request__init(mirs_msgs__action__Trigger_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mirs_msgs__action__Trigger_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
mirs_msgs__action__Trigger_GetResult_Request__fini(mirs_msgs__action__Trigger_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
mirs_msgs__action__Trigger_GetResult_Request__are_equal(const mirs_msgs__action__Trigger_GetResult_Request * lhs, const mirs_msgs__action__Trigger_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
mirs_msgs__action__Trigger_GetResult_Request__copy(
  const mirs_msgs__action__Trigger_GetResult_Request * input,
  mirs_msgs__action__Trigger_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

mirs_msgs__action__Trigger_GetResult_Request *
mirs_msgs__action__Trigger_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_GetResult_Request * msg = (mirs_msgs__action__Trigger_GetResult_Request *)allocator.allocate(sizeof(mirs_msgs__action__Trigger_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mirs_msgs__action__Trigger_GetResult_Request));
  bool success = mirs_msgs__action__Trigger_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mirs_msgs__action__Trigger_GetResult_Request__destroy(mirs_msgs__action__Trigger_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mirs_msgs__action__Trigger_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mirs_msgs__action__Trigger_GetResult_Request__Sequence__init(mirs_msgs__action__Trigger_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_GetResult_Request * data = NULL;

  if (size) {
    data = (mirs_msgs__action__Trigger_GetResult_Request *)allocator.zero_allocate(size, sizeof(mirs_msgs__action__Trigger_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mirs_msgs__action__Trigger_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mirs_msgs__action__Trigger_GetResult_Request__fini(&data[i - 1]);
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
mirs_msgs__action__Trigger_GetResult_Request__Sequence__fini(mirs_msgs__action__Trigger_GetResult_Request__Sequence * array)
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
      mirs_msgs__action__Trigger_GetResult_Request__fini(&array->data[i]);
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

mirs_msgs__action__Trigger_GetResult_Request__Sequence *
mirs_msgs__action__Trigger_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_GetResult_Request__Sequence * array = (mirs_msgs__action__Trigger_GetResult_Request__Sequence *)allocator.allocate(sizeof(mirs_msgs__action__Trigger_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mirs_msgs__action__Trigger_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mirs_msgs__action__Trigger_GetResult_Request__Sequence__destroy(mirs_msgs__action__Trigger_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mirs_msgs__action__Trigger_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mirs_msgs__action__Trigger_GetResult_Request__Sequence__are_equal(const mirs_msgs__action__Trigger_GetResult_Request__Sequence * lhs, const mirs_msgs__action__Trigger_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mirs_msgs__action__Trigger_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mirs_msgs__action__Trigger_GetResult_Request__Sequence__copy(
  const mirs_msgs__action__Trigger_GetResult_Request__Sequence * input,
  mirs_msgs__action__Trigger_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mirs_msgs__action__Trigger_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mirs_msgs__action__Trigger_GetResult_Request * data =
      (mirs_msgs__action__Trigger_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mirs_msgs__action__Trigger_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mirs_msgs__action__Trigger_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mirs_msgs__action__Trigger_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "mirs_msgs/action/detail/trigger__functions.h"

bool
mirs_msgs__action__Trigger_GetResult_Response__init(mirs_msgs__action__Trigger_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!mirs_msgs__action__Trigger_Result__init(&msg->result)) {
    mirs_msgs__action__Trigger_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
mirs_msgs__action__Trigger_GetResult_Response__fini(mirs_msgs__action__Trigger_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  mirs_msgs__action__Trigger_Result__fini(&msg->result);
}

bool
mirs_msgs__action__Trigger_GetResult_Response__are_equal(const mirs_msgs__action__Trigger_GetResult_Response * lhs, const mirs_msgs__action__Trigger_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!mirs_msgs__action__Trigger_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
mirs_msgs__action__Trigger_GetResult_Response__copy(
  const mirs_msgs__action__Trigger_GetResult_Response * input,
  mirs_msgs__action__Trigger_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!mirs_msgs__action__Trigger_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

mirs_msgs__action__Trigger_GetResult_Response *
mirs_msgs__action__Trigger_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_GetResult_Response * msg = (mirs_msgs__action__Trigger_GetResult_Response *)allocator.allocate(sizeof(mirs_msgs__action__Trigger_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mirs_msgs__action__Trigger_GetResult_Response));
  bool success = mirs_msgs__action__Trigger_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mirs_msgs__action__Trigger_GetResult_Response__destroy(mirs_msgs__action__Trigger_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mirs_msgs__action__Trigger_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mirs_msgs__action__Trigger_GetResult_Response__Sequence__init(mirs_msgs__action__Trigger_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_GetResult_Response * data = NULL;

  if (size) {
    data = (mirs_msgs__action__Trigger_GetResult_Response *)allocator.zero_allocate(size, sizeof(mirs_msgs__action__Trigger_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mirs_msgs__action__Trigger_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mirs_msgs__action__Trigger_GetResult_Response__fini(&data[i - 1]);
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
mirs_msgs__action__Trigger_GetResult_Response__Sequence__fini(mirs_msgs__action__Trigger_GetResult_Response__Sequence * array)
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
      mirs_msgs__action__Trigger_GetResult_Response__fini(&array->data[i]);
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

mirs_msgs__action__Trigger_GetResult_Response__Sequence *
mirs_msgs__action__Trigger_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_GetResult_Response__Sequence * array = (mirs_msgs__action__Trigger_GetResult_Response__Sequence *)allocator.allocate(sizeof(mirs_msgs__action__Trigger_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mirs_msgs__action__Trigger_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mirs_msgs__action__Trigger_GetResult_Response__Sequence__destroy(mirs_msgs__action__Trigger_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mirs_msgs__action__Trigger_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mirs_msgs__action__Trigger_GetResult_Response__Sequence__are_equal(const mirs_msgs__action__Trigger_GetResult_Response__Sequence * lhs, const mirs_msgs__action__Trigger_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mirs_msgs__action__Trigger_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mirs_msgs__action__Trigger_GetResult_Response__Sequence__copy(
  const mirs_msgs__action__Trigger_GetResult_Response__Sequence * input,
  mirs_msgs__action__Trigger_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mirs_msgs__action__Trigger_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mirs_msgs__action__Trigger_GetResult_Response * data =
      (mirs_msgs__action__Trigger_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mirs_msgs__action__Trigger_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mirs_msgs__action__Trigger_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mirs_msgs__action__Trigger_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "mirs_msgs/action/detail/trigger__functions.h"

bool
mirs_msgs__action__Trigger_FeedbackMessage__init(mirs_msgs__action__Trigger_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mirs_msgs__action__Trigger_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!mirs_msgs__action__Trigger_Feedback__init(&msg->feedback)) {
    mirs_msgs__action__Trigger_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
mirs_msgs__action__Trigger_FeedbackMessage__fini(mirs_msgs__action__Trigger_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  mirs_msgs__action__Trigger_Feedback__fini(&msg->feedback);
}

bool
mirs_msgs__action__Trigger_FeedbackMessage__are_equal(const mirs_msgs__action__Trigger_FeedbackMessage * lhs, const mirs_msgs__action__Trigger_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!mirs_msgs__action__Trigger_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
mirs_msgs__action__Trigger_FeedbackMessage__copy(
  const mirs_msgs__action__Trigger_FeedbackMessage * input,
  mirs_msgs__action__Trigger_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!mirs_msgs__action__Trigger_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

mirs_msgs__action__Trigger_FeedbackMessage *
mirs_msgs__action__Trigger_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_FeedbackMessage * msg = (mirs_msgs__action__Trigger_FeedbackMessage *)allocator.allocate(sizeof(mirs_msgs__action__Trigger_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mirs_msgs__action__Trigger_FeedbackMessage));
  bool success = mirs_msgs__action__Trigger_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mirs_msgs__action__Trigger_FeedbackMessage__destroy(mirs_msgs__action__Trigger_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mirs_msgs__action__Trigger_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mirs_msgs__action__Trigger_FeedbackMessage__Sequence__init(mirs_msgs__action__Trigger_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_FeedbackMessage * data = NULL;

  if (size) {
    data = (mirs_msgs__action__Trigger_FeedbackMessage *)allocator.zero_allocate(size, sizeof(mirs_msgs__action__Trigger_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mirs_msgs__action__Trigger_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mirs_msgs__action__Trigger_FeedbackMessage__fini(&data[i - 1]);
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
mirs_msgs__action__Trigger_FeedbackMessage__Sequence__fini(mirs_msgs__action__Trigger_FeedbackMessage__Sequence * array)
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
      mirs_msgs__action__Trigger_FeedbackMessage__fini(&array->data[i]);
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

mirs_msgs__action__Trigger_FeedbackMessage__Sequence *
mirs_msgs__action__Trigger_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mirs_msgs__action__Trigger_FeedbackMessage__Sequence * array = (mirs_msgs__action__Trigger_FeedbackMessage__Sequence *)allocator.allocate(sizeof(mirs_msgs__action__Trigger_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mirs_msgs__action__Trigger_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mirs_msgs__action__Trigger_FeedbackMessage__Sequence__destroy(mirs_msgs__action__Trigger_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mirs_msgs__action__Trigger_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mirs_msgs__action__Trigger_FeedbackMessage__Sequence__are_equal(const mirs_msgs__action__Trigger_FeedbackMessage__Sequence * lhs, const mirs_msgs__action__Trigger_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mirs_msgs__action__Trigger_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mirs_msgs__action__Trigger_FeedbackMessage__Sequence__copy(
  const mirs_msgs__action__Trigger_FeedbackMessage__Sequence * input,
  mirs_msgs__action__Trigger_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mirs_msgs__action__Trigger_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mirs_msgs__action__Trigger_FeedbackMessage * data =
      (mirs_msgs__action__Trigger_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mirs_msgs__action__Trigger_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mirs_msgs__action__Trigger_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mirs_msgs__action__Trigger_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
