### STEP1 - standard working CMakeList.txt in SUBDIR
add_executable(cMakeLvl2Test TestMain.cpp)

### set_target_properties (BIN)
# output targets to /projName/bin instead of [binTreeRoot]/test
set_target_properties(cMakeLvl2Test PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set_target_properties(cMakeLvl2Test PROPERTIES OUTPUT_NAME cMakeLvl2Test${BUILD_POSTFIX})

### LINK to MyLibrary
target_link_libraries(cMakeLvl2Test cMakeLvl2Library)

