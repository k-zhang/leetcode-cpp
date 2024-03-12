cmake_minimum_required(VERSION 3.10)

project(leetcode-cpp)

# Set C++ version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add your source files here
set(SOURCES
        src/common/common.cpp
        src/common/utils.cpp
        src/easy/climbing_stairs.cpp
        src/easy/armstrong_number.cpp
        src/easy/fibonacci_number.cpp
        src/easy/palindrome_number.cpp
        src/easy/same_tree.cpp
        src/easy/plus_one.cpp
)

# Add executable target
add_library(leetcode-cpp ${SOURCES})

# Add include directories
target_include_directories(leetcode-cpp PUBLIC include)

##################### Test #####################

# Add test files
set(TEST_SOURCES
        test/easy/climbing_stairs_test.cpp
        test/easy/armstrong_number_test.cpp
        test/easy/fibonacci_number_test.cpp
        test/easy/palindrome_number_test.cpp
        test/easy/same_tree_test.cpp
        test/easy/plus_one_test.cpp
)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.4.0 # or a later release
)

FetchContent_MakeAvailable(Catch2)

# Add test executable target
add_executable(leetcode-cpp-test ${TEST_SOURCES})
target_link_libraries(leetcode-cpp-test PRIVATE Catch2::Catch2WithMain)

# Include Catch library
target_include_directories(leetcode-cpp-test PRIVATE include)

# Link the test executable with the project library
target_link_libraries(leetcode-cpp-test PRIVATE leetcode-cpp)