# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mirs_msgs:srv/ParameterUpdate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParameterUpdate_Request(type):
    """Metaclass of message 'ParameterUpdate_Request'."""

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
                'mirs_msgs.srv.ParameterUpdate_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__parameter_update__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__parameter_update__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__parameter_update__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__parameter_update__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__parameter_update__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ParameterUpdate_Request(metaclass=Metaclass_ParameterUpdate_Request):
    """Message class 'ParameterUpdate_Request'."""

    __slots__ = [
        '_wheel_radius',
        '_wheel_base',
        '_rkp',
        '_rki',
        '_rkd',
        '_lkp',
        '_lki',
        '_lkd',
    ]

    _fields_and_field_types = {
        'wheel_radius': 'double',
        'wheel_base': 'double',
        'rkp': 'double',
        'rki': 'double',
        'rkd': 'double',
        'lkp': 'double',
        'lki': 'double',
        'lkd': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.wheel_radius = kwargs.get('wheel_radius', float())
        self.wheel_base = kwargs.get('wheel_base', float())
        self.rkp = kwargs.get('rkp', float())
        self.rki = kwargs.get('rki', float())
        self.rkd = kwargs.get('rkd', float())
        self.lkp = kwargs.get('lkp', float())
        self.lki = kwargs.get('lki', float())
        self.lkd = kwargs.get('lkd', float())

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
        if self.wheel_radius != other.wheel_radius:
            return False
        if self.wheel_base != other.wheel_base:
            return False
        if self.rkp != other.rkp:
            return False
        if self.rki != other.rki:
            return False
        if self.rkd != other.rkd:
            return False
        if self.lkp != other.lkp:
            return False
        if self.lki != other.lki:
            return False
        if self.lkd != other.lkd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def wheel_radius(self):
        """Message field 'wheel_radius'."""
        return self._wheel_radius

    @wheel_radius.setter
    def wheel_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_radius' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheel_radius' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheel_radius = value

    @builtins.property
    def wheel_base(self):
        """Message field 'wheel_base'."""
        return self._wheel_base

    @wheel_base.setter
    def wheel_base(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wheel_base' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'wheel_base' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._wheel_base = value

    @builtins.property
    def rkp(self):
        """Message field 'rkp'."""
        return self._rkp

    @rkp.setter
    def rkp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rkp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rkp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rkp = value

    @builtins.property
    def rki(self):
        """Message field 'rki'."""
        return self._rki

    @rki.setter
    def rki(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rki' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rki' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rki = value

    @builtins.property
    def rkd(self):
        """Message field 'rkd'."""
        return self._rkd

    @rkd.setter
    def rkd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rkd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rkd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rkd = value

    @builtins.property
    def lkp(self):
        """Message field 'lkp'."""
        return self._lkp

    @lkp.setter
    def lkp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lkp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lkp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lkp = value

    @builtins.property
    def lki(self):
        """Message field 'lki'."""
        return self._lki

    @lki.setter
    def lki(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lki' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lki' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lki = value

    @builtins.property
    def lkd(self):
        """Message field 'lkd'."""
        return self._lkd

    @lkd.setter
    def lkd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lkd' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lkd' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lkd = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ParameterUpdate_Response(type):
    """Metaclass of message 'ParameterUpdate_Response'."""

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
                'mirs_msgs.srv.ParameterUpdate_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__parameter_update__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__parameter_update__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__parameter_update__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__parameter_update__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__parameter_update__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ParameterUpdate_Response(metaclass=Metaclass_ParameterUpdate_Response):
    """Message class 'ParameterUpdate_Response'."""

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


class Metaclass_ParameterUpdate(type):
    """Metaclass of service 'ParameterUpdate'."""

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
                'mirs_msgs.srv.ParameterUpdate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__parameter_update

            from mirs_msgs.srv import _parameter_update
            if _parameter_update.Metaclass_ParameterUpdate_Request._TYPE_SUPPORT is None:
                _parameter_update.Metaclass_ParameterUpdate_Request.__import_type_support__()
            if _parameter_update.Metaclass_ParameterUpdate_Response._TYPE_SUPPORT is None:
                _parameter_update.Metaclass_ParameterUpdate_Response.__import_type_support__()


class ParameterUpdate(metaclass=Metaclass_ParameterUpdate):
    from mirs_msgs.srv._parameter_update import ParameterUpdate_Request as Request
    from mirs_msgs.srv._parameter_update import ParameterUpdate_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
