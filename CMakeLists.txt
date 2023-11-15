cmake_minimum_required(VERSION 3.24)
project(ascii_game_jam C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_FLAGS "-g") # Debug flags for the time being.

find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

include_directories(.)

add_executable(ascii_game_jam
        board.c
        graphics.c
        loop.c
        main.c)
target_link_libraries(ascii_game_jam ${CURSES_LIBRARIES})
