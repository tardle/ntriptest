# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mavros_msgs:msg/OpenDroneIDSelfID.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OpenDroneIDSelfID(type):
    """Metaclass of message 'OpenDroneIDSelfID'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DESC_TYPE_TEXT': 0,
        'DESC_TYPE_EMERGENCY': 1,
        'DESC_TYPE_EXTENDED_STATUS': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mavros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mavros_msgs.msg.OpenDroneIDSelfID')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__open_drone_id_self_id
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__open_drone_id_self_id
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__open_drone_id_self_id
            cls._TYPE_SUPPORT = module.type_support_msg__msg__open_drone_id_self_id
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__open_drone_id_self_id

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DESC_TYPE_TEXT': cls.__constants['DESC_TYPE_TEXT'],
            'DESC_TYPE_EMERGENCY': cls.__constants['DESC_TYPE_EMERGENCY'],
            'DESC_TYPE_EXTENDED_STATUS': cls.__constants['DESC_TYPE_EXTENDED_STATUS'],
        }

    @property
    def DESC_TYPE_TEXT(self):
        """Message constant 'DESC_TYPE_TEXT'."""
        return Metaclass_OpenDroneIDSelfID.__constants['DESC_TYPE_TEXT']

    @property
    def DESC_TYPE_EMERGENCY(self):
        """Message constant 'DESC_TYPE_EMERGENCY'."""
        return Metaclass_OpenDroneIDSelfID.__constants['DESC_TYPE_EMERGENCY']

    @property
    def DESC_TYPE_EXTENDED_STATUS(self):
        """Message constant 'DESC_TYPE_EXTENDED_STATUS'."""
        return Metaclass_OpenDroneIDSelfID.__constants['DESC_TYPE_EXTENDED_STATUS']


class OpenDroneIDSelfID(metaclass=Metaclass_OpenDroneIDSelfID):
    """
    Message class 'OpenDroneIDSelfID'.

    Constants:
      DESC_TYPE_TEXT
      DESC_TYPE_EMERGENCY
      DESC_TYPE_EXTENDED_STATUS
    """

    __slots__ = [
        '_header',
        '_id_or_mac',
        '_description_type',
        '_description',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id_or_mac': 'string',
        'description_type': 'uint8',
        'description': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.id_or_mac = kwargs.get('id_or_mac', str())
        self.description_type = kwargs.get('description_type', int())
        self.description = kwargs.get('description', str())

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
        if self.header != other.header:
            return False
        if self.id_or_mac != other.id_or_mac:
            return False
        if self.description_type != other.description_type:
            return False
        if self.description != other.description:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def id_or_mac(self):
        """Message field 'id_or_mac'."""
        return self._id_or_mac

    @id_or_mac.setter
    def id_or_mac(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id_or_mac' field must be of type 'str'"
        self._id_or_mac = value

    @builtins.property
    def description_type(self):
        """Message field 'description_type'."""
        return self._description_type

    @description_type.setter
    def description_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'description_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'description_type' field must be an unsigned integer in [0, 255]"
        self._description_type = value

    @builtins.property
    def description(self):
        """Message field 'description'."""
        return self._description

    @description.setter
    def description(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'description' field must be of type 'str'"
        self._description = value
