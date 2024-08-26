// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from darknet_ros_msgs:action/CheckForObjects.idl
// generated code does not contain a copyright notice

#ifndef DARKNET_ROS_MSGS__ACTION__CHECK_FOR_OBJECTS__STRUCT_HPP_
#define DARKNET_ROS_MSGS__ACTION__CHECK_FOR_OBJECTS__STRUCT_HPP_

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

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__darknet_ros_msgs__action__CheckForObjects_Goal __attribute__((deprecated))
#else
# define DEPRECATED__darknet_ros_msgs__action__CheckForObjects_Goal __declspec(deprecated)
#endif

namespace darknet_ros_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CheckForObjects_Goal_
{
  using Type = CheckForObjects_Goal_<ContainerAllocator>;

  explicit CheckForObjects_Goal_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : image(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
    }
  }

  explicit CheckForObjects_Goal_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : image(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
    }
  }

  // field types and members
  using _id_type =
    int16_t;
  _id_type id;
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;

  // setters for named parameter idiom
  Type & set__id(
    const int16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    darknet_ros_msgs::action::CheckForObjects_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const darknet_ros_msgs::action::CheckForObjects_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      darknet_ros_msgs::action::CheckForObjects_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<darknet_ros_msgs::action::CheckForObjects_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      darknet_ros_msgs::action::CheckForObjects_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<darknet_ros_msgs::action::CheckForObjects_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<darknet_ros_msgs::action::CheckForObjects_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<darknet_ros_msgs::action::CheckForObjects_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__darknet_ros_msgs__action__CheckForObjects_Goal
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__darknet_ros_msgs__action__CheckForObjects_Goal
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckForObjects_Goal_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckForObjects_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckForObjects_Goal_

// alias to use template instance with default allocator
using CheckForObjects_Goal =
  darknet_ros_msgs::action::CheckForObjects_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace darknet_ros_msgs

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

// Include directives for member types
// Member 'bounding_boxes'
#include "darknet_ros_msgs/msg/bounding_boxes__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__darknet_ros_msgs__action__CheckForObjects_Result __attribute__((deprecated))
#else
# define DEPRECATED__darknet_ros_msgs__action__CheckForObjects_Result __declspec(deprecated)
#endif

namespace darknet_ros_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CheckForObjects_Result_
{
  using Type = CheckForObjects_Result_<ContainerAllocator>;

  explicit CheckForObjects_Result_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : bounding_boxes(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
    }
  }

  explicit CheckForObjects_Result_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : bounding_boxes(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
    }
  }

  // field types and members
  using _id_type =
    int16_t;
  _id_type id;
  using _bounding_boxes_type =
    darknet_ros_msgs::msg::BoundingBoxes_<ContainerAllocator>;
  _bounding_boxes_type bounding_boxes;

  // setters for named parameter idiom
  Type & set__id(
    const int16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__bounding_boxes(
    const darknet_ros_msgs::msg::BoundingBoxes_<ContainerAllocator> & _arg)
  {
    this->bounding_boxes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    darknet_ros_msgs::action::CheckForObjects_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const darknet_ros_msgs::action::CheckForObjects_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      darknet_ros_msgs::action::CheckForObjects_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<darknet_ros_msgs::action::CheckForObjects_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      darknet_ros_msgs::action::CheckForObjects_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<darknet_ros_msgs::action::CheckForObjects_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<darknet_ros_msgs::action::CheckForObjects_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<darknet_ros_msgs::action::CheckForObjects_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__darknet_ros_msgs__action__CheckForObjects_Result
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__darknet_ros_msgs__action__CheckForObjects_Result
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckForObjects_Result_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->bounding_boxes != other.bounding_boxes) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckForObjects_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckForObjects_Result_

// alias to use template instance with default allocator
using CheckForObjects_Result =
  darknet_ros_msgs::action::CheckForObjects_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace darknet_ros_msgs

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
# define DEPRECATED__darknet_ros_msgs__action__CheckForObjects_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__darknet_ros_msgs__action__CheckForObjects_Feedback __declspec(deprecated)
#endif

namespace darknet_ros_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CheckForObjects_Feedback_
{
  using Type = CheckForObjects_Feedback_<ContainerAllocator>;

  explicit CheckForObjects_Feedback_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit CheckForObjects_Feedback_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;

  // setters for named parameter idiom
  Type & set__structure_needs_at_least_one_member(
    const uint8_t & _arg)
  {
    this->structure_needs_at_least_one_member = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    darknet_ros_msgs::action::CheckForObjects_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const darknet_ros_msgs::action::CheckForObjects_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      darknet_ros_msgs::action::CheckForObjects_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<darknet_ros_msgs::action::CheckForObjects_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      darknet_ros_msgs::action::CheckForObjects_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<darknet_ros_msgs::action::CheckForObjects_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<darknet_ros_msgs::action::CheckForObjects_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<darknet_ros_msgs::action::CheckForObjects_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__darknet_ros_msgs__action__CheckForObjects_Feedback
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__darknet_ros_msgs__action__CheckForObjects_Feedback
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckForObjects_Feedback_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckForObjects_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckForObjects_Feedback_

// alias to use template instance with default allocator
using CheckForObjects_Feedback =
  darknet_ros_msgs::action::CheckForObjects_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace darknet_ros_msgs

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

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/uuid__struct.hpp"
// Member 'goal'
#include "darknet_ros_msgs/action/check_for_objects__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__darknet_ros_msgs__action__CheckForObjects_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__darknet_ros_msgs__action__CheckForObjects_SendGoal_Request __declspec(deprecated)
#endif

namespace darknet_ros_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CheckForObjects_SendGoal_Request_
{
  using Type = CheckForObjects_SendGoal_Request_<ContainerAllocator>;

  explicit CheckForObjects_SendGoal_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit CheckForObjects_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    darknet_ros_msgs::action::CheckForObjects_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const darknet_ros_msgs::action::CheckForObjects_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    darknet_ros_msgs::action::CheckForObjects_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const darknet_ros_msgs::action::CheckForObjects_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      darknet_ros_msgs::action::CheckForObjects_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      darknet_ros_msgs::action::CheckForObjects_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__darknet_ros_msgs__action__CheckForObjects_SendGoal_Request
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__darknet_ros_msgs__action__CheckForObjects_SendGoal_Request
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckForObjects_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckForObjects_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckForObjects_SendGoal_Request_

// alias to use template instance with default allocator
using CheckForObjects_SendGoal_Request =
  darknet_ros_msgs::action::CheckForObjects_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace darknet_ros_msgs

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

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__darknet_ros_msgs__action__CheckForObjects_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__darknet_ros_msgs__action__CheckForObjects_SendGoal_Response __declspec(deprecated)
#endif

namespace darknet_ros_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CheckForObjects_SendGoal_Response_
{
  using Type = CheckForObjects_SendGoal_Response_<ContainerAllocator>;

  explicit CheckForObjects_SendGoal_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit CheckForObjects_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    darknet_ros_msgs::action::CheckForObjects_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const darknet_ros_msgs::action::CheckForObjects_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      darknet_ros_msgs::action::CheckForObjects_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      darknet_ros_msgs::action::CheckForObjects_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__darknet_ros_msgs__action__CheckForObjects_SendGoal_Response
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__darknet_ros_msgs__action__CheckForObjects_SendGoal_Response
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckForObjects_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckForObjects_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckForObjects_SendGoal_Response_

// alias to use template instance with default allocator
using CheckForObjects_SendGoal_Response =
  darknet_ros_msgs::action::CheckForObjects_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace darknet_ros_msgs

namespace darknet_ros_msgs
{

namespace action
{

struct CheckForObjects_SendGoal
{
  using Request = darknet_ros_msgs::action::CheckForObjects_SendGoal_Request;
  using Response = darknet_ros_msgs::action::CheckForObjects_SendGoal_Response;
};

}  // namespace action

}  // namespace darknet_ros_msgs

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

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__darknet_ros_msgs__action__CheckForObjects_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__darknet_ros_msgs__action__CheckForObjects_GetResult_Request __declspec(deprecated)
#endif

namespace darknet_ros_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CheckForObjects_GetResult_Request_
{
  using Type = CheckForObjects_GetResult_Request_<ContainerAllocator>;

  explicit CheckForObjects_GetResult_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit CheckForObjects_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    darknet_ros_msgs::action::CheckForObjects_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const darknet_ros_msgs::action::CheckForObjects_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      darknet_ros_msgs::action::CheckForObjects_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<darknet_ros_msgs::action::CheckForObjects_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      darknet_ros_msgs::action::CheckForObjects_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<darknet_ros_msgs::action::CheckForObjects_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<darknet_ros_msgs::action::CheckForObjects_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<darknet_ros_msgs::action::CheckForObjects_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__darknet_ros_msgs__action__CheckForObjects_GetResult_Request
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__darknet_ros_msgs__action__CheckForObjects_GetResult_Request
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckForObjects_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckForObjects_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckForObjects_GetResult_Request_

// alias to use template instance with default allocator
using CheckForObjects_GetResult_Request =
  darknet_ros_msgs::action::CheckForObjects_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace darknet_ros_msgs

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

// Include directives for member types
// Member 'result'
// already included above
// #include "darknet_ros_msgs/action/check_for_objects__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__darknet_ros_msgs__action__CheckForObjects_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__darknet_ros_msgs__action__CheckForObjects_GetResult_Response __declspec(deprecated)
#endif

namespace darknet_ros_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CheckForObjects_GetResult_Response_
{
  using Type = CheckForObjects_GetResult_Response_<ContainerAllocator>;

  explicit CheckForObjects_GetResult_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit CheckForObjects_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    darknet_ros_msgs::action::CheckForObjects_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const darknet_ros_msgs::action::CheckForObjects_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    darknet_ros_msgs::action::CheckForObjects_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const darknet_ros_msgs::action::CheckForObjects_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      darknet_ros_msgs::action::CheckForObjects_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<darknet_ros_msgs::action::CheckForObjects_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      darknet_ros_msgs::action::CheckForObjects_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<darknet_ros_msgs::action::CheckForObjects_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<darknet_ros_msgs::action::CheckForObjects_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<darknet_ros_msgs::action::CheckForObjects_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__darknet_ros_msgs__action__CheckForObjects_GetResult_Response
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__darknet_ros_msgs__action__CheckForObjects_GetResult_Response
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckForObjects_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckForObjects_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckForObjects_GetResult_Response_

// alias to use template instance with default allocator
using CheckForObjects_GetResult_Response =
  darknet_ros_msgs::action::CheckForObjects_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace darknet_ros_msgs

namespace darknet_ros_msgs
{

namespace action
{

struct CheckForObjects_GetResult
{
  using Request = darknet_ros_msgs::action::CheckForObjects_GetResult_Request;
  using Response = darknet_ros_msgs::action::CheckForObjects_GetResult_Response;
};

}  // namespace action

}  // namespace darknet_ros_msgs

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

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "darknet_ros_msgs/action/check_for_objects__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__darknet_ros_msgs__action__CheckForObjects_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__darknet_ros_msgs__action__CheckForObjects_FeedbackMessage __declspec(deprecated)
#endif

namespace darknet_ros_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CheckForObjects_FeedbackMessage_
{
  using Type = CheckForObjects_FeedbackMessage_<ContainerAllocator>;

  explicit CheckForObjects_FeedbackMessage_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit CheckForObjects_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    darknet_ros_msgs::action::CheckForObjects_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const darknet_ros_msgs::action::CheckForObjects_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    darknet_ros_msgs::action::CheckForObjects_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const darknet_ros_msgs::action::CheckForObjects_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      darknet_ros_msgs::action::CheckForObjects_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<darknet_ros_msgs::action::CheckForObjects_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      darknet_ros_msgs::action::CheckForObjects_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<darknet_ros_msgs::action::CheckForObjects_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<darknet_ros_msgs::action::CheckForObjects_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<darknet_ros_msgs::action::CheckForObjects_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__darknet_ros_msgs__action__CheckForObjects_FeedbackMessage
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__darknet_ros_msgs__action__CheckForObjects_FeedbackMessage
    std::shared_ptr<darknet_ros_msgs::action::CheckForObjects_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CheckForObjects_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const CheckForObjects_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CheckForObjects_FeedbackMessage_

// alias to use template instance with default allocator
using CheckForObjects_FeedbackMessage =
  darknet_ros_msgs::action::CheckForObjects_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace darknet_ros_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace darknet_ros_msgs
{

namespace action
{

struct CheckForObjects
{
  /// The goal message defined in the action definition.
  using Goal = darknet_ros_msgs::action::CheckForObjects_Goal;
  /// The result message defined in the action definition.
  using Result = darknet_ros_msgs::action::CheckForObjects_Result;
  /// The feedback message defined in the action definition.
  using Feedback = darknet_ros_msgs::action::CheckForObjects_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = darknet_ros_msgs::action::CheckForObjects_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = darknet_ros_msgs::action::CheckForObjects_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = darknet_ros_msgs::action::CheckForObjects_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct CheckForObjects CheckForObjects;

}  // namespace action

}  // namespace darknet_ros_msgs

#endif  // DARKNET_ROS_MSGS__ACTION__CHECK_FOR_OBJECTS__STRUCT_HPP_
