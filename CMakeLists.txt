cmake_minimum_required(VERSION 2.8)

project(aogonn)

## Compiler options
set(CMAKE_CXX_STANDARD 17)

include_directories(include/)

## targets
add_executable(aogonn
    aogonn.cpp
    src/base/system.cpp
    src/base/settings.cpp
    src/data/database.cpp
)
