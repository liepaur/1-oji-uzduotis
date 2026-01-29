cmake_minimum_required(VERSION 3.10)
project(StudentuStrategijos)

set(CMAKE_CXX_STANDARD 17)
set(SOURCES
    strategiju_testas.cpp
    studentas.cpp
    funkcijos.cpp
    strategijos.cpp
)

add_executable(testas ${SOURCES})
