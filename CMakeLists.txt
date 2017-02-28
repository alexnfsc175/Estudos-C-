cmake_minimum_required(VERSION 3.6)
project(Capitulo_3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        GradeBook.cpp
        GradeBook.h
        main.cpp)

add_executable(Capitulo_3 ${SOURCE_FILES})