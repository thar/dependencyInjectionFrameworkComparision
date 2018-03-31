cmake_minimum_required (VERSION 2.8)
project (boostdi_example)

set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_CXX_FLAGS  "-std=c++11")

include_directories(boostDI)

add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(tests)