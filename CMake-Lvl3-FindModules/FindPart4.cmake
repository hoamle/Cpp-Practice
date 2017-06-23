# Try to find Part4 library
# Once done this will define
#  PART4_FOUND - if system found Part4 library
#  PART4_INCLUDE_DIRS - The Part4 include directories
#  PART4_LIBRARIES - The libraries needed to use Part4
#  PART4_DEFINITIONS - Compiler switches required for using Part4

# set (PART4_ROOT_DIR $ENV{WORKSPACE_ROOT}/part4)  # NOTE change accordingly
set (PART4_ROOT_DIR C:/Users/hoa/OneDrive/projects/cpp/CMake-Lvl2-LibTest)
# Uncomment the following line to print which directory CMake is looking in.
# MESSAGE(STATUS "PART4_ROOT_DIR: " ${PART4_ROOT_DIR})
MESSAGE(STATUS "PART4_ROOT_DIR: " ${PART4_ROOT_DIR})

find_path(PART4_INCLUDE_DIR  # NOTE change accordingly
    NAMES CMake-Lvl2/MyLibrary.hpp
    PATHS ${PART4_ROOT_DIR}
    DOC "The Part4 include directory"
)

find_library(PART4_LIBRARY 
    NAMES cMakeLvl2Library
    PATHS ${PART4_ROOT_DIR}/lib
    DOC "The Part4 library"
)

include(FindPackageHandleStandardArgs)
# handle the QUIETLY and REQUIRED arguments and set LOGGING_FOUND to TRUE
# if all listed variables are TRUE
find_package_handle_standard_args(PART4 DEFAULT_MSG PART4_INCLUDE_DIR PART4_LIBRARY)

if (PART4_FOUND)
    set(PART4_LIBRARIES ${PART4_LIBRARY} )
    set(PART4_INCLUDE_DIRS ${PART4_INCLUDE_DIR} )
    set(PART4_DEFINITIONS )
endif()

# Tell cmake GUIs to ignore the "local" variables.
mark_as_advanced(PART4_ROOT_DIR PART4_INCLUDE_DIR PART4_LIBRARY)
