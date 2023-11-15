#include <curses.h>
#include <stdio.h>

#include "graphics.h"
#include "loop.h"

void handle_input(board *b, int key) {
    // TODO: Bounds checks
    switch (key) {
        case UP_KEY: {
            ++b->player_y;
            break;
        }
        case LEFT_KEY: {
            --b->player_x;
            break;
        }
        case DOWN_KEY: {
            --b->player_y;
            break;
        }
        case RIGHT_KEY: {
            ++b->player_x;
            break;
        }
    }
}

void tick(board *b) {
    move(0, 0);
    timeout(INPUT_TIMEOUT);
    int key = wgetch(stdscr);

    if (key != ERR) {
        // char debug[10];
        // sprintf(debug, "%i %i\n", key, KEY_DOWN);
        // addstr(debug);
        handle_input(b, key);
    }

    // TODO: Game logic here

    draw(b);
}
