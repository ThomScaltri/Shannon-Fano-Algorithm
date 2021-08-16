cmake_minimum_required(VERSION 3.17)
project(Shannon_Fano_Algorithm C)

set(CMAKE_C_STANDARD 99)

add_executable(Shannon_Fano_Algorithm main.c bit_op.c bit_op.h utils.c utils.h stream.c stream.h initializer.c initializer.h  ShF.h ShF.c file.c file.h )