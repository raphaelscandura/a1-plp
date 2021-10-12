cmake_minimum_required(VERSION 3.17)
project(a1-plp C)

set(CMAKE_C_STANDARD 99)

add_executable(a1-plp C/main.c C/ginastica.h C/ginastica.c C/arremesso.c C/arremesso.h)