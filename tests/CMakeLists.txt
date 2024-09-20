# tests/CMakeLists.txt

# Add Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add test source files
file(GLOB TEST_SOURCES "*.cpp")

# Create the test executable
add_executable(runTests ${TEST_SOURCES})

# Link Google Test with your project
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

# Add test targets
add_test(NAME runTests COMMAND runTests)
