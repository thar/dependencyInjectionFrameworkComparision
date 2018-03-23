cmake_minimum_required (VERSION 2.8)
project (googlefruit_example)

set(CMAKE_CXX_FLAGS  "-std=c++11")

add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(tests)