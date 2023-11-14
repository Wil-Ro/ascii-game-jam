#include <stdlib.h>
#include "board.h"


int main()
{
    board main_board = {};
    create_boarders(main_board);
    print_board(main_board);
}
