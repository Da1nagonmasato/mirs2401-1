// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mirs_msgs:srv/BasicCommand.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "mirs_msgs/srv/detail/basic_command__struct.h"
#include "mirs_msgs/srv/detail/basic_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mirs_msgs__srv__basic_command__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("mirs_msgs.srv._basic_command.BasicCommand_Request", full_classname_dest, 49) == 0);
  }
  mirs_msgs__srv__BasicCommand_Request * ros_message = _ros_message;
  {  // param1
    PyObject * field = PyObject_GetAttrString(_pymsg, "param1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // param2
    PyObject * field = PyObject_GetAttrString(_pymsg, "param2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // param3
    PyObject * field = PyObject_GetAttrString(_pymsg, "param3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // param4
    PyObject * field = PyObject_GetAttrString(_pymsg, "param4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mirs_msgs__srv__basic_command__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BasicCommand_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mirs_msgs.srv._basic_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BasicCommand_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mirs_msgs__srv__BasicCommand_Request * ros_message = (mirs_msgs__srv__BasicCommand_Request *)raw_ros_message;
  {  // param1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "mirs_msgs/srv/detail/basic_command__struct.h"
// already included above
// #include "mirs_msgs/srv/detail/basic_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mirs_msgs__srv__basic_command__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("mirs_msgs.srv._basic_command.BasicCommand_Response", full_classname_dest, 50) == 0);
  }
  mirs_msgs__srv__BasicCommand_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mirs_msgs__srv__basic_command__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BasicCommand_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mirs_msgs.srv._basic_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BasicCommand_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mirs_msgs__srv__BasicCommand_Response * ros_message = (mirs_msgs__srv__BasicCommand_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
