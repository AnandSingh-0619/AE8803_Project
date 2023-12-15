// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/MissionResult.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__MISSION_RESULT__STRUCT_HPP_
#define PX4_MSGS__MSG__MISSION_RESULT__STRUCT_HPP_

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
# define DEPRECATED__px4_msgs__msg__MissionResult __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__MissionResult __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MissionResult_
{
  using Type = MissionResult_<ContainerAllocator>;

  explicit MissionResult_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->instance_count = 0ul;
      this->seq_reached = 0l;
      this->seq_current = 0;
      this->seq_total = 0;
      this->valid = false;
      this->warning = false;
      this->finished = false;
      this->failure = false;
      this->stay_in_failsafe = false;
      this->flight_termination = false;
      this->item_do_jump_changed = false;
      this->item_changed_index = 0;
      this->item_do_jump_remaining = 0;
      this->execution_mode = 0;
    }
  }

  explicit MissionResult_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->instance_count = 0ul;
      this->seq_reached = 0l;
      this->seq_current = 0;
      this->seq_total = 0;
      this->valid = false;
      this->warning = false;
      this->finished = false;
      this->failure = false;
      this->stay_in_failsafe = false;
      this->flight_termination = false;
      this->item_do_jump_changed = false;
      this->item_changed_index = 0;
      this->item_do_jump_remaining = 0;
      this->execution_mode = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _instance_count_type =
    uint32_t;
  _instance_count_type instance_count;
  using _seq_reached_type =
    int32_t;
  _seq_reached_type seq_reached;
  using _seq_current_type =
    uint16_t;
  _seq_current_type seq_current;
  using _seq_total_type =
    uint16_t;
  _seq_total_type seq_total;
  using _valid_type =
    bool;
  _valid_type valid;
  using _warning_type =
    bool;
  _warning_type warning;
  using _finished_type =
    bool;
  _finished_type finished;
  using _failure_type =
    bool;
  _failure_type failure;
  using _stay_in_failsafe_type =
    bool;
  _stay_in_failsafe_type stay_in_failsafe;
  using _flight_termination_type =
    bool;
  _flight_termination_type flight_termination;
  using _item_do_jump_changed_type =
    bool;
  _item_do_jump_changed_type item_do_jump_changed;
  using _item_changed_index_type =
    uint16_t;
  _item_changed_index_type item_changed_index;
  using _item_do_jump_remaining_type =
    uint16_t;
  _item_do_jump_remaining_type item_do_jump_remaining;
  using _execution_mode_type =
    uint8_t;
  _execution_mode_type execution_mode;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__instance_count(
    const uint32_t & _arg)
  {
    this->instance_count = _arg;
    return *this;
  }
  Type & set__seq_reached(
    const int32_t & _arg)
  {
    this->seq_reached = _arg;
    return *this;
  }
  Type & set__seq_current(
    const uint16_t & _arg)
  {
    this->seq_current = _arg;
    return *this;
  }
  Type & set__seq_total(
    const uint16_t & _arg)
  {
    this->seq_total = _arg;
    return *this;
  }
  Type & set__valid(
    const bool & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__warning(
    const bool & _arg)
  {
    this->warning = _arg;
    return *this;
  }
  Type & set__finished(
    const bool & _arg)
  {
    this->finished = _arg;
    return *this;
  }
  Type & set__failure(
    const bool & _arg)
  {
    this->failure = _arg;
    return *this;
  }
  Type & set__stay_in_failsafe(
    const bool & _arg)
  {
    this->stay_in_failsafe = _arg;
    return *this;
  }
  Type & set__flight_termination(
    const bool & _arg)
  {
    this->flight_termination = _arg;
    return *this;
  }
  Type & set__item_do_jump_changed(
    const bool & _arg)
  {
    this->item_do_jump_changed = _arg;
    return *this;
  }
  Type & set__item_changed_index(
    const uint16_t & _arg)
  {
    this->item_changed_index = _arg;
    return *this;
  }
  Type & set__item_do_jump_remaining(
    const uint16_t & _arg)
  {
    this->item_do_jump_remaining = _arg;
    return *this;
  }
  Type & set__execution_mode(
    const uint8_t & _arg)
  {
    this->execution_mode = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MISSION_EXECUTION_MODE_NORMAL =
    0u;
  static constexpr uint8_t MISSION_EXECUTION_MODE_REVERSE =
    1u;
  static constexpr uint8_t MISSION_EXECUTION_MODE_FAST_FORWARD =
    2u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::MissionResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::MissionResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::MissionResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::MissionResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::MissionResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::MissionResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::MissionResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::MissionResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::MissionResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::MissionResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__MissionResult
    std::shared_ptr<px4_msgs::msg::MissionResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__MissionResult
    std::shared_ptr<px4_msgs::msg::MissionResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MissionResult_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->instance_count != other.instance_count) {
      return false;
    }
    if (this->seq_reached != other.seq_reached) {
      return false;
    }
    if (this->seq_current != other.seq_current) {
      return false;
    }
    if (this->seq_total != other.seq_total) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    if (this->warning != other.warning) {
      return false;
    }
    if (this->finished != other.finished) {
      return false;
    }
    if (this->failure != other.failure) {
      return false;
    }
    if (this->stay_in_failsafe != other.stay_in_failsafe) {
      return false;
    }
    if (this->flight_termination != other.flight_termination) {
      return false;
    }
    if (this->item_do_jump_changed != other.item_do_jump_changed) {
      return false;
    }
    if (this->item_changed_index != other.item_changed_index) {
      return false;
    }
    if (this->item_do_jump_remaining != other.item_do_jump_remaining) {
      return false;
    }
    if (this->execution_mode != other.execution_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const MissionResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MissionResult_

// alias to use template instance with default allocator
using MissionResult =
  px4_msgs::msg::MissionResult_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t MissionResult_<ContainerAllocator>::MISSION_EXECUTION_MODE_NORMAL;
template<typename ContainerAllocator>
constexpr uint8_t MissionResult_<ContainerAllocator>::MISSION_EXECUTION_MODE_REVERSE;
template<typename ContainerAllocator>
constexpr uint8_t MissionResult_<ContainerAllocator>::MISSION_EXECUTION_MODE_FAST_FORWARD;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__MISSION_RESULT__STRUCT_HPP_
