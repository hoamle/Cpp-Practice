### STEP1 - minimum working CMakeList.txt
cmake_minimum_required(VERSION 2.8.9)
project (CMakeProjectPart2)
add_executable(hello main.cpp)  
# `hello`(.exe) is 1 of our `target`s
# See Level 4 for (shared/static) Library as a target

### STEP2 - FLAGS (for compiling/linking)
set(CMAKE_CXX_FLAGS "-std=c++0x -Wall")  
# equal to add_definitions(-Wall -std=c++0x)
# -Wall: show all compiler warnings 
# -std=c++0x: enable support for C++11
message("CMAKE_BUILD_TYPE is ${CMAKE_BUILD_TYPE}")
# passed from -DCMAKE_BUILD_TYPE=Release|Debug|...

### STEP3 - PATHS (for targets)
set_target_properties(hello PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})
# place executable `hello` to CMAKE_CURRENT_SOURCE_DIR = /path/to/CMakeList.txt/dir/
set_target_properties(hello PROPERTIES DEBUG_POSTFIX "_d")  # add `_d` to `hello`, to distinguish from Release build