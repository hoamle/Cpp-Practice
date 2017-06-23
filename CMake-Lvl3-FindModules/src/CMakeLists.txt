### STEP0 - PATH of the MODULE to look for
set (CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR})

# Part4 package
find_package(Part4 REQUIRED)
if (NOT PART4_FOUND)
    message(FATAL_ERROR "Package PART4 not found")
endif (NOT PART4_FOUND)

add_definitions(${PART4_DEFINITIONS})
include_directories(${PART4_INCLUDE_DIR})
set(LIBRARIES ${LIBRARIES} ${PART4_LIBRARIES})

### STEP1 - standard CMakeLists.txt
add_executable(part5app App.cpp)
target_link_libraries(part5app ${LIBRARIES})  # link to all necessary LIBRARIES
set_target_properties(part5app PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set_target_properties(part5app PROPERTIES OUTPUT_NAME part5app${BUILD_POSTFIX})
