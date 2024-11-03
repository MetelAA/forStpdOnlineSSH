cmake_minimum_required(VERSION 3.16)
project(fixLB2 C)

set(CMAKE_C_STANDARD 99)

add_executable(fixLB2 menu.c diff.h diff.c max.h max.c min.c min.h max.c max.h sum.c sum.h)