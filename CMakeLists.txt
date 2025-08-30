cmake_minimum_required(VERSION 3.14)
project(Coding-Interviews-CPP)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set policy for FetchContent timestamps
if(POLICY CMP0135)
  cmake_policy(SET CMP0135 NEW)
endif()

# Fetch GoogleTest once for the whole repo
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
FetchContent_MakeAvailable(googletest)

# Enable testing
enable_testing()

# Generate compile_commands.json for better IntelliSense
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Function to create test executable
function(create_test_executable test_name source_file test_file)
    add_executable(${test_name}
        ${source_file}
        ${test_file}
    )

    target_link_libraries(${test_name}
        gtest_main
        gtest
        pthread
    )

    add_test(NAME ${test_name} COMMAND ${test_name})
endfunction()

# Add subdirectories
add_subdirectory(Leetcode)

# Add more subdirectories as you create them
# add_subdirectory(AlgoExpert)
# add_subdirectory(HackerRank)
# add_subdirectory(CodeSignal)
# add_subdirectory(Pramp)
