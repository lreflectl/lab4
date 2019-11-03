cmake_minimum_required(VERSION 2.8)
project(my_favourite_project)

set(SOURCE_EXE main.cpp calculator.cpp lauccator.cpp)

add_library(functions STATIC calculator.cpp lacucator.cpp)
add_executable(hello main.cpp)

target_link_libraries(hello functions)
