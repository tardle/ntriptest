# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mavros_msgs:msg/OpenDroneIDSystem.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OpenDroneIDSystem(type):
    """Metaclass of message 'OpenDroneIDSystem'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LOCATION_TYPE_TAKEOFF': 0,
        'LOCATION_TYPE_LIVE_GNSS': 1,
        'LOCATION_TYPE_FIXED': 2,
        'CLASSIFICATION_TYPE_UNDECLARED': 0,
        'CLASSIFICATION_TYPE_EU': 1,
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
                'mavros_msgs.msg.OpenDroneIDSystem')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__open_drone_id_system
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__open_drone_id_system
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__open_drone_id_system
            cls._TYPE_SUPPORT = module.type_support_msg__msg__open_drone_id_system
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__open_drone_id_system

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LOCATION_TYPE_TAKEOFF': cls.__constants['LOCATION_TYPE_TAKEOFF'],
            'LOCATION_TYPE_LIVE_GNSS': cls.__constants['LOCATION_TYPE_LIVE_GNSS'],
            'LOCATION_TYPE_FIXED': cls.__constants['LOCATION_TYPE_FIXED'],
            'CLASSIFICATION_TYPE_UNDECLARED': cls.__constants['CLASSIFICATION_TYPE_UNDECLARED'],
            'CLASSIFICATION_TYPE_EU': cls.__constants['CLASSIFICATION_TYPE_EU'],
        }

    @property
    def LOCATION_TYPE_TAKEOFF(self):
        """Message constant 'LOCATION_TYPE_TAKEOFF'."""
        return Metaclass_OpenDroneIDSystem.__constants['LOCATION_TYPE_TAKEOFF']

    @property
    def LOCATION_TYPE_LIVE_GNSS(self):
        """Message constant 'LOCATION_TYPE_LIVE_GNSS'."""
        return Metaclass_OpenDroneIDSystem.__constants['LOCATION_TYPE_LIVE_GNSS']

    @property
    def LOCATION_TYPE_FIXED(self):
        """Message constant 'LOCATION_TYPE_FIXED'."""
        return Metaclass_OpenDroneIDSystem.__constants['LOCATION_TYPE_FIXED']

    @property
    def CLASSIFICATION_TYPE_UNDECLARED(self):
        """Message constant 'CLASSIFICATION_TYPE_UNDECLARED'."""
        return Metaclass_OpenDroneIDSystem.__constants['CLASSIFICATION_TYPE_UNDECLARED']

    @property
    def CLASSIFICATION_TYPE_EU(self):
        """Message constant 'CLASSIFICATION_TYPE_EU'."""
        return Metaclass_OpenDroneIDSystem.__constants['CLASSIFICATION_TYPE_EU']


class OpenDroneIDSystem(metaclass=Metaclass_OpenDroneIDSystem):
    """
    Message class 'OpenDroneIDSystem'.

    Constants:
      LOCATION_TYPE_TAKEOFF
      LOCATION_TYPE_LIVE_GNSS
      LOCATION_TYPE_FIXED
      CLASSIFICATION_TYPE_UNDECLARED
      CLASSIFICATION_TYPE_EU
    """

    __slots__ = [
        '_header',
        '_id_or_mac',
        '_operator_location_type',
        '_classification_type',
        '_operator_latitude',
        '_operator_longitude',
        '_area_count',
        '_area_radius',
        '_area_ceiling',
        '_area_floor',
        '_category_eu',
        '_class_eu',
        '_operator_altitude_geo',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id_or_mac': 'string',
        'operator_location_type': 'uint8',
        'classification_type': 'uint8',
        'operator_latitude': 'int32',
        'operator_longitude': 'int32',
        'area_count': 'uint16',
        'area_radius': 'uint16',
        'area_ceiling': 'float',
        'area_floor': 'float',
        'category_eu': 'uint8',
        'class_eu': 'uint8',
        'operator_altitude_geo': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.id_or_mac = kwargs.get('id_or_mac', str())
        self.operator_location_type = kwargs.get('operator_location_type', int())
        self.classification_type = kwargs.get('classification_type', int())
        self.operator_latitude = kwargs.get('operator_latitude', int())
        self.operator_longitude = kwargs.get('operator_longitude', int())
        self.area_count = kwargs.get('area_count', int())
        self.area_radius = kwargs.get('area_radius', int())
        self.area_ceiling = kwargs.get('area_ceiling', float())
        self.area_floor = kwargs.get('area_floor', float())
        self.category_eu = kwargs.get('category_eu', int())
        self.class_eu = kwargs.get('class_eu', int())
        self.operator_altitude_geo = kwargs.get('operator_altitude_geo', float())

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
        if self.operator_location_type != other.operator_location_type:
            return False
        if self.classification_type != other.classification_type:
            return False
        if self.operator_latitude != other.operator_latitude:
            return False
        if self.operator_longitude != other.operator_longitude:
            return False
        if self.area_count != other.area_count:
            return False
        if self.area_radius != other.area_radius:
            return False
        if self.area_ceiling != other.area_ceiling:
            return False
        if self.area_floor != other.area_floor:
            return False
        if self.category_eu != other.category_eu:
            return False
        if self.class_eu != other.class_eu:
            return False
        if self.operator_altitude_geo != other.operator_altitude_geo:
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
    def operator_location_type(self):
        """Message field 'operator_location_type'."""
        return self._operator_location_type

    @operator_location_type.setter
    def operator_location_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operator_location_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'operator_location_type' field must be an unsigned integer in [0, 255]"
        self._operator_location_type = value

    @builtins.property
    def classification_type(self):
        """Message field 'classification_type'."""
        return self._classification_type

    @classification_type.setter
    def classification_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'classification_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'classification_type' field must be an unsigned integer in [0, 255]"
        self._classification_type = value

    @builtins.property
    def operator_latitude(self):
        """Message field 'operator_latitude'."""
        return self._operator_latitude

    @operator_latitude.setter
    def operator_latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operator_latitude' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'operator_latitude' field must be an integer in [-2147483648, 2147483647]"
        self._operator_latitude = value

    @builtins.property
    def operator_longitude(self):
        """Message field 'operator_longitude'."""
        return self._operator_longitude

    @operator_longitude.setter
    def operator_longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operator_longitude' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'operator_longitude' field must be an integer in [-2147483648, 2147483647]"
        self._operator_longitude = value

    @builtins.property
    def area_count(self):
        """Message field 'area_count'."""
        return self._area_count

    @area_count.setter
    def area_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'area_count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'area_count' field must be an unsigned integer in [0, 65535]"
        self._area_count = value

    @builtins.property
    def area_radius(self):
        """Message field 'area_radius'."""
        return self._area_radius

    @area_radius.setter
    def area_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'area_radius' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'area_radius' field must be an unsigned integer in [0, 65535]"
        self._area_radius = value

    @builtins.property
    def area_ceiling(self):
        """Message field 'area_ceiling'."""
        return self._area_ceiling

    @area_ceiling.setter
    def area_ceiling(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'area_ceiling' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'area_ceiling' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._area_ceiling = value

    @builtins.property
    def area_floor(self):
        """Message field 'area_floor'."""
        return self._area_floor

    @area_floor.setter
    def area_floor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'area_floor' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'area_floor' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._area_floor = value

    @builtins.property
    def category_eu(self):
        """Message field 'category_eu'."""
        return self._category_eu

    @category_eu.setter
    def category_eu(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'category_eu' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'category_eu' field must be an unsigned integer in [0, 255]"
        self._category_eu = value

    @builtins.property
    def class_eu(self):
        """Message field 'class_eu'."""
        return self._class_eu

    @class_eu.setter
    def class_eu(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'class_eu' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'class_eu' field must be an unsigned integer in [0, 255]"
        self._class_eu = value

    @builtins.property
    def operator_altitude_geo(self):
        """Message field 'operator_altitude_geo'."""
        return self._operator_altitude_geo

    @operator_altitude_geo.setter
    def operator_altitude_geo(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'operator_altitude_geo' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'operator_altitude_geo' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._operator_altitude_geo = value
