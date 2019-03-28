cmake_minimum_required(VERSION 2.6)

add_definitions(-Wall -std=c++0x -D HOME)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
include_directories("../")
set( CMAKE_EXPORT_COMPILE_COMMANDS ON )


