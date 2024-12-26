# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mirs_msgs:srv/BasicCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BasicCommand_Request(type):
    """Metaclass of message 'BasicCommand_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mirs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mirs_msgs.srv.BasicCommand_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__basic_command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__basic_command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__basic_command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__basic_command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__basic_command__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BasicCommand_Request(metaclass=Metaclass_BasicCommand_Request):
    """Message class 'BasicCommand_Request'."""

    __slots__ = [
        '_param1',
        '_param2',
        '_param3',
        '_param4',
    ]

    _fields_and_field_types = {
        'param1': 'double',
        'param2': 'double',
        'param3': 'double',
        'param4': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.param1 = kwargs.get('param1', float())
        self.param2 = kwargs.get('param2', float())
        self.param3 = kwargs.get('param3', float())
        self.param4 = kwargs.get('param4', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.param1 != other.param1:
            return False
        if self.param2 != other.param2:
            return False
        if self.param3 != other.param3:
            return False
        if self.param4 != other.param4:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def param1(self):
        """Message field 'param1'."""
        return self._param1

    @param1.setter
    def param1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'param1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'param1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._param1 = value

    @builtins.property
    def param2(self):
        """Message field 'param2'."""
        return self._param2

    @param2.setter
    def param2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'param2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'param2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._param2 = value

    @builtins.property
    def param3(self):
        """Message field 'param3'."""
        return self._param3

    @param3.setter
    def param3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'param3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'param3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._param3 = value

    @builtins.property
    def param4(self):
        """Message field 'param4'."""
        return self._param4

    @param4.setter
    def param4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'param4' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'param4' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._param4 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_BasicCommand_Response(type):
    """Metaclass of message 'BasicCommand_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mirs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mirs_msgs.srv.BasicCommand_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__basic_command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__basic_command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__basic_command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__basic_command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__basic_command__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BasicCommand_Response(metaclass=Metaclass_BasicCommand_Response):
    """Message class 'BasicCommand_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_BasicCommand(type):
    """Metaclass of service 'BasicCommand'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mirs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mirs_msgs.srv.BasicCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__basic_command

            from mirs_msgs.srv import _basic_command
            if _basic_command.Metaclass_BasicCommand_Request._TYPE_SUPPORT is None:
                _basic_command.Metaclass_BasicCommand_Request.__import_type_support__()
            if _basic_command.Metaclass_BasicCommand_Response._TYPE_SUPPORT is None:
                _basic_command.Metaclass_BasicCommand_Response.__import_type_support__()


class BasicCommand(metaclass=Metaclass_BasicCommand):
    from mirs_msgs.srv._basic_command import BasicCommand_Request as Request
    from mirs_msgs.srv._basic_command import BasicCommand_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
