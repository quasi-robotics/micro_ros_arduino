// generated from
// rosidl_typesupport_microxrcedds_c/resource/rosidl_typesupport_microxrcedds_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef TURTLEBOT3_MSGS__MSG__ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__VISIBILITY_CONTROL_H_
#define TURTLEBOT3_MSGS__MSG__ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__VISIBILITY_CONTROL_H_

#if __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_EXPORT_turtlebot3_msgs __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_turtlebot3_msgs __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_EXPORT_turtlebot3_msgs __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_turtlebot3_msgs __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_BUILDING_DLL_turtlebot3_msgs
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlebot3_msgs ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_EXPORT_turtlebot3_msgs
  #else
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlebot3_msgs ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_turtlebot3_msgs
  #endif
#else
  #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_EXPORT_turtlebot3_msgs __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_IMPORT_turtlebot3_msgs
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlebot3_msgs __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_MICROXRCEDDS_C_PUBLIC_turtlebot3_msgs
  #endif
#endif

#if __cplusplus
}
#endif

#endif  // TURTLEBOT3_MSGS__MSG__ROSIDL_TYPESUPPORT_MICROXRCEDDS_C__VISIBILITY_CONTROL_H_
