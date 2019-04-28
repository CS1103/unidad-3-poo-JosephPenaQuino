cmake_minimum_required(VERSION 3.14)
project(unidad_3_poo_JosephPenaQuino)

set(CMAKE_CXX_STANDARD 14)

add_executable(unidad_3_poo_JosephPenaQuino main.cpp Charge.h Charge.cpp Simulator.h Simulator.cpp main_test.cpp)
add_executable(Test test.cpp)