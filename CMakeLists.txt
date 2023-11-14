cmake_minimum_required(VERSION 3.24)
project(ascii_game_jam C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(ascii_game_jam
        board.c
        board.h
        main.c)
