cmake_minimum_required(VERSION 3.12)
project(yaes C)

set(CMAKE_C_STANDARD 11)

add_library(yaes yaes.c yaes.h)
add_executable(test test.c)
target_link_libraries(test yaes)
