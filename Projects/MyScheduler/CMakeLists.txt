cmake_minimum_required(VERSION 3.24)
project(MyScheduler)

set(CMAKE_CXX_STANDARD 17)

file(GLOB src
        "src/*.h"
        "src/*.cpp")
add_executable(MyScheduler ${src})
