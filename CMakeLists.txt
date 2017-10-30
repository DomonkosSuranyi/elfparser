cmake_minimum_required(VERSION 2.8.8)
project(elfparser)

message("--> CXX: ${CMAKE_CXX_COMPILER}")

include_directories(include)

add_definitions(-std=c++14
                -Wall
                -Werror
                -g
                )

include_directories(SYSTEM thirdparty/include)
link_directories(${CMAKE_SOURCE_DIR}/thirdparty/lib)

list(APPEND EXTPROJ_CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_SOURCE_DIR}/thirdparty/)
list(APPEND EXTPROJ_CMAKE_ARGS -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER})

include(ExternalProject)
ExternalProject_Add(
        GOODIES
        GIT_REPOSITORY https://github.com/susu/goodies
        GIT_TAG v0.7
        CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_SOURCE_DIR}/thirdparty/
        )

message("--> EXTPROJ_CMAKE_ARGS: ${EXTPROJ_CMAKE_ARGS}")

set(LIBS ${LIBS})
list(APPEND LIBS goodies)

add_subdirectory(src)
add_subdirectory(test)

install(DIRECTORY include DESTINATION .)

