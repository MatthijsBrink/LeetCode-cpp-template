cmake_minimum_required(VERSION 3.2)

project(leetcode-cpp)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_CLAGS} -Wall -Werror")

add_executable(out main.cpp
        main.cpp
        solution.h
        log.h
)
