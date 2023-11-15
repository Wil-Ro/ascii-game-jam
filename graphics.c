#include <curses.h>
#include <stdbool.h>

#include "graphics.h"

void update_draw_tile(board *b, int x, int y, enum tile t) {
    bool x_invalid = x < 0 || x >= BOARD_DIMENSIONS;
    bool y_invalid = y < 0 || y >= BOARD_DIMENSIONS;

    if (x_invalid > BOARD_DIMENSIONS || y_invalid) {
        // FIXME: Need a way cleaner and faster way of doing this!!
        if (x_invalid) {
            x = x < 0 ? 0 : x;
            x = x >= BOARD_DIMENSIONS ? BOARD_DIMENSIONS - 1 : x;
        }

        if (y_invalid) {
            y = y < 0 ? 0 : y;
            y = y >= BOARD_DIMENSIONS ? BOARD_DIMENSIONS - 1 : y;
        }

        t = EMPTY;
    }

    // Needed for curses, ugly, I know, but it works.
    const char c[2] = { get_char_for_tile(t), '\x00' };
    b->tiles[x][y] = *c;
    move(x, y);
    addstr(c);
} 

void draw(board *b) {
    if (b->player_x != b->_old_player_x || b->player_y != b->_old_player_y) {
        // We need to erase the old character first.
        update_draw_tile(b, b->_old_player_x, b->_old_player_y, EMPTY);
        // Then we'll place down the player at the new position.
        update_draw_tile(b, b->player_x, b->player_y, PLAYER);
        // Finally, update the old position.
        b->_old_player_x = b->player_x;
        b->_old_player_y = b->player_y;
    }
}
