// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from darknet_ros_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef DARKNET_ROS_MSGS__MSG__BOUNDING_BOX__TRAITS_HPP_
#define DARKNET_ROS_MSGS__MSG__BOUNDING_BOX__TRAITS_HPP_

#include "darknet_ros_msgs/msg/bounding_box__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::msg::BoundingBox>()
{
  return "darknet_ros_msgs::msg::BoundingBox";
}

template<>
struct has_fixed_size<darknet_ros_msgs::msg::BoundingBox>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<darknet_ros_msgs::msg::BoundingBox>
  : std::integral_constant<bool, false> {};

}  // namespace rosidl_generator_traits

#endif  // DARKNET_ROS_MSGS__MSG__BOUNDING_BOX__TRAITS_HPP_
