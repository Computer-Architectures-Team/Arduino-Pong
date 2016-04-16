#include "KeyboardHandler.h"
#include <iostream>
#include <errno.h>
#include <thread>

KeyboardHandler::KeyboardHandler() { }

void input_worker(Vec2 const& left_pos, Vec2 const& right_pos) {
    Vec2& left_paddle_pos = const_cast<Vec2 &>(left_pos);
    Vec2& right_paddle_pos = const_cast<Vec2 &>(right_pos);
    unsigned char keyCode;
    while(true) {
        std::cin >> keyCode;
        if (keyCode == 0 || keyCode == 0xE0) {
            std::cin >> keyCode;
        }
        int ESC = 27,
            W = 119,
            S = 115,
            UP_ARROW = 72,
            DOWN_ARROW = 80;

        if (keyCode == ESC) {
            exit(EXIT_SUCCESS);
        } else if (keyCode == W) {
            left_paddle_pos.Y(left_paddle_pos.Y() + 1);
        } else if (keyCode == S) {
            left_paddle_pos.Y(left_paddle_pos.Y() - 1);
        } else if (keyCode == UP_ARROW) {
            right_paddle_pos.Y(right_paddle_pos.Y() + 1);
        } else if (keyCode == DOWN_ARROW) {
            right_paddle_pos.Y(right_paddle_pos.Y() - 1);
        }
    }
}

void KeyboardHandler::handle(Vec2 *left_paddle_pos, Vec2 *right_paddle_pos) {
    std::thread t(&KeyboardHandler::input_worker, std::ref(*left_paddle_pos), std::ref(*right_paddle_pos));
}
