cmake_minimum_required(VERSION 3.13)
project(Compi2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Compi2 main.cpp hw3_output.cpp hw3_output.hpp parser.ypp scanner.lex utility.hpp)