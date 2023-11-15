#include <curses.h>
#include <stdlib.h>
#include <stdbool.h> // I just like it lol

#include "board.h"
#include "loop.h"


int main()
{
    initscr();
    nocbreak();
    noecho();
    keypad(stdscr, TRUE);

    board main_board = {};
    // create_boarders(main_board);
    // print_board(main_board);

    while (TRUE) {
        tick();
    }

    endwin();
    return 0;
}
