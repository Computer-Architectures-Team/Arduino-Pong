#include "Game.h"

#include <iostream>
#include <unistd.h>
#include <array>
#include <stdlib.h>

Game::Game(IViewable *viewer, Board& game_field)
    : viewer_(viewer),
    game_field_(game_field) { }

void Game::run() {
    while (true) {
        viewer_->draw_field();
        viewer_->draw_ball(0, 0);
        viewer_->draw_left_paddle(0, 0, 0);
        viewer_->draw_right_paddle(0, 0, 0);

        sleep(1);
    }
}
