# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleStatusFlags.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleStatusFlags(type):
    """Metaclass of message 'VehicleStatusFlags'."""

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
            module = import_type_support('px4_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_msgs.msg.VehicleStatusFlags')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_status_flags
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_status_flags
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_status_flags
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_status_flags
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_status_flags

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleStatusFlags(metaclass=Metaclass_VehicleStatusFlags):
    """Message class 'VehicleStatusFlags'."""

    __slots__ = [
        '_timestamp',
        '_condition_calibration_enabled',
        '_condition_system_sensors_initialized',
        '_condition_system_hotplug_timeout',
        '_condition_system_returned_to_home',
        '_condition_auto_mission_available',
        '_condition_angular_velocity_valid',
        '_condition_attitude_valid',
        '_condition_local_altitude_valid',
        '_condition_local_position_valid',
        '_condition_local_velocity_valid',
        '_condition_global_position_valid',
        '_condition_home_position_valid',
        '_condition_power_input_valid',
        '_condition_battery_healthy',
        '_condition_escs_error',
        '_condition_escs_failure',
        '_circuit_breaker_engaged_power_check',
        '_circuit_breaker_engaged_airspd_check',
        '_circuit_breaker_engaged_enginefailure_check',
        '_circuit_breaker_flight_termination_disabled',
        '_circuit_breaker_engaged_usb_check',
        '_circuit_breaker_engaged_posfailure_check',
        '_circuit_breaker_vtol_fw_arming_check',
        '_offboard_control_signal_lost',
        '_rc_signal_found_once',
        '_rc_input_blocked',
        '_rc_calibration_valid',
        '_vtol_transition_failure',
        '_usb_connected',
        '_sd_card_detected_once',
        '_avoidance_system_required',
        '_avoidance_system_valid',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'condition_calibration_enabled': 'boolean',
        'condition_system_sensors_initialized': 'boolean',
        'condition_system_hotplug_timeout': 'boolean',
        'condition_system_returned_to_home': 'boolean',
        'condition_auto_mission_available': 'boolean',
        'condition_angular_velocity_valid': 'boolean',
        'condition_attitude_valid': 'boolean',
        'condition_local_altitude_valid': 'boolean',
        'condition_local_position_valid': 'boolean',
        'condition_local_velocity_valid': 'boolean',
        'condition_global_position_valid': 'boolean',
        'condition_home_position_valid': 'boolean',
        'condition_power_input_valid': 'boolean',
        'condition_battery_healthy': 'boolean',
        'condition_escs_error': 'boolean',
        'condition_escs_failure': 'boolean',
        'circuit_breaker_engaged_power_check': 'boolean',
        'circuit_breaker_engaged_airspd_check': 'boolean',
        'circuit_breaker_engaged_enginefailure_check': 'boolean',
        'circuit_breaker_flight_termination_disabled': 'boolean',
        'circuit_breaker_engaged_usb_check': 'boolean',
        'circuit_breaker_engaged_posfailure_check': 'boolean',
        'circuit_breaker_vtol_fw_arming_check': 'boolean',
        'offboard_control_signal_lost': 'boolean',
        'rc_signal_found_once': 'boolean',
        'rc_input_blocked': 'boolean',
        'rc_calibration_valid': 'boolean',
        'vtol_transition_failure': 'boolean',
        'usb_connected': 'boolean',
        'sd_card_detected_once': 'boolean',
        'avoidance_system_required': 'boolean',
        'avoidance_system_valid': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.condition_calibration_enabled = kwargs.get('condition_calibration_enabled', bool())
        self.condition_system_sensors_initialized = kwargs.get('condition_system_sensors_initialized', bool())
        self.condition_system_hotplug_timeout = kwargs.get('condition_system_hotplug_timeout', bool())
        self.condition_system_returned_to_home = kwargs.get('condition_system_returned_to_home', bool())
        self.condition_auto_mission_available = kwargs.get('condition_auto_mission_available', bool())
        self.condition_angular_velocity_valid = kwargs.get('condition_angular_velocity_valid', bool())
        self.condition_attitude_valid = kwargs.get('condition_attitude_valid', bool())
        self.condition_local_altitude_valid = kwargs.get('condition_local_altitude_valid', bool())
        self.condition_local_position_valid = kwargs.get('condition_local_position_valid', bool())
        self.condition_local_velocity_valid = kwargs.get('condition_local_velocity_valid', bool())
        self.condition_global_position_valid = kwargs.get('condition_global_position_valid', bool())
        self.condition_home_position_valid = kwargs.get('condition_home_position_valid', bool())
        self.condition_power_input_valid = kwargs.get('condition_power_input_valid', bool())
        self.condition_battery_healthy = kwargs.get('condition_battery_healthy', bool())
        self.condition_escs_error = kwargs.get('condition_escs_error', bool())
        self.condition_escs_failure = kwargs.get('condition_escs_failure', bool())
        self.circuit_breaker_engaged_power_check = kwargs.get('circuit_breaker_engaged_power_check', bool())
        self.circuit_breaker_engaged_airspd_check = kwargs.get('circuit_breaker_engaged_airspd_check', bool())
        self.circuit_breaker_engaged_enginefailure_check = kwargs.get('circuit_breaker_engaged_enginefailure_check', bool())
        self.circuit_breaker_flight_termination_disabled = kwargs.get('circuit_breaker_flight_termination_disabled', bool())
        self.circuit_breaker_engaged_usb_check = kwargs.get('circuit_breaker_engaged_usb_check', bool())
        self.circuit_breaker_engaged_posfailure_check = kwargs.get('circuit_breaker_engaged_posfailure_check', bool())
        self.circuit_breaker_vtol_fw_arming_check = kwargs.get('circuit_breaker_vtol_fw_arming_check', bool())
        self.offboard_control_signal_lost = kwargs.get('offboard_control_signal_lost', bool())
        self.rc_signal_found_once = kwargs.get('rc_signal_found_once', bool())
        self.rc_input_blocked = kwargs.get('rc_input_blocked', bool())
        self.rc_calibration_valid = kwargs.get('rc_calibration_valid', bool())
        self.vtol_transition_failure = kwargs.get('vtol_transition_failure', bool())
        self.usb_connected = kwargs.get('usb_connected', bool())
        self.sd_card_detected_once = kwargs.get('sd_card_detected_once', bool())
        self.avoidance_system_required = kwargs.get('avoidance_system_required', bool())
        self.avoidance_system_valid = kwargs.get('avoidance_system_valid', bool())

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
        if self.timestamp != other.timestamp:
            return False
        if self.condition_calibration_enabled != other.condition_calibration_enabled:
            return False
        if self.condition_system_sensors_initialized != other.condition_system_sensors_initialized:
            return False
        if self.condition_system_hotplug_timeout != other.condition_system_hotplug_timeout:
            return False
        if self.condition_system_returned_to_home != other.condition_system_returned_to_home:
            return False
        if self.condition_auto_mission_available != other.condition_auto_mission_available:
            return False
        if self.condition_angular_velocity_valid != other.condition_angular_velocity_valid:
            return False
        if self.condition_attitude_valid != other.condition_attitude_valid:
            return False
        if self.condition_local_altitude_valid != other.condition_local_altitude_valid:
            return False
        if self.condition_local_position_valid != other.condition_local_position_valid:
            return False
        if self.condition_local_velocity_valid != other.condition_local_velocity_valid:
            return False
        if self.condition_global_position_valid != other.condition_global_position_valid:
            return False
        if self.condition_home_position_valid != other.condition_home_position_valid:
            return False
        if self.condition_power_input_valid != other.condition_power_input_valid:
            return False
        if self.condition_battery_healthy != other.condition_battery_healthy:
            return False
        if self.condition_escs_error != other.condition_escs_error:
            return False
        if self.condition_escs_failure != other.condition_escs_failure:
            return False
        if self.circuit_breaker_engaged_power_check != other.circuit_breaker_engaged_power_check:
            return False
        if self.circuit_breaker_engaged_airspd_check != other.circuit_breaker_engaged_airspd_check:
            return False
        if self.circuit_breaker_engaged_enginefailure_check != other.circuit_breaker_engaged_enginefailure_check:
            return False
        if self.circuit_breaker_flight_termination_disabled != other.circuit_breaker_flight_termination_disabled:
            return False
        if self.circuit_breaker_engaged_usb_check != other.circuit_breaker_engaged_usb_check:
            return False
        if self.circuit_breaker_engaged_posfailure_check != other.circuit_breaker_engaged_posfailure_check:
            return False
        if self.circuit_breaker_vtol_fw_arming_check != other.circuit_breaker_vtol_fw_arming_check:
            return False
        if self.offboard_control_signal_lost != other.offboard_control_signal_lost:
            return False
        if self.rc_signal_found_once != other.rc_signal_found_once:
            return False
        if self.rc_input_blocked != other.rc_input_blocked:
            return False
        if self.rc_calibration_valid != other.rc_calibration_valid:
            return False
        if self.vtol_transition_failure != other.vtol_transition_failure:
            return False
        if self.usb_connected != other.usb_connected:
            return False
        if self.sd_card_detected_once != other.sd_card_detected_once:
            return False
        if self.avoidance_system_required != other.avoidance_system_required:
            return False
        if self.avoidance_system_valid != other.avoidance_system_valid:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @property
    def condition_calibration_enabled(self):
        """Message field 'condition_calibration_enabled'."""
        return self._condition_calibration_enabled

    @condition_calibration_enabled.setter
    def condition_calibration_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'condition_calibration_enabled' field must be of type 'bool'"
        self._condition_calibration_enabled = value

    @property
    def condition_system_sensors_initialized(self):
        """Message field 'condition_system_sensors_initialized'."""
        return self._condition_system_sensors_initialized

    @condition_system_sensors_initialized.setter
    def condition_system_sensors_initialized(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'condition_system_sensors_initialized' field must be of type 'bool'"
        self._condition_system_sensors_initialized = value

    @property
    def condition_system_hotplug_timeout(self):
        """Message field 'condition_system_hotplug_timeout'."""
        return self._condition_system_hotplug_timeout

    @condition_system_hotplug_timeout.setter
    def condition_system_hotplug_timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'condition_system_hotplug_timeout' field must be of type 'bool'"
        self._condition_system_hotplug_timeout = value

    @property
    def condition_system_returned_to_home(self):
        """Message field 'condition_system_returned_to_home'."""
        return self._condition_system_returned_to_home

    @condition_system_returned_to_home.setter
    def condition_system_returned_to_home(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'condition_system_returned_to_home' field must be of type 'bool'"
        self._condition_system_returned_to_home = value

    @property
    def condition_auto_mission_available(self):
        """Message field 'condition_auto_mission_available'."""
        return self._condition_auto_mission_available

    @condition_auto_mission_available.setter
    def condition_auto_mission_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'condition_auto_mission_available' field must be of type 'bool'"
        self._condition_auto_mission_available = value

    @property
    def condition_angular_velocity_valid(self):
        """Message field 'condition_angular_velocity_valid'."""
        return self._condition_angular_velocity_valid

    @condition_angular_velocity_valid.setter
    def condition_angular_velocity_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'condition_angular_velocity_valid' field must be of type 'bool'"
        self._condition_angular_velocity_valid = value

    @property
    def condition_attitude_valid(self):
        """Message field 'condition_attitude_valid'."""
        return self._condition_attitude_valid

    @condition_attitude_valid.setter
    def condition_attitude_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'condition_attitude_valid' field must be of type 'bool'"
        self._condition_attitude_valid = value

    @property
    def condition_local_altitude_valid(self):
        """Message field 'condition_local_altitude_valid'."""
        return self._condition_local_altitude_valid

    @condition_local_altitude_valid.setter
    def condition_local_altitude_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'condition_local_altitude_valid' field must be of type 'bool'"
        self._condition_local_altitude_valid = value

    @property
    def condition_local_position_valid(self):
        """Message field 'condition_local_position_valid'."""
        return self._condition_local_position_valid

    @condition_local_position_valid.setter
    def condition_local_position_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'condition_local_position_valid' field must be of type 'bool'"
        self._condition_local_position_valid = value

    @property
    def condition_local_velocity_valid(self):
        """Message field 'condition_local_velocity_valid'."""
        return self._condition_local_velocity_valid

    @condition_local_velocity_valid.setter
    def condition_local_velocity_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'condition_local_velocity_valid' field must be of type 'bool'"
        self._condition_local_velocity_valid = value

    @property
    def condition_global_position_valid(self):
        """Message field 'condition_global_position_valid'."""
        return self._condition_global_position_valid

    @condition_global_position_valid.setter
    def condition_global_position_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'condition_global_position_valid' field must be of type 'bool'"
        self._condition_global_position_valid = value

    @property
    def condition_home_position_valid(self):
        """Message field 'condition_home_position_valid'."""
        return self._condition_home_position_valid

    @condition_home_position_valid.setter
    def condition_home_position_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'condition_home_position_valid' field must be of type 'bool'"
        self._condition_home_position_valid = value

    @property
    def condition_power_input_valid(self):
        """Message field 'condition_power_input_valid'."""
        return self._condition_power_input_valid

    @condition_power_input_valid.setter
    def condition_power_input_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'condition_power_input_valid' field must be of type 'bool'"
        self._condition_power_input_valid = value

    @property
    def condition_battery_healthy(self):
        """Message field 'condition_battery_healthy'."""
        return self._condition_battery_healthy

    @condition_battery_healthy.setter
    def condition_battery_healthy(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'condition_battery_healthy' field must be of type 'bool'"
        self._condition_battery_healthy = value

    @property
    def condition_escs_error(self):
        """Message field 'condition_escs_error'."""
        return self._condition_escs_error

    @condition_escs_error.setter
    def condition_escs_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'condition_escs_error' field must be of type 'bool'"
        self._condition_escs_error = value

    @property
    def condition_escs_failure(self):
        """Message field 'condition_escs_failure'."""
        return self._condition_escs_failure

    @condition_escs_failure.setter
    def condition_escs_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'condition_escs_failure' field must be of type 'bool'"
        self._condition_escs_failure = value

    @property
    def circuit_breaker_engaged_power_check(self):
        """Message field 'circuit_breaker_engaged_power_check'."""
        return self._circuit_breaker_engaged_power_check

    @circuit_breaker_engaged_power_check.setter
    def circuit_breaker_engaged_power_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'circuit_breaker_engaged_power_check' field must be of type 'bool'"
        self._circuit_breaker_engaged_power_check = value

    @property
    def circuit_breaker_engaged_airspd_check(self):
        """Message field 'circuit_breaker_engaged_airspd_check'."""
        return self._circuit_breaker_engaged_airspd_check

    @circuit_breaker_engaged_airspd_check.setter
    def circuit_breaker_engaged_airspd_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'circuit_breaker_engaged_airspd_check' field must be of type 'bool'"
        self._circuit_breaker_engaged_airspd_check = value

    @property
    def circuit_breaker_engaged_enginefailure_check(self):
        """Message field 'circuit_breaker_engaged_enginefailure_check'."""
        return self._circuit_breaker_engaged_enginefailure_check

    @circuit_breaker_engaged_enginefailure_check.setter
    def circuit_breaker_engaged_enginefailure_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'circuit_breaker_engaged_enginefailure_check' field must be of type 'bool'"
        self._circuit_breaker_engaged_enginefailure_check = value

    @property
    def circuit_breaker_flight_termination_disabled(self):
        """Message field 'circuit_breaker_flight_termination_disabled'."""
        return self._circuit_breaker_flight_termination_disabled

    @circuit_breaker_flight_termination_disabled.setter
    def circuit_breaker_flight_termination_disabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'circuit_breaker_flight_termination_disabled' field must be of type 'bool'"
        self._circuit_breaker_flight_termination_disabled = value

    @property
    def circuit_breaker_engaged_usb_check(self):
        """Message field 'circuit_breaker_engaged_usb_check'."""
        return self._circuit_breaker_engaged_usb_check

    @circuit_breaker_engaged_usb_check.setter
    def circuit_breaker_engaged_usb_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'circuit_breaker_engaged_usb_check' field must be of type 'bool'"
        self._circuit_breaker_engaged_usb_check = value

    @property
    def circuit_breaker_engaged_posfailure_check(self):
        """Message field 'circuit_breaker_engaged_posfailure_check'."""
        return self._circuit_breaker_engaged_posfailure_check

    @circuit_breaker_engaged_posfailure_check.setter
    def circuit_breaker_engaged_posfailure_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'circuit_breaker_engaged_posfailure_check' field must be of type 'bool'"
        self._circuit_breaker_engaged_posfailure_check = value

    @property
    def circuit_breaker_vtol_fw_arming_check(self):
        """Message field 'circuit_breaker_vtol_fw_arming_check'."""
        return self._circuit_breaker_vtol_fw_arming_check

    @circuit_breaker_vtol_fw_arming_check.setter
    def circuit_breaker_vtol_fw_arming_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'circuit_breaker_vtol_fw_arming_check' field must be of type 'bool'"
        self._circuit_breaker_vtol_fw_arming_check = value

    @property
    def offboard_control_signal_lost(self):
        """Message field 'offboard_control_signal_lost'."""
        return self._offboard_control_signal_lost

    @offboard_control_signal_lost.setter
    def offboard_control_signal_lost(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'offboard_control_signal_lost' field must be of type 'bool'"
        self._offboard_control_signal_lost = value

    @property
    def rc_signal_found_once(self):
        """Message field 'rc_signal_found_once'."""
        return self._rc_signal_found_once

    @rc_signal_found_once.setter
    def rc_signal_found_once(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rc_signal_found_once' field must be of type 'bool'"
        self._rc_signal_found_once = value

    @property
    def rc_input_blocked(self):
        """Message field 'rc_input_blocked'."""
        return self._rc_input_blocked

    @rc_input_blocked.setter
    def rc_input_blocked(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rc_input_blocked' field must be of type 'bool'"
        self._rc_input_blocked = value

    @property
    def rc_calibration_valid(self):
        """Message field 'rc_calibration_valid'."""
        return self._rc_calibration_valid

    @rc_calibration_valid.setter
    def rc_calibration_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rc_calibration_valid' field must be of type 'bool'"
        self._rc_calibration_valid = value

    @property
    def vtol_transition_failure(self):
        """Message field 'vtol_transition_failure'."""
        return self._vtol_transition_failure

    @vtol_transition_failure.setter
    def vtol_transition_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vtol_transition_failure' field must be of type 'bool'"
        self._vtol_transition_failure = value

    @property
    def usb_connected(self):
        """Message field 'usb_connected'."""
        return self._usb_connected

    @usb_connected.setter
    def usb_connected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'usb_connected' field must be of type 'bool'"
        self._usb_connected = value

    @property
    def sd_card_detected_once(self):
        """Message field 'sd_card_detected_once'."""
        return self._sd_card_detected_once

    @sd_card_detected_once.setter
    def sd_card_detected_once(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'sd_card_detected_once' field must be of type 'bool'"
        self._sd_card_detected_once = value

    @property
    def avoidance_system_required(self):
        """Message field 'avoidance_system_required'."""
        return self._avoidance_system_required

    @avoidance_system_required.setter
    def avoidance_system_required(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'avoidance_system_required' field must be of type 'bool'"
        self._avoidance_system_required = value

    @property
    def avoidance_system_valid(self):
        """Message field 'avoidance_system_valid'."""
        return self._avoidance_system_valid

    @avoidance_system_valid.setter
    def avoidance_system_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'avoidance_system_valid' field must be of type 'bool'"
        self._avoidance_system_valid = value
