# Specify the minimum version of CMake that can run this script
cmake_minimum_required(VERSION 3.12)

# Project name and version
project(Advent2020 VERSION 1.0)

# Request C++ 11 standard features
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
configure_file(include/Config.h.in
      "${CMAKE_CURRENT_SOURCE_DIR}/include/Config.h")

# Compile the passed source files into an executable 
add_executable(Advent2020 
    "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp")
target_include_directories(Advent2020 PUBLIC
       "${CMAKE_CURRENT_SOURCE_DIR}/include")

# Set the output directory for executables
set_target_properties(Advent2020
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")

