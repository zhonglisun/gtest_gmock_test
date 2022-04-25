set(CMAKE_CXX_STANDARD 11)

add_executable(test hello_test.cc)
target_link_libraries(test gmock gtest pthread)