cmake_minimum_required(VERSION 2.8)

project(AIDBMS_Lecture)

## Compiler options
set(CMAKE_CXX_STANDARD 17)

include_directories(include/)

## targets
add_executable(aogonn
    aogonn.cpp
)
