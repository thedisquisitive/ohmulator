# Minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(Ohmulator VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable for the main emulator
file(GLOB_RECURSE EMULATOR_SOURCES "src/*.cpp")
add_executable(emulator ${EMULATOR_SOURCES})

# Include directories for the emulator
include_directories(include)
include_directories(include/components)
include_directories(include/core)
include_directories(include/utils)

# Linker options for Windows (if needed)
if (WIN32)
    target_link_libraries(emulator PRIVATE ws2_32)
endif()

# ============= Google Test Setup ============= #
# Include Google Test from MSYS2 installation
include_directories(/mingw64/include)

# Link Google Test libraries
link_directories(/mingw64/lib)

# Find and include test source files
file(GLOB_RECURSE TEST_SOURCES "tests/*.cpp")
add_executable(runTests ${TEST_SOURCES})

# Link the Google Test libraries to the test executable
target_link_libraries(runTests gtest gtest_main pthread)

# Enable tests
enable_testing()

# Add a test target
add_test(NAME runTests COMMAND runTests)

# Optional: Add custom test target to build system
add_custom_target(tests
    COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure
    DEPENDS runTests
)
