#ifndef _LOOP_H
#define _LOOP_H

#include "board.h"

// How long to wait for user input, in milliseconds.
#define INPUT_TIMEOUT 50

#define UP_KEY    'w'
#define DOWN_KEY  's'
#define LEFT_KEY  'a'
#define RIGHT_KEY 'd'

/**
 * Ticks everything (inputs, drawing, etc...).
 */
void tick(board *b);

#endif // _LOOP_H
