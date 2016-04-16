#include "ConsoleViewer.h"

#include <iostream>
#include <stdlib.h>

const char ENTITY_MODEL = 'X';
const char EMPTY_MODEL = '-';

ConsoleViewer::ConsoleViewer(Board& game_field)
  : game_field_(game_field) {
      init();
}

void ConsoleViewer::init() {
    game_field_[Globals::START.Y()][Globals::START.X()] = true;

    for (int i = 0; i < Globals::PADDLE_LENGTH; i++) {
        game_field_[Globals::LEFT_PADDLE_START.Y() + i][Globals::LEFT_PADDLE_START.X()] = true;
    }

    for (int i = 0; i < Globals::PADDLE_LENGTH; i++) {
        game_field_[Globals::RIGHT_PADDLE_START.Y() + i][Globals::RIGHT_PADDLE_START.X()] = true;
    }
}

void ConsoleViewer::draw_field() {
#ifdef OS_WINDOWS
    system("CLS");
#else
    system("clear");
#endif

    for (int i = 0; i < Globals::BOARD_HEIGHT; i++) {
        for (int j = 0; j < Globals::BOARD_WIDTH; j++) {
            char current = game_field_[i][j] == false ? EMPTY_MODEL : ENTITY_MODEL;
            std::cout << current;
        }

        std::cout << std::endl;
    }
}

void ConsoleViewer::draw_ball(Vec2 pos) {
    game_field_[pos.Y()][pos.X()] = true;
}

void ConsoleViewer::draw_left_paddle(Vec2 pos) {
    for (int i = 0; i < Globals::PADDLE_LENGTH; i++) {
        game_field_[pos.Y() + i][pos.X()] = true;
    }
}

void ConsoleViewer::draw_right_paddle(Vec2 pos) {
    for (int i = 0; i < Globals::PADDLE_LENGTH; i++) {
        game_field_[pos.Y() + i][pos.X()] = true;
    }
}
