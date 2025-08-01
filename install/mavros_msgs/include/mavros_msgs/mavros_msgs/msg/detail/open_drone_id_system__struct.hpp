// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mavros_msgs:msg/OpenDroneIDSystem.idl
// generated code does not contain a copyright notice

#ifndef MAVROS_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SYSTEM__STRUCT_HPP_
#define MAVROS_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SYSTEM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mavros_msgs__msg__OpenDroneIDSystem __attribute__((deprecated))
#else
# define DEPRECATED__mavros_msgs__msg__OpenDroneIDSystem __declspec(deprecated)
#endif

namespace mavros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OpenDroneIDSystem_
{
  using Type = OpenDroneIDSystem_<ContainerAllocator>;

  explicit OpenDroneIDSystem_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id_or_mac = "";
      this->operator_location_type = 0;
      this->classification_type = 0;
      this->operator_latitude = 0l;
      this->operator_longitude = 0l;
      this->area_count = 0;
      this->area_radius = 0;
      this->area_ceiling = 0.0f;
      this->area_floor = 0.0f;
      this->category_eu = 0;
      this->class_eu = 0;
      this->operator_altitude_geo = 0.0f;
    }
  }

  explicit OpenDroneIDSystem_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    id_or_mac(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id_or_mac = "";
      this->operator_location_type = 0;
      this->classification_type = 0;
      this->operator_latitude = 0l;
      this->operator_longitude = 0l;
      this->area_count = 0;
      this->area_radius = 0;
      this->area_ceiling = 0.0f;
      this->area_floor = 0.0f;
      this->category_eu = 0;
      this->class_eu = 0;
      this->operator_altitude_geo = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_or_mac_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_or_mac_type id_or_mac;
  using _operator_location_type_type =
    uint8_t;
  _operator_location_type_type operator_location_type;
  using _classification_type_type =
    uint8_t;
  _classification_type_type classification_type;
  using _operator_latitude_type =
    int32_t;
  _operator_latitude_type operator_latitude;
  using _operator_longitude_type =
    int32_t;
  _operator_longitude_type operator_longitude;
  using _area_count_type =
    uint16_t;
  _area_count_type area_count;
  using _area_radius_type =
    uint16_t;
  _area_radius_type area_radius;
  using _area_ceiling_type =
    float;
  _area_ceiling_type area_ceiling;
  using _area_floor_type =
    float;
  _area_floor_type area_floor;
  using _category_eu_type =
    uint8_t;
  _category_eu_type category_eu;
  using _class_eu_type =
    uint8_t;
  _class_eu_type class_eu;
  using _operator_altitude_geo_type =
    float;
  _operator_altitude_geo_type operator_altitude_geo;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id_or_mac(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id_or_mac = _arg;
    return *this;
  }
  Type & set__operator_location_type(
    const uint8_t & _arg)
  {
    this->operator_location_type = _arg;
    return *this;
  }
  Type & set__classification_type(
    const uint8_t & _arg)
  {
    this->classification_type = _arg;
    return *this;
  }
  Type & set__operator_latitude(
    const int32_t & _arg)
  {
    this->operator_latitude = _arg;
    return *this;
  }
  Type & set__operator_longitude(
    const int32_t & _arg)
  {
    this->operator_longitude = _arg;
    return *this;
  }
  Type & set__area_count(
    const uint16_t & _arg)
  {
    this->area_count = _arg;
    return *this;
  }
  Type & set__area_radius(
    const uint16_t & _arg)
  {
    this->area_radius = _arg;
    return *this;
  }
  Type & set__area_ceiling(
    const float & _arg)
  {
    this->area_ceiling = _arg;
    return *this;
  }
  Type & set__area_floor(
    const float & _arg)
  {
    this->area_floor = _arg;
    return *this;
  }
  Type & set__category_eu(
    const uint8_t & _arg)
  {
    this->category_eu = _arg;
    return *this;
  }
  Type & set__class_eu(
    const uint8_t & _arg)
  {
    this->class_eu = _arg;
    return *this;
  }
  Type & set__operator_altitude_geo(
    const float & _arg)
  {
    this->operator_altitude_geo = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LOCATION_TYPE_TAKEOFF =
    0u;
  static constexpr uint8_t LOCATION_TYPE_LIVE_GNSS =
    1u;
  static constexpr uint8_t LOCATION_TYPE_FIXED =
    2u;
  static constexpr uint8_t CLASSIFICATION_TYPE_UNDECLARED =
    0u;
  static constexpr uint8_t CLASSIFICATION_TYPE_EU =
    1u;

  // pointer types
  using RawPtr =
    mavros_msgs::msg::OpenDroneIDSystem_<ContainerAllocator> *;
  using ConstRawPtr =
    const mavros_msgs::msg::OpenDroneIDSystem_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mavros_msgs::msg::OpenDroneIDSystem_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mavros_msgs::msg::OpenDroneIDSystem_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::msg::OpenDroneIDSystem_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::msg::OpenDroneIDSystem_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mavros_msgs::msg::OpenDroneIDSystem_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mavros_msgs::msg::OpenDroneIDSystem_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mavros_msgs::msg::OpenDroneIDSystem_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mavros_msgs::msg::OpenDroneIDSystem_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mavros_msgs__msg__OpenDroneIDSystem
    std::shared_ptr<mavros_msgs::msg::OpenDroneIDSystem_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mavros_msgs__msg__OpenDroneIDSystem
    std::shared_ptr<mavros_msgs::msg::OpenDroneIDSystem_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpenDroneIDSystem_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id_or_mac != other.id_or_mac) {
      return false;
    }
    if (this->operator_location_type != other.operator_location_type) {
      return false;
    }
    if (this->classification_type != other.classification_type) {
      return false;
    }
    if (this->operator_latitude != other.operator_latitude) {
      return false;
    }
    if (this->operator_longitude != other.operator_longitude) {
      return false;
    }
    if (this->area_count != other.area_count) {
      return false;
    }
    if (this->area_radius != other.area_radius) {
      return false;
    }
    if (this->area_ceiling != other.area_ceiling) {
      return false;
    }
    if (this->area_floor != other.area_floor) {
      return false;
    }
    if (this->category_eu != other.category_eu) {
      return false;
    }
    if (this->class_eu != other.class_eu) {
      return false;
    }
    if (this->operator_altitude_geo != other.operator_altitude_geo) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpenDroneIDSystem_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpenDroneIDSystem_

// alias to use template instance with default allocator
using OpenDroneIDSystem =
  mavros_msgs::msg::OpenDroneIDSystem_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t OpenDroneIDSystem_<ContainerAllocator>::LOCATION_TYPE_TAKEOFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t OpenDroneIDSystem_<ContainerAllocator>::LOCATION_TYPE_LIVE_GNSS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t OpenDroneIDSystem_<ContainerAllocator>::LOCATION_TYPE_FIXED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t OpenDroneIDSystem_<ContainerAllocator>::CLASSIFICATION_TYPE_UNDECLARED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t OpenDroneIDSystem_<ContainerAllocator>::CLASSIFICATION_TYPE_EU;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mavros_msgs

#endif  // MAVROS_MSGS__MSG__DETAIL__OPEN_DRONE_ID_SYSTEM__STRUCT_HPP_
