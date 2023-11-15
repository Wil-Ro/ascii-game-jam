#ifndef _BOARD_H
#define _BOARD_H

#include <stdio.h>

#define BOARD_DIMENSIONS 100 // this value represents board dimensions e.g. 100x100, its always a square so its just one value

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

/**
 * The global board state, includes extra information for easy access:
 *  - The player's position.
 *  - Enemy positions.
 */
typedef struct {
    enum tile tiles[BOARD_DIMENSIONS][BOARD_DIMENSIONS];
    int player_x;
    int player_y;
    // DO NOT MODIFY!!!
    int _old_player_x;
    int _old_player_y;
    // TODO: Enemy information?
} board;

char get_char_for_tile(enum tile);

void print_board(board *b);

void init_board(board *b);

#endif // _BOARD_H
