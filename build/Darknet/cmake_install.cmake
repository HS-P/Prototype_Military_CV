# Install script for directory: /home/hansol/ros2_ws/src/darknet_ros/darknet

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/hansol/ros2_ws/install/Darknet")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/libdarknet.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/libdarknet.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/libdarknet.so"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/hansol/ros2_ws/src/darknet_ros/darknet/libdarknet.so")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/hansol/ros2_ws/src/darknet_ros/darknet" TYPE SHARED_LIBRARY FILES "/home/hansol/ros2_ws/build/Darknet/libdarknet.so")
  if(EXISTS "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/libdarknet.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/libdarknet.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/libdarknet.so"
         OLD_RPATH "/usr/local/cuda-10.2/lib64:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/libdarknet.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "dev" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/darknet" TYPE FILE FILES
    "/home/hansol/ros2_ws/src/darknet_ros/darknet/include/darknet.h"
    "/home/hansol/ros2_ws/src/darknet_ros/darknet/include/yolo_v2_class.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/uselib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/uselib")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/uselib"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/hansol/ros2_ws/src/darknet_ros/darknet/uselib")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/hansol/ros2_ws/src/darknet_ros/darknet" TYPE EXECUTABLE FILES "/home/hansol/ros2_ws/build/Darknet/uselib")
  if(EXISTS "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/uselib" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/uselib")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/uselib"
         OLD_RPATH "/usr/local/cuda-10.2/lib64:/home/hansol/ros2_ws/build/Darknet:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/uselib")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/hansol/ros2_ws/build/Darknet/CMakeFiles/uselib.dir/install-cxx-module-bmi-Release.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/darknet" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/darknet")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/darknet"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/hansol/ros2_ws/src/darknet_ros/darknet/darknet")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/hansol/ros2_ws/src/darknet_ros/darknet" TYPE EXECUTABLE FILES "/home/hansol/ros2_ws/build/Darknet/darknet")
  if(EXISTS "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/darknet" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/darknet")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/darknet"
         OLD_RPATH "/usr/local/cuda-10.2/lib64:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/darknet")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/hansol/ros2_ws/build/Darknet/CMakeFiles/darknet.dir/install-cxx-module-bmi-Release.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/uselib_track" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/uselib_track")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/uselib_track"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/hansol/ros2_ws/src/darknet_ros/darknet/uselib_track")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/home/hansol/ros2_ws/src/darknet_ros/darknet" TYPE EXECUTABLE FILES "/home/hansol/ros2_ws/build/Darknet/uselib_track")
  if(EXISTS "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/uselib_track" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/uselib_track")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/uselib_track"
         OLD_RPATH "/usr/local/cuda-10.2/lib64:/home/hansol/ros2_ws/build/Darknet:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/hansol/ros2_ws/src/darknet_ros/darknet/uselib_track")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/hansol/ros2_ws/build/Darknet/CMakeFiles/uselib_track.dir/install-cxx-module-bmi-Release.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/darknet/DarknetTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/darknet/DarknetTargets.cmake"
         "/home/hansol/ros2_ws/build/Darknet/CMakeFiles/Export/5726c601052f7a50d52030ff708e3c66/DarknetTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/darknet/DarknetTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/darknet/DarknetTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/darknet" TYPE FILE FILES "/home/hansol/ros2_ws/build/Darknet/CMakeFiles/Export/5726c601052f7a50d52030ff708e3c66/DarknetTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/darknet" TYPE FILE FILES "/home/hansol/ros2_ws/build/Darknet/CMakeFiles/Export/5726c601052f7a50d52030ff708e3c66/DarknetTargets-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/darknet" TYPE FILE FILES
    "/home/hansol/ros2_ws/build/Darknet/CMakeFiles/DarknetConfig.cmake"
    "/home/hansol/ros2_ws/build/Darknet/DarknetConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  if(CMAKE_INSTALL_COMPONENT MATCHES "^[a-zA-Z0-9_.+-]+$")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
  else()
    string(MD5 CMAKE_INST_COMP_HASH "${CMAKE_INSTALL_COMPONENT}")
    set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INST_COMP_HASH}.txt")
    unset(CMAKE_INST_COMP_HASH)
  endif()
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
  file(WRITE "/home/hansol/ros2_ws/build/Darknet/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
