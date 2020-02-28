cmake_minimum_required(VERSION 2.8)
add_library(Sample1 STATIC sample1.c)

add_executable(Demo main.c)
target_link_libraries(Demo Sample1)
