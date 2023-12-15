// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/EstimatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__ESTIMATOR_STATUS__STRUCT_HPP_
#define PX4_MSGS__MSG__ESTIMATOR_STATUS__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__EstimatorStatus __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__EstimatorStatus __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstimatorStatus_
{
  using Type = EstimatorStatus_<ContainerAllocator>;

  explicit EstimatorStatus_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 3>::iterator, float>(this->vibe.begin(), this->vibe.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->output_tracking_error.begin(), this->output_tracking_error.end(), 0.0f);
      this->gps_check_fail_flags = 0;
      this->control_mode_flags = 0ul;
      this->filter_fault_flags = 0ul;
      this->pos_horiz_accuracy = 0.0f;
      this->pos_vert_accuracy = 0.0f;
      this->innovation_check_flags = 0;
      this->mag_test_ratio = 0.0f;
      this->vel_test_ratio = 0.0f;
      this->pos_test_ratio = 0.0f;
      this->hgt_test_ratio = 0.0f;
      this->tas_test_ratio = 0.0f;
      this->hagl_test_ratio = 0.0f;
      this->beta_test_ratio = 0.0f;
      this->solution_status_flags = 0;
      this->reset_count_vel_ne = 0;
      this->reset_count_vel_d = 0;
      this->reset_count_pos_ne = 0;
      this->reset_count_pod_d = 0;
      this->reset_count_quat = 0;
      this->time_slip = 0.0f;
      this->pre_flt_fail_innov_heading = false;
      this->pre_flt_fail_innov_vel_horiz = false;
      this->pre_flt_fail_innov_vel_vert = false;
      this->pre_flt_fail_innov_height = false;
      this->pre_flt_fail_mag_field_disturbed = false;
      this->accel_device_id = 0ul;
      this->gyro_device_id = 0ul;
      this->baro_device_id = 0ul;
      this->mag_device_id = 0ul;
      this->health_flags = 0;
      this->timeout_flags = 0;
    }
  }

  explicit EstimatorStatus_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : vibe(_alloc),
    output_tracking_error(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      std::fill<typename std::array<float, 3>::iterator, float>(this->vibe.begin(), this->vibe.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->output_tracking_error.begin(), this->output_tracking_error.end(), 0.0f);
      this->gps_check_fail_flags = 0;
      this->control_mode_flags = 0ul;
      this->filter_fault_flags = 0ul;
      this->pos_horiz_accuracy = 0.0f;
      this->pos_vert_accuracy = 0.0f;
      this->innovation_check_flags = 0;
      this->mag_test_ratio = 0.0f;
      this->vel_test_ratio = 0.0f;
      this->pos_test_ratio = 0.0f;
      this->hgt_test_ratio = 0.0f;
      this->tas_test_ratio = 0.0f;
      this->hagl_test_ratio = 0.0f;
      this->beta_test_ratio = 0.0f;
      this->solution_status_flags = 0;
      this->reset_count_vel_ne = 0;
      this->reset_count_vel_d = 0;
      this->reset_count_pos_ne = 0;
      this->reset_count_pod_d = 0;
      this->reset_count_quat = 0;
      this->time_slip = 0.0f;
      this->pre_flt_fail_innov_heading = false;
      this->pre_flt_fail_innov_vel_horiz = false;
      this->pre_flt_fail_innov_vel_vert = false;
      this->pre_flt_fail_innov_height = false;
      this->pre_flt_fail_mag_field_disturbed = false;
      this->accel_device_id = 0ul;
      this->gyro_device_id = 0ul;
      this->baro_device_id = 0ul;
      this->mag_device_id = 0ul;
      this->health_flags = 0;
      this->timeout_flags = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _vibe_type =
    std::array<float, 3>;
  _vibe_type vibe;
  using _output_tracking_error_type =
    std::array<float, 3>;
  _output_tracking_error_type output_tracking_error;
  using _gps_check_fail_flags_type =
    uint16_t;
  _gps_check_fail_flags_type gps_check_fail_flags;
  using _control_mode_flags_type =
    uint32_t;
  _control_mode_flags_type control_mode_flags;
  using _filter_fault_flags_type =
    uint32_t;
  _filter_fault_flags_type filter_fault_flags;
  using _pos_horiz_accuracy_type =
    float;
  _pos_horiz_accuracy_type pos_horiz_accuracy;
  using _pos_vert_accuracy_type =
    float;
  _pos_vert_accuracy_type pos_vert_accuracy;
  using _innovation_check_flags_type =
    uint16_t;
  _innovation_check_flags_type innovation_check_flags;
  using _mag_test_ratio_type =
    float;
  _mag_test_ratio_type mag_test_ratio;
  using _vel_test_ratio_type =
    float;
  _vel_test_ratio_type vel_test_ratio;
  using _pos_test_ratio_type =
    float;
  _pos_test_ratio_type pos_test_ratio;
  using _hgt_test_ratio_type =
    float;
  _hgt_test_ratio_type hgt_test_ratio;
  using _tas_test_ratio_type =
    float;
  _tas_test_ratio_type tas_test_ratio;
  using _hagl_test_ratio_type =
    float;
  _hagl_test_ratio_type hagl_test_ratio;
  using _beta_test_ratio_type =
    float;
  _beta_test_ratio_type beta_test_ratio;
  using _solution_status_flags_type =
    uint16_t;
  _solution_status_flags_type solution_status_flags;
  using _reset_count_vel_ne_type =
    uint8_t;
  _reset_count_vel_ne_type reset_count_vel_ne;
  using _reset_count_vel_d_type =
    uint8_t;
  _reset_count_vel_d_type reset_count_vel_d;
  using _reset_count_pos_ne_type =
    uint8_t;
  _reset_count_pos_ne_type reset_count_pos_ne;
  using _reset_count_pod_d_type =
    uint8_t;
  _reset_count_pod_d_type reset_count_pod_d;
  using _reset_count_quat_type =
    uint8_t;
  _reset_count_quat_type reset_count_quat;
  using _time_slip_type =
    float;
  _time_slip_type time_slip;
  using _pre_flt_fail_innov_heading_type =
    bool;
  _pre_flt_fail_innov_heading_type pre_flt_fail_innov_heading;
  using _pre_flt_fail_innov_vel_horiz_type =
    bool;
  _pre_flt_fail_innov_vel_horiz_type pre_flt_fail_innov_vel_horiz;
  using _pre_flt_fail_innov_vel_vert_type =
    bool;
  _pre_flt_fail_innov_vel_vert_type pre_flt_fail_innov_vel_vert;
  using _pre_flt_fail_innov_height_type =
    bool;
  _pre_flt_fail_innov_height_type pre_flt_fail_innov_height;
  using _pre_flt_fail_mag_field_disturbed_type =
    bool;
  _pre_flt_fail_mag_field_disturbed_type pre_flt_fail_mag_field_disturbed;
  using _accel_device_id_type =
    uint32_t;
  _accel_device_id_type accel_device_id;
  using _gyro_device_id_type =
    uint32_t;
  _gyro_device_id_type gyro_device_id;
  using _baro_device_id_type =
    uint32_t;
  _baro_device_id_type baro_device_id;
  using _mag_device_id_type =
    uint32_t;
  _mag_device_id_type mag_device_id;
  using _health_flags_type =
    uint8_t;
  _health_flags_type health_flags;
  using _timeout_flags_type =
    uint8_t;
  _timeout_flags_type timeout_flags;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_sample(
    const uint64_t & _arg)
  {
    this->timestamp_sample = _arg;
    return *this;
  }
  Type & set__vibe(
    const std::array<float, 3> & _arg)
  {
    this->vibe = _arg;
    return *this;
  }
  Type & set__output_tracking_error(
    const std::array<float, 3> & _arg)
  {
    this->output_tracking_error = _arg;
    return *this;
  }
  Type & set__gps_check_fail_flags(
    const uint16_t & _arg)
  {
    this->gps_check_fail_flags = _arg;
    return *this;
  }
  Type & set__control_mode_flags(
    const uint32_t & _arg)
  {
    this->control_mode_flags = _arg;
    return *this;
  }
  Type & set__filter_fault_flags(
    const uint32_t & _arg)
  {
    this->filter_fault_flags = _arg;
    return *this;
  }
  Type & set__pos_horiz_accuracy(
    const float & _arg)
  {
    this->pos_horiz_accuracy = _arg;
    return *this;
  }
  Type & set__pos_vert_accuracy(
    const float & _arg)
  {
    this->pos_vert_accuracy = _arg;
    return *this;
  }
  Type & set__innovation_check_flags(
    const uint16_t & _arg)
  {
    this->innovation_check_flags = _arg;
    return *this;
  }
  Type & set__mag_test_ratio(
    const float & _arg)
  {
    this->mag_test_ratio = _arg;
    return *this;
  }
  Type & set__vel_test_ratio(
    const float & _arg)
  {
    this->vel_test_ratio = _arg;
    return *this;
  }
  Type & set__pos_test_ratio(
    const float & _arg)
  {
    this->pos_test_ratio = _arg;
    return *this;
  }
  Type & set__hgt_test_ratio(
    const float & _arg)
  {
    this->hgt_test_ratio = _arg;
    return *this;
  }
  Type & set__tas_test_ratio(
    const float & _arg)
  {
    this->tas_test_ratio = _arg;
    return *this;
  }
  Type & set__hagl_test_ratio(
    const float & _arg)
  {
    this->hagl_test_ratio = _arg;
    return *this;
  }
  Type & set__beta_test_ratio(
    const float & _arg)
  {
    this->beta_test_ratio = _arg;
    return *this;
  }
  Type & set__solution_status_flags(
    const uint16_t & _arg)
  {
    this->solution_status_flags = _arg;
    return *this;
  }
  Type & set__reset_count_vel_ne(
    const uint8_t & _arg)
  {
    this->reset_count_vel_ne = _arg;
    return *this;
  }
  Type & set__reset_count_vel_d(
    const uint8_t & _arg)
  {
    this->reset_count_vel_d = _arg;
    return *this;
  }
  Type & set__reset_count_pos_ne(
    const uint8_t & _arg)
  {
    this->reset_count_pos_ne = _arg;
    return *this;
  }
  Type & set__reset_count_pod_d(
    const uint8_t & _arg)
  {
    this->reset_count_pod_d = _arg;
    return *this;
  }
  Type & set__reset_count_quat(
    const uint8_t & _arg)
  {
    this->reset_count_quat = _arg;
    return *this;
  }
  Type & set__time_slip(
    const float & _arg)
  {
    this->time_slip = _arg;
    return *this;
  }
  Type & set__pre_flt_fail_innov_heading(
    const bool & _arg)
  {
    this->pre_flt_fail_innov_heading = _arg;
    return *this;
  }
  Type & set__pre_flt_fail_innov_vel_horiz(
    const bool & _arg)
  {
    this->pre_flt_fail_innov_vel_horiz = _arg;
    return *this;
  }
  Type & set__pre_flt_fail_innov_vel_vert(
    const bool & _arg)
  {
    this->pre_flt_fail_innov_vel_vert = _arg;
    return *this;
  }
  Type & set__pre_flt_fail_innov_height(
    const bool & _arg)
  {
    this->pre_flt_fail_innov_height = _arg;
    return *this;
  }
  Type & set__pre_flt_fail_mag_field_disturbed(
    const bool & _arg)
  {
    this->pre_flt_fail_mag_field_disturbed = _arg;
    return *this;
  }
  Type & set__accel_device_id(
    const uint32_t & _arg)
  {
    this->accel_device_id = _arg;
    return *this;
  }
  Type & set__gyro_device_id(
    const uint32_t & _arg)
  {
    this->gyro_device_id = _arg;
    return *this;
  }
  Type & set__baro_device_id(
    const uint32_t & _arg)
  {
    this->baro_device_id = _arg;
    return *this;
  }
  Type & set__mag_device_id(
    const uint32_t & _arg)
  {
    this->mag_device_id = _arg;
    return *this;
  }
  Type & set__health_flags(
    const uint8_t & _arg)
  {
    this->health_flags = _arg;
    return *this;
  }
  Type & set__timeout_flags(
    const uint8_t & _arg)
  {
    this->timeout_flags = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t GPS_CHECK_FAIL_GPS_FIX =
    0u;
  static constexpr uint8_t GPS_CHECK_FAIL_MIN_SAT_COUNT =
    1u;
  static constexpr uint8_t GPS_CHECK_FAIL_MAX_PDOP =
    2u;
  static constexpr uint8_t GPS_CHECK_FAIL_MAX_HORZ_ERR =
    3u;
  static constexpr uint8_t GPS_CHECK_FAIL_MAX_VERT_ERR =
    4u;
  static constexpr uint8_t GPS_CHECK_FAIL_MAX_SPD_ERR =
    5u;
  static constexpr uint8_t GPS_CHECK_FAIL_MAX_HORZ_DRIFT =
    6u;
  static constexpr uint8_t GPS_CHECK_FAIL_MAX_VERT_DRIFT =
    7u;
  static constexpr uint8_t GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR =
    8u;
  static constexpr uint8_t GPS_CHECK_FAIL_MAX_VERT_SPD_ERR =
    9u;
  static constexpr uint8_t CS_TILT_ALIGN =
    0u;
  static constexpr uint8_t CS_YAW_ALIGN =
    1u;
  static constexpr uint8_t CS_GPS =
    2u;
  static constexpr uint8_t CS_OPT_FLOW =
    3u;
  static constexpr uint8_t CS_MAG_HDG =
    4u;
  static constexpr uint8_t CS_MAG_3D =
    5u;
  static constexpr uint8_t CS_MAG_DEC =
    6u;
  static constexpr uint8_t CS_IN_AIR =
    7u;
  static constexpr uint8_t CS_WIND =
    8u;
  static constexpr uint8_t CS_BARO_HGT =
    9u;
  static constexpr uint8_t CS_RNG_HGT =
    10u;
  static constexpr uint8_t CS_GPS_HGT =
    11u;
  static constexpr uint8_t CS_EV_POS =
    12u;
  static constexpr uint8_t CS_EV_YAW =
    13u;
  static constexpr uint8_t CS_EV_HGT =
    14u;
  static constexpr uint8_t CS_BETA =
    15u;
  static constexpr uint8_t CS_MAG_FIELD =
    16u;
  static constexpr uint8_t CS_FIXED_WING =
    17u;
  static constexpr uint8_t CS_MAG_FAULT =
    18u;
  static constexpr uint8_t CS_ASPD =
    19u;
  static constexpr uint8_t CS_GND_EFFECT =
    20u;
  static constexpr uint8_t CS_RNG_STUCK =
    21u;
  static constexpr uint8_t CS_GPS_YAW =
    22u;
  static constexpr uint8_t CS_MAG_ALIGNED =
    23u;
  static constexpr uint8_t CS_EV_VEL =
    24u;
  static constexpr uint8_t CS_SYNTHETIC_MAG_Z =
    25u;
  static constexpr uint8_t CS_VEHICLE_AT_REST =
    26u;
  static constexpr uint8_t CS_GPS_YAW_FAULT =
    27u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::EstimatorStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::EstimatorStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__EstimatorStatus
    std::shared_ptr<px4_msgs::msg::EstimatorStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__EstimatorStatus
    std::shared_ptr<px4_msgs::msg::EstimatorStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimatorStatus_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->vibe != other.vibe) {
      return false;
    }
    if (this->output_tracking_error != other.output_tracking_error) {
      return false;
    }
    if (this->gps_check_fail_flags != other.gps_check_fail_flags) {
      return false;
    }
    if (this->control_mode_flags != other.control_mode_flags) {
      return false;
    }
    if (this->filter_fault_flags != other.filter_fault_flags) {
      return false;
    }
    if (this->pos_horiz_accuracy != other.pos_horiz_accuracy) {
      return false;
    }
    if (this->pos_vert_accuracy != other.pos_vert_accuracy) {
      return false;
    }
    if (this->innovation_check_flags != other.innovation_check_flags) {
      return false;
    }
    if (this->mag_test_ratio != other.mag_test_ratio) {
      return false;
    }
    if (this->vel_test_ratio != other.vel_test_ratio) {
      return false;
    }
    if (this->pos_test_ratio != other.pos_test_ratio) {
      return false;
    }
    if (this->hgt_test_ratio != other.hgt_test_ratio) {
      return false;
    }
    if (this->tas_test_ratio != other.tas_test_ratio) {
      return false;
    }
    if (this->hagl_test_ratio != other.hagl_test_ratio) {
      return false;
    }
    if (this->beta_test_ratio != other.beta_test_ratio) {
      return false;
    }
    if (this->solution_status_flags != other.solution_status_flags) {
      return false;
    }
    if (this->reset_count_vel_ne != other.reset_count_vel_ne) {
      return false;
    }
    if (this->reset_count_vel_d != other.reset_count_vel_d) {
      return false;
    }
    if (this->reset_count_pos_ne != other.reset_count_pos_ne) {
      return false;
    }
    if (this->reset_count_pod_d != other.reset_count_pod_d) {
      return false;
    }
    if (this->reset_count_quat != other.reset_count_quat) {
      return false;
    }
    if (this->time_slip != other.time_slip) {
      return false;
    }
    if (this->pre_flt_fail_innov_heading != other.pre_flt_fail_innov_heading) {
      return false;
    }
    if (this->pre_flt_fail_innov_vel_horiz != other.pre_flt_fail_innov_vel_horiz) {
      return false;
    }
    if (this->pre_flt_fail_innov_vel_vert != other.pre_flt_fail_innov_vel_vert) {
      return false;
    }
    if (this->pre_flt_fail_innov_height != other.pre_flt_fail_innov_height) {
      return false;
    }
    if (this->pre_flt_fail_mag_field_disturbed != other.pre_flt_fail_mag_field_disturbed) {
      return false;
    }
    if (this->accel_device_id != other.accel_device_id) {
      return false;
    }
    if (this->gyro_device_id != other.gyro_device_id) {
      return false;
    }
    if (this->baro_device_id != other.baro_device_id) {
      return false;
    }
    if (this->mag_device_id != other.mag_device_id) {
      return false;
    }
    if (this->health_flags != other.health_flags) {
      return false;
    }
    if (this->timeout_flags != other.timeout_flags) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimatorStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimatorStatus_

// alias to use template instance with default allocator
using EstimatorStatus =
  px4_msgs::msg::EstimatorStatus_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::GPS_CHECK_FAIL_GPS_FIX;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::GPS_CHECK_FAIL_MIN_SAT_COUNT;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::GPS_CHECK_FAIL_MAX_PDOP;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::GPS_CHECK_FAIL_MAX_HORZ_ERR;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::GPS_CHECK_FAIL_MAX_VERT_ERR;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::GPS_CHECK_FAIL_MAX_SPD_ERR;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::GPS_CHECK_FAIL_MAX_HORZ_DRIFT;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::GPS_CHECK_FAIL_MAX_VERT_DRIFT;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::GPS_CHECK_FAIL_MAX_VERT_SPD_ERR;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_TILT_ALIGN;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_YAW_ALIGN;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_GPS;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_OPT_FLOW;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_MAG_HDG;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_MAG_3D;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_MAG_DEC;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_IN_AIR;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_WIND;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_BARO_HGT;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_RNG_HGT;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_GPS_HGT;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_EV_POS;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_EV_YAW;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_EV_HGT;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_BETA;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_MAG_FIELD;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_FIXED_WING;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_MAG_FAULT;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_ASPD;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_GND_EFFECT;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_RNG_STUCK;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_GPS_YAW;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_MAG_ALIGNED;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_EV_VEL;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_SYNTHETIC_MAG_Z;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_VEHICLE_AT_REST;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorStatus_<ContainerAllocator>::CS_GPS_YAW_FAULT;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__ESTIMATOR_STATUS__STRUCT_HPP_
