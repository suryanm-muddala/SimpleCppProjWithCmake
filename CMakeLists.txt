cmake_minimum_required(VERSION 3.14)

project(HellowWorldProject)

# Include cmake functions
include(${CMAKE_CURRENT_SOURCE_DIR}/commonFunctions.cmake)

# Set the output directory for executables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set the root directory of the repository
set(REPO_ROOT ${CMAKE_SOURCE_DIR})

# Change this flag to true to download googletest to run gtests
set(TESTING_REQUIRED FALSE)

# Conditional based on USE_CUSTOM_LIB
if(TESTING_REQUIRED)
    message(STATUS "googletest is adding to test")

    # Add Google Test libraries
    find_or_fetch_gtest()
    # add_subdirectory(lib/3pp/googletest)

    # Add a test subdurectory
    add_subdirectory(${REPO_ROOT}/test)

    # Enable testing
    enable_testing()
else()
    message(STATUS "No testing is used")

endif()

# Add simple Hellolib directory 
add_subdirectory(${REPO_ROOT}/src/helloLib)

# Add main app directory
add_subdirectory(${REPO_ROOT}/src/app)