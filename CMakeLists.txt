
cmake_minimum_required(VERSION 3.10)

configure_file(input01.txt input01.txt COPYONLY)

set(ENV{EXE_NAME} sampleActionsOutput)

project(ActionsExample)

set(CMAKE_CXX_STANDARD 17)

add_executable($ENV{EXE_NAME} main.cpp)