#include "ConsoleViewer.h"

#include <iostream>
#include <stdlib.h>

ConsoleViewer::ConsoleViewer(Board& game_field)
  : game_field_(game_field) {
    game_field_[Globals::START_Y][Globals::START_X] = true;
}

void ConsoleViewer::draw_field() {
#ifdef OS_WINDOWS
    system("CLS");
#else
    system("clear");
#endif

    for (int i = 0; i < Globals::BOARD_HEIGHT; i++) {
        for (int j = 0; j < Globals::BOARD_WIDTH; j++) {
            char current = game_field_[i][j] == false ? '0' : 'X';
            std::cout << current;
        }

        std::cout << std::endl;
    }
}

void ConsoleViewer::draw_ball(int row, int col) {
    game_field_[row][col] = true;
}

void ConsoleViewer::draw_left_paddle(int col, int start_row, int end_row) {
    for (int i = start_row; i <= end_row; i++) {
        game_field_[i][col] = true;
    }
}

void ConsoleViewer::draw_right_paddle(int col, int start_row, int end_row) {
    for (int i = start_row; i <= end_row; i++) {
        game_field_[i][col] = true;
    }
}
