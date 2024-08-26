cmake_minimum_required(VERSION 3.30.1)
set(CMAKE_MODULE_PATH "/home/hansol/ros2_ws/src/darknet_ros/darknet/cmake/Modules/")
project(CheckCUDA CUDA)
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/result.cmake"
  "set(CMAKE_CUDA_COMPILER \"${CMAKE_CUDA_COMPILER}\")\n"
  "set(CMAKE_CUDA_HOST_COMPILER \"${CMAKE_CUDA_HOST_COMPILER}\")\n"
  )