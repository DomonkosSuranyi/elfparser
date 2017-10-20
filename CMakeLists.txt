cmake_minimum_required(VERSION 2.8)
project(elfparser)

include_directories(include)

add_definitions(-std=c++11
                -Wall
                -Werror
                -g
                )

add_subdirectory(src)
