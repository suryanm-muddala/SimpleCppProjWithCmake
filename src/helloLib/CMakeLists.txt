add_library(
    HelloLib
    src/helloWorld.cpp
)

target_include_directories(HelloLib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/inc")
target_compile_definitions(HelloLib PUBLIC LIB_HELLO_VERSION=1)