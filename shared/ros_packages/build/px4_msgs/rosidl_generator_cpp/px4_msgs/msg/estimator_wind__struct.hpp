// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/EstimatorWind.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__ESTIMATOR_WIND__STRUCT_HPP_
#define PX4_MSGS__MSG__ESTIMATOR_WIND__STRUCT_HPP_

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
# define DEPRECATED__px4_msgs__msg__EstimatorWind __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__EstimatorWind __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstimatorWind_
{
  using Type = EstimatorWind_<ContainerAllocator>;

  explicit EstimatorWind_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->windspeed_north = 0.0f;
      this->windspeed_east = 0.0f;
      this->variance_north = 0.0f;
      this->variance_east = 0.0f;
      this->tas_innov = 0.0f;
      this->tas_innov_var = 0.0f;
      this->beta_innov = 0.0f;
      this->beta_innov_var = 0.0f;
    }
  }

  explicit EstimatorWind_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->windspeed_north = 0.0f;
      this->windspeed_east = 0.0f;
      this->variance_north = 0.0f;
      this->variance_east = 0.0f;
      this->tas_innov = 0.0f;
      this->tas_innov_var = 0.0f;
      this->beta_innov = 0.0f;
      this->beta_innov_var = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _windspeed_north_type =
    float;
  _windspeed_north_type windspeed_north;
  using _windspeed_east_type =
    float;
  _windspeed_east_type windspeed_east;
  using _variance_north_type =
    float;
  _variance_north_type variance_north;
  using _variance_east_type =
    float;
  _variance_east_type variance_east;
  using _tas_innov_type =
    float;
  _tas_innov_type tas_innov;
  using _tas_innov_var_type =
    float;
  _tas_innov_var_type tas_innov_var;
  using _beta_innov_type =
    float;
  _beta_innov_type beta_innov;
  using _beta_innov_var_type =
    float;
  _beta_innov_var_type beta_innov_var;

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
  Type & set__windspeed_north(
    const float & _arg)
  {
    this->windspeed_north = _arg;
    return *this;
  }
  Type & set__windspeed_east(
    const float & _arg)
  {
    this->windspeed_east = _arg;
    return *this;
  }
  Type & set__variance_north(
    const float & _arg)
  {
    this->variance_north = _arg;
    return *this;
  }
  Type & set__variance_east(
    const float & _arg)
  {
    this->variance_east = _arg;
    return *this;
  }
  Type & set__tas_innov(
    const float & _arg)
  {
    this->tas_innov = _arg;
    return *this;
  }
  Type & set__tas_innov_var(
    const float & _arg)
  {
    this->tas_innov_var = _arg;
    return *this;
  }
  Type & set__beta_innov(
    const float & _arg)
  {
    this->beta_innov = _arg;
    return *this;
  }
  Type & set__beta_innov_var(
    const float & _arg)
  {
    this->beta_innov_var = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::EstimatorWind_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::EstimatorWind_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorWind_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorWind_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorWind_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorWind_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorWind_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorWind_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorWind_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorWind_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__EstimatorWind
    std::shared_ptr<px4_msgs::msg::EstimatorWind_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__EstimatorWind
    std::shared_ptr<px4_msgs::msg::EstimatorWind_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimatorWind_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->windspeed_north != other.windspeed_north) {
      return false;
    }
    if (this->windspeed_east != other.windspeed_east) {
      return false;
    }
    if (this->variance_north != other.variance_north) {
      return false;
    }
    if (this->variance_east != other.variance_east) {
      return false;
    }
    if (this->tas_innov != other.tas_innov) {
      return false;
    }
    if (this->tas_innov_var != other.tas_innov_var) {
      return false;
    }
    if (this->beta_innov != other.beta_innov) {
      return false;
    }
    if (this->beta_innov_var != other.beta_innov_var) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimatorWind_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimatorWind_

// alias to use template instance with default allocator
using EstimatorWind =
  px4_msgs::msg::EstimatorWind_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__ESTIMATOR_WIND__STRUCT_HPP_
