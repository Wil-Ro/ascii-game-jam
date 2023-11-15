#include "board.h"

char get_char_for_tile(enum tile t)
{
    switch (t)
    {
        case EMPTY:
            return ' ';
        case WALL:
            return '#';
        case ENEMY:
            return 'o';
        case PLAYER:
            return '@';
    }
}

// void print_board(board *b)
// {
//     for (int i = 0; i < BOARD_DIMENSIONS; i++)
//     {
//         for(int j = 0; j < BOARD_DIMENSIONS; j++)
//             putchar(get_char_for_tile(b->tiles[i][j]));
//         putchar('\n');
//     }
// }

void create_borders(board *b)
{
    for (int i = 0; i < BOARD_DIMENSIONS; i++)
    {
        b->tiles[0][i] = WALL;
        b->tiles[BOARD_DIMENSIONS-1][i] = WALL;
        b->tiles[i][0] = WALL;
        b->tiles[i][BOARD_DIMENSIONS-1] = WALL;
    }
}

void place_player(board *b) {
    // FIXME: Temporary placement position for now.
    b->player_x = BOARD_DIMENSIONS / 2;
    b->player_y = BOARD_DIMENSIONS / 2;
    b->tiles[b->player_x][b->player_y] = get_char_for_tile(PLAYER);
}

void init_board(board *b) {
    create_borders(b);
    place_player(b);
}
