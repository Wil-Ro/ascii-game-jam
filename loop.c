#include <curses.h>
#include <stdio.h>

// How long to wait for user input, in milliseconds.
#define INPUT_TIMEOUT 5000


void tick() {
    timeout(INPUT_TIMEOUT);
    int keyhit = wgetch(stdscr);

    // TODO: Game logic here

    // switch (keyhit) {
    //     case KEY_UP: {
    //         break;
    //     }
    //     case KEY_DOWN: {
    //         break;
    //     }
    //     case KEY_RIGHT: {
    //         break;
    //     }
    //     case KEY_LEFT: {
    //         break;
    //     }
    // }
}
