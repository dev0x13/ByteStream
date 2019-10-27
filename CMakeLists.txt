cmake_minimum_required(VERSION 3.8)
project(ByteStream)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-std=c++11 -Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# 1. Library

file(GLOB_RECURSE SOURCE_FILES src/*.cpp)

set(INCLUDE_DIR include/)

add_library(ByteStream STATIC ${SOURCE_FILES})

target_include_directories(ByteStream PUBLIC ${INCLUDE_DIR})

# 2. Example

add_executable(example examples/example.cpp)

target_link_libraries(example ByteStream)
