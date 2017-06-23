cmake_minimum_required(VERSION 2.8)
project(Part5Project)

set(CMAKE_CXX_FLAGS "-std=c++0x -Wall")
set(CMAKE_DEBUG_POSTFIX _d)
if (CMAKE_BUILD_TYPE STREQUAL Debug)
    set(BUILD_POSTFIX "_d")
else(CMAKE_BUILD_TYPE STREQUAL Debug)
    set(BUILD_POSTFIX "")
endif(CMAKE_BUILD_TYPE STREQUAL Debug)

add_subdirectory(src)
