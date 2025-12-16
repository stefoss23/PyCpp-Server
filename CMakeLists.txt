cmake_minimum_required(VERSION 3.5.1)
project(RadarSamplerSimulator)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
set(CMAKE_C_FLAGS   "${CMAKE_C_FLAGS} -Wno-unused-parameter")

#include_directories(include)
#set(INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

#set(TEST_DIR ${CMAKE_SOURCE_DIR}/test-data)

#add_library(rads SHARED  src/utils/utils.cpp

#           )
           
#target_link_libraries(rads pthread)
#install(TARGETS rads DESTINATION "lib")
#install(DIRECTORY include/ DESTINATION include)

#Start test setup
#enable_testing()
#add_subdirectory(tests)
#End test setup
