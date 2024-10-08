// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from darknet_ros_msgs:msg/BoundingBoxes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "darknet_ros_msgs/msg/bounding_boxes__rosidl_typesupport_introspection_c.h"
#include "darknet_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "darknet_ros_msgs/msg/bounding_boxes__struct.h"


// Include directives for member types
// Member `header`
// Member `image_header`
#include "std_msgs/msg/header.h"
// Member `header`
// Member `image_header`
#include "std_msgs/msg/header__rosidl_typesupport_introspection_c.h"
// Member `bounding_boxes`
#include "darknet_ros_msgs/msg/bounding_box.h"
// Member `bounding_boxes`
#include "darknet_ros_msgs/msg/bounding_box__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

size_t BoundingBoxes__rosidl_typesupport_introspection_c__size_function__BoundingBox__bounding_boxes(
  const void * untyped_member)
{
  const darknet_ros_msgs__msg__BoundingBox__Sequence * member =
    (const darknet_ros_msgs__msg__BoundingBox__Sequence *)(untyped_member);
  return member->size;
}

const void * BoundingBoxes__rosidl_typesupport_introspection_c__get_const_function__BoundingBox__bounding_boxes(
  const void * untyped_member, size_t index)
{
  const darknet_ros_msgs__msg__BoundingBox__Sequence * member =
    (const darknet_ros_msgs__msg__BoundingBox__Sequence *)(untyped_member);
  return &member->data[index];
}

void * BoundingBoxes__rosidl_typesupport_introspection_c__get_function__BoundingBox__bounding_boxes(
  void * untyped_member, size_t index)
{
  darknet_ros_msgs__msg__BoundingBox__Sequence * member =
    (darknet_ros_msgs__msg__BoundingBox__Sequence *)(untyped_member);
  return &member->data[index];
}

bool BoundingBoxes__rosidl_typesupport_introspection_c__resize_function__BoundingBox__bounding_boxes(
  void * untyped_member, size_t size)
{
  darknet_ros_msgs__msg__BoundingBox__Sequence * member =
    (darknet_ros_msgs__msg__BoundingBox__Sequence *)(untyped_member);
  darknet_ros_msgs__msg__BoundingBox__Sequence__fini(member);
  return darknet_ros_msgs__msg__BoundingBox__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(darknet_ros_msgs__msg__BoundingBoxes, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(darknet_ros_msgs__msg__BoundingBoxes, image_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_boxes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(darknet_ros_msgs__msg__BoundingBoxes, bounding_boxes),  // bytes offset in struct
    NULL,  // default value
    BoundingBoxes__rosidl_typesupport_introspection_c__size_function__BoundingBox__bounding_boxes,  // size() function pointer
    BoundingBoxes__rosidl_typesupport_introspection_c__get_const_function__BoundingBox__bounding_boxes,  // get_const(index) function pointer
    BoundingBoxes__rosidl_typesupport_introspection_c__get_function__BoundingBox__bounding_boxes,  // get(index) function pointer
    BoundingBoxes__rosidl_typesupport_introspection_c__resize_function__BoundingBox__bounding_boxes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_members = {
  "darknet_ros_msgs__msg",  // message namespace
  "BoundingBoxes",  // message name
  3,  // number of fields
  sizeof(darknet_ros_msgs__msg__BoundingBoxes),
  BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_member_array  // message members
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_type_support_handle = {
  0,
  &BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_darknet_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, darknet_ros_msgs, msg, BoundingBoxes)() {
  BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, darknet_ros_msgs, msg, BoundingBox)();
  if (!BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_type_support_handle.typesupport_identifier) {
    BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BoundingBoxes__rosidl_typesupport_introspection_c__BoundingBoxes_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
