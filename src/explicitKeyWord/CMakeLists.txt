add_library(
    ExplicitKeyWordLib
    src/explicitKeyWord.cpp
)

target_include_directories(ExplicitKeyWordLib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/inc")
target_compile_definitions(ExplicitKeyWordLib PUBLIC)