cmake_minimum_required(VERSION 3.21)
project(Work C)

set(CMAKE_C_STANDARD 99)

add_executable(Work cmake-build-debug/main.c cmake-build-debug/algorithm.c cmake-build-debug/Learn_Demo/helloWorld.c)
