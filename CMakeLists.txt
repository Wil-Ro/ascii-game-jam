cmake_minimum_required(VERSION 3.24)
project(ascii_game_jam C)

set(CMAKE_C_STANDARD 11)

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

include_directories(.)

add_executable(ascii_game_jam
        board.c
        board.h
        loop.c
        loop.h
        main.c)
target_link_libraries(ascii_game_jam ${CURSES_LIBRARIES})
