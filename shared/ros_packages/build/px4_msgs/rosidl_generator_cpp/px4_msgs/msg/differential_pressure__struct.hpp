// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/DifferentialPressure.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DIFFERENTIAL_PRESSURE__STRUCT_HPP_
#define PX4_MSGS__MSG__DIFFERENTIAL_PRESSURE__STRUCT_HPP_

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
# define DEPRECATED__px4_msgs__msg__DifferentialPressure __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__DifferentialPressure __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DifferentialPressure_
{
  using Type = DifferentialPressure_<ContainerAllocator>;

  explicit DifferentialPressure_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->error_count = 0ull;
      this->differential_pressure_raw_pa = 0.0f;
      this->differential_pressure_filtered_pa = 0.0f;
      this->temperature = 0.0f;
      this->device_id = 0ul;
    }
  }

  explicit DifferentialPressure_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->error_count = 0ull;
      this->differential_pressure_raw_pa = 0.0f;
      this->differential_pressure_filtered_pa = 0.0f;
      this->temperature = 0.0f;
      this->device_id = 0ul;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _error_count_type =
    uint64_t;
  _error_count_type error_count;
  using _differential_pressure_raw_pa_type =
    float;
  _differential_pressure_raw_pa_type differential_pressure_raw_pa;
  using _differential_pressure_filtered_pa_type =
    float;
  _differential_pressure_filtered_pa_type differential_pressure_filtered_pa;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _device_id_type =
    uint32_t;
  _device_id_type device_id;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__error_count(
    const uint64_t & _arg)
  {
    this->error_count = _arg;
    return *this;
  }
  Type & set__differential_pressure_raw_pa(
    const float & _arg)
  {
    this->differential_pressure_raw_pa = _arg;
    return *this;
  }
  Type & set__differential_pressure_filtered_pa(
    const float & _arg)
  {
    this->differential_pressure_filtered_pa = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__device_id(
    const uint32_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    px4_msgs::msg::DifferentialPressure_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::DifferentialPressure_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::DifferentialPressure_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::DifferentialPressure_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::DifferentialPressure_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::DifferentialPressure_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::DifferentialPressure_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::DifferentialPressure_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::DifferentialPressure_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::DifferentialPressure_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__DifferentialPressure
    std::shared_ptr<px4_msgs::msg::DifferentialPressure_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__DifferentialPressure
    std::shared_ptr<px4_msgs::msg::DifferentialPressure_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DifferentialPressure_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->error_count != other.error_count) {
      return false;
    }
    if (this->differential_pressure_raw_pa != other.differential_pressure_raw_pa) {
      return false;
    }
    if (this->differential_pressure_filtered_pa != other.differential_pressure_filtered_pa) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DifferentialPressure_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DifferentialPressure_

// alias to use template instance with default allocator
using DifferentialPressure =
  px4_msgs::msg::DifferentialPressure_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DIFFERENTIAL_PRESSURE__STRUCT_HPP_
