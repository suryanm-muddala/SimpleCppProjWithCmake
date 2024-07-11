set(TEST_BINARY ${CMAKE_PROJECT_NAME}_test)

add_executable(
    ${TEST_BINARY}
    src/main.cpp
    src/helloLibTest.cpp 
)

target_link_libraries(${TEST_BINARY} PUBLIC HelloLib gtest)
