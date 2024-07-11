# Function to find or fetch Google Test
function(find_or_fetch_gtest)
    # Try to find Google Test
    find_package(GTest QUIET)

    if(NOT GTest_FOUND)
        message(STATUS "Google Test not found. Downloading Google Test...")

        # Specify the directory where Google Test should be downloaded
        set(GTEST_DOWNLOAD_DIR ${REPO_ROOT}/lib/3pp)

        # Download and configure Google Test
        FetchContent_Declare(
            googletest
            URL https://github.com/google/googletest/archive/release-1.11.0.zip
            SOURCE_DIR ${GTEST_DOWNLOAD_DIR}
        )

        # Populate the Google Test content
        FetchContent_MakeAvailable(googletest)

        # Update GTest_FOUND to true since we are fetching it
        set(GTest_FOUND TRUE CACHE BOOL "Google Test found or fetched" FORCE)

        # Update GTest_INCLUDE_DIRS and GTest_LIBRARIES
        set(GTest_INCLUDE_DIRS ${GTEST_DOWNLOAD_DIR}/googletest/include)
        set(GTest_LIBRARIES gtest gtest_main)
    endif()

    message(STATUS "Google Test found: ${GTest_FOUND}")
    message(STATUS "Google Test include dirs: ${GTest_INCLUDE_DIRS}")
    message(STATUS "Google Test libraries: ${GTest_LIBRARIES}")
endfunction()