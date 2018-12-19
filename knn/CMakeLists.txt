cmake_minimum_required(VERSION 2.8)

set(CMAKE_BUILD_TYPE Release)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -funroll-loops")

project(knn)

add_subdirectory(src)
add_subdirectory(examples)
