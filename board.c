#include "board.h"

char get_char_for_tile(enum tile t)
{
    switch (t)
    {
        case 0:
            return ' ';
        case 1:
            return '#';
        case 2:
            return 'o';
        case 3:
            return '@';
    }
}

void print_board(board b)
{
    for (int i = 0; i < BOARD_DIMENTIONS; i++)
    {
        for(int j = 0; j < BOARD_DIMENTIONS; j++)
            putchar(get_char_for_tile(b[i][j]));
        putchar('\n');
    }
}

void create_boarders(board b)
{
    for (int i = 0; i < BOARD_DIMENTIONS; i++)
    {
        b[0][i] = WALL;
        b[BOARD_DIMENTIONS-1][i] = WALL;
        b[i][0] = WALL;
        b[i][BOARD_DIMENTIONS-1] = WALL;
    }
}
