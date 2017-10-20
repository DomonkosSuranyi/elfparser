cmake_minimum_required(VERSION 2.8)
project(elfparser)

message("--> CXX: ${CMAKE_CXX_COMPILER}")

include_directories(include)

add_definitions(-std=c++14
                -Wall
                -Werror
                -g
                )

add_subdirectory(src)

install(DIRECTORY include DESTINATION .)

