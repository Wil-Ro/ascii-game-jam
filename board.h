#ifndef _BOARD_H
#define _BOARD_H

#include <stdio.h>

#define BOARD_DIMENTIONS 100 // this value represents board dimentions e.g. 100x100, its always a square so its just one value

/*
 board isnt the maze, board is the general arena, the maze will be build into it by a maze generator
 its an array of enums. Each one representing the state of that current tile

 */

enum tile
{
    EMPTY,
    WALL,
    ENEMY,
    PLAYER
};

typedef enum tile board[BOARD_DIMENTIONS][BOARD_DIMENTIONS];

char get_char_for_tile(enum tile);

void print_board(board b);

void create_boarders(board b);

#endif // _BOARD_H
