#include <curses.h>
#include <stdlib.h>
#include <stdbool.h> // I just like it lol -iska

#include "board.h"
#include "loop.h"


int main()
{
    initscr();
    nocbreak();
    noecho();

    // FIXME: I honestly can't get the arrow keys to work for some reason.
    // keypad(stdscr, TRUE);

    board main_board = {};
    init_board(&main_board);
    // print_board(main_board);

    while (TRUE) {
        tick(&main_board);
    }

    endwin();
    return 0;
}
