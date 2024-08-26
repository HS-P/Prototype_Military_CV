// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from darknet_ros_msgs:action/CheckForObjects.idl
// generated code does not contain a copyright notice

#ifndef DARKNET_ROS_MSGS__ACTION__CHECK_FOR_OBJECTS__TRAITS_HPP_
#define DARKNET_ROS_MSGS__ACTION__CHECK_FOR_OBJECTS__TRAITS_HPP_

#include "darknet_ros_msgs/action/check_for_objects__struct.hpp"
#include <rosidl_generator_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_Goal>()
{
  return "darknet_ros_msgs::action::CheckForObjects_Goal";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_Goal>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_Goal>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'bounding_boxes'
#include "darknet_ros_msgs/msg/bounding_boxes__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_Result>()
{
  return "darknet_ros_msgs::action::CheckForObjects_Result";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_Result>
  : std::integral_constant<bool, has_fixed_size<darknet_ros_msgs::msg::BoundingBoxes>::value> {};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_Result>
  : std::integral_constant<bool, has_bounded_size<darknet_ros_msgs::msg::BoundingBoxes>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_Feedback>()
{
  return "darknet_ros_msgs::action::CheckForObjects_Feedback";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_Feedback>
  : std::integral_constant<bool, true> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'goal'
#include "darknet_ros_msgs/action/check_for_objects__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request>()
{
  return "darknet_ros_msgs::action::CheckForObjects_SendGoal_Request";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<darknet_ros_msgs::action::CheckForObjects_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<darknet_ros_msgs::action::CheckForObjects_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response>()
{
  return "darknet_ros_msgs::action::CheckForObjects_SendGoal_Response";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_SendGoal>()
{
  return "darknet_ros_msgs::action::CheckForObjects_SendGoal";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request>::value &&
    has_fixed_size<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request>::value &&
    has_bounded_size<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_GetResult_Request>()
{
  return "darknet_ros_msgs::action::CheckForObjects_GetResult_Request";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "darknet_ros_msgs/action/check_for_objects__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_GetResult_Response>()
{
  return "darknet_ros_msgs::action::CheckForObjects_GetResult_Response";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<darknet_ros_msgs::action::CheckForObjects_Result>::value> {};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<darknet_ros_msgs::action::CheckForObjects_Result>::value> {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_GetResult>()
{
  return "darknet_ros_msgs::action::CheckForObjects_GetResult";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<darknet_ros_msgs::action::CheckForObjects_GetResult_Request>::value &&
    has_fixed_size<darknet_ros_msgs::action::CheckForObjects_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<darknet_ros_msgs::action::CheckForObjects_GetResult_Request>::value &&
    has_bounded_size<darknet_ros_msgs::action::CheckForObjects_GetResult_Response>::value
  >
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "darknet_ros_msgs/action/check_for_objects__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_FeedbackMessage>()
{
  return "darknet_ros_msgs::action::CheckForObjects_FeedbackMessage";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<darknet_ros_msgs::action::CheckForObjects_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<darknet_ros_msgs::action::CheckForObjects_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

}  // namespace rosidl_generator_traits

#endif  // DARKNET_ROS_MSGS__ACTION__CHECK_FOR_OBJECTS__TRAITS_HPP_
