cmake_minimum_required(VERSION 3.17)
project(base)

set(CMAKE_CXX_STANDARD 20)

add_executable(base main.cpp Hero.cpp Hero.h Map.cpp Map.h Enemy.cpp Enemy.h)