### STEP1 - standard working CMakeList.txt in SUBDIR
add_library(cMakeLvl2Library SHARED MyLibrary.cpp)

### set_target_properties (LIB)
# output targets to /projName/lib instead of [binTreeRoot]/CMake-Lvl2
set_target_properties(cMakeLvl2Library PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)  # for shared lib
# set_target_properties(cMakeLvl2Library PROPERTIES ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/lib)  # for static lib
# Equivalently to use install() command <- see face_seg_image/CMakeLists.txt
set_target_properties(cMakeLvl2Library PROPERTIES OUTPUT_NAME cMakeLvl2Library${BUILD_POSTFIX})
