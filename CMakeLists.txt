cmake_minimum_required(VERSION 3.5.1)
project(PCL-server)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")
set(CMAKE_C_FLAGS   "${CMAKE_C_FLAGS} -Wno-unused-parameter")

option( MEM_CHECK               "Use valgrind to check for memory errors"        ON)

include_directories(include)

set(SERVER_DIR ${CMAKE_SOURCE_DIR}/server)
set(API_DIR ${CMAKE_SOURCE_DIR}/server/cserv_api)
set(PYTHON_BINARY_DIR ${CMAKE_BINARY_DIR}/python/cxx)

add_library(cserv_core SHARED  src/prime.cpp
                               src/errors.cpp
           )
           
install(TARGETS cserv_core DESTINATION "lib")
install(DIRECTORY include/ DESTINATION include)

#Start test setup
enable_testing()
add_subdirectory(cpptests)
#End test setup

add_subdirectory(python)
add_subdirectory(server)
