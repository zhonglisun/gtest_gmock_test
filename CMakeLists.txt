cmake_minimum_required(VERSION 3.14)
project(my_project)
LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/../lib)
# set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")
# SET(CMAKE_CXX_FLAGS "-O0 -m64 -g -fPIC ${CMAKE_CXX_FLAGS}")

set(GOOGLETEST_VERSION 1.10.0)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib) 
message(LIBRARY_OUTPUT_PATH)
#Note that googlemock target already builds googletest
option(BUILD_GMOCK "Builds the googlemock subproject" ON)
option(INSTALL_GTEST "Enable installation of googletest. (Projects embedding googletest may want to turn this OFF.)" ON)

INCLUDE_DIRECTORIES(
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdPart/gtest/googlemock/include
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdPart/gtest/googlemock/src
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdPart/gtest/googletest/include
    ${CMAKE_CURRENT_SOURCE_DIR}/thirdPart/gtest/googletest/src
)

if(BUILD_GMOCK)
  add_subdirectory(thirdPart/gtest/googlemock )
else()
  add_subdirectory( thirdPart/gtest/googletest )
endif()

# enable_testing()
# find_package(GTest REQUIRED)
add_executable(test hello_test.cc)
target_link_libraries(test gmock gtest pthread)
# gtest_discover_tests(test)