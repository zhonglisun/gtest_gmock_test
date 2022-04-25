set(CMAKE_CXX_STANDARD 11)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include)
add_executable(test hello_test.cc)
target_link_libraries(test gmock gtest pthread)