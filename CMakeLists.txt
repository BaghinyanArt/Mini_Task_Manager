cmake_minimum_required(VERSION 3.20)

project(MiniTaskManager)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

file(GLOB SOURCES
    src/*.cpp
)

add_executable(MiniTaskManager ${SOURCES})
