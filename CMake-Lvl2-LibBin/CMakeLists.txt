### STEP1 - standard working CMakeList.txt
cmake_minimum_required(VERSION 2.8.9)
project (CMakeTutLvl2)
# TARGETS are configured in sub-dir's CMakeList.txt

# add FLAGS (for compiling/linking)
set(CMAKE_CXX_FLAGS "-std=c++0x -Wall")  
# set_target_properties <- REQUIRED to place before include_directories()
if (CMAKE_BUILD_TYPE STREQUAL Debug)
    set(BUILD_POSTFIX "_d")
else(CMAKE_BUILD_TYPE STREQUAL Debug)
    set(BUILD_POSTFIX "")
endif(CMAKE_BUILD_TYPE STREQUAL Debug)

### STEP2 - include 
# include MyLibrary's in [src/binTreeRoot]/cMakeLvl2
include_directories(cMakeLvl2)  
# add src
add_subdirectory(cMakeLvl2)  
add_subdirectory(test)
