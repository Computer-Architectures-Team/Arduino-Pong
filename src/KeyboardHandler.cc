#include "KeyboardHandler.h"
#include <iostream>

void KeyboardHandler::handle(Vec2& p1_paddle_pos, Vec2& p2_paddle_pos) {
    unsigned char keyCode;

    std::cin >> keyCode;

    if (keyCode == 0 || keyCode == 0xE0) {
        std::cin >> keyCode;
    }

    if (keyCode == 27) {
        exit(0);
    } else if (keyCode == 119) {
        // First (left) player up - W
        p1_paddle_pos.Y(p1_paddle_pos.Y() - Globals::PADDLE_LENGTH);
    } else if (keyCode == 115) {
        // First (left) player down - S
        p1_paddle_pos.Y(p1_paddle_pos.Y() + Globals::PADDLE_LENGTH);
    } else if (keyCode == 72) {
        // Second (right) player up - Up arrow
        p2_paddle_pos.Y(p2_paddle_pos.Y() - Globals::PADDLE_LENGTH);
    } else if (keyCode == 80) {
        // Second (right) player down - Down arrow
        p2_paddle_pos.Y(p2_paddle_pos.Y() + Globals::PADDLE_LENGTH);
    }
}
