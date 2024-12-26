// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mirs_msgs:msg/BasicParam.idl
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
#include "mirs_msgs/msg/detail/basic_param__struct.h"
#include "mirs_msgs/msg/detail/basic_param__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mirs_msgs__msg__basic_param__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("mirs_msgs.msg._basic_param.BasicParam", full_classname_dest, 37) == 0);
  }
  mirs_msgs__msg__BasicParam * ros_message = _ros_message;
  {  // wheel_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_radius = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_base
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_base");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->wheel_base = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rkp
    PyObject * field = PyObject_GetAttrString(_pymsg, "rkp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rkp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rki
    PyObject * field = PyObject_GetAttrString(_pymsg, "rki");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rki = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rkd
    PyObject * field = PyObject_GetAttrString(_pymsg, "rkd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rkd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lkp
    PyObject * field = PyObject_GetAttrString(_pymsg, "lkp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lkp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lki
    PyObject * field = PyObject_GetAttrString(_pymsg, "lki");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lki = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lkd
    PyObject * field = PyObject_GetAttrString(_pymsg, "lkd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lkd = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mirs_msgs__msg__basic_param__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BasicParam */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mirs_msgs.msg._basic_param");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BasicParam");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mirs_msgs__msg__BasicParam * ros_message = (mirs_msgs__msg__BasicParam *)raw_ros_message;
  {  // wheel_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_base
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->wheel_base);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_base", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rkp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rkp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rkp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rki
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rki);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rki", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rkd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rkd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rkd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lkp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lkp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lkp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lki
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lki);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lki", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lkd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lkd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lkd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
