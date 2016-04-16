#include "Game.h"

#include <iostream>
#include <unistd.h>
#include <array>
#include <stdlib.h>

Game::Game(IViewable* viewer, IInputHandler* handler, Board& game_field)
    : viewer_(viewer),
    input_handler_(handler),
    ball_pos_(Globals::START),
    left_paddle_pos_(Globals::LEFT_PADDLE_START),
    right_paddle_pos_(Globals::RIGHT_PADDLE_START),
    ball_direction_(Globals::START_BALL_DIRECTION),
    game_field_(game_field) { }

void Game::run() {
    while (true) {
        viewer_->draw_field();
        viewer_->draw_ball(ball_pos_);
        viewer_->draw_left_paddle(left_paddle_pos_);
        viewer_->draw_right_paddle(right_paddle_pos_);

        modify_ball_direction(ball_pos_);

        update();

        input_handler_->handle(left_paddle_pos_, right_paddle_pos_);

        usleep(100000);
    }
}

void Game::modify_ball_direction(Vec2& ball_pos) {
    if (ball_pos.X() == 0) {
        ball_direction_.X(1);
    }

    if (ball_pos.Y() == 0) {
        ball_direction_.Y(1);
    }

    if (ball_pos.X() == Globals::BOARD_WIDTH - 1) {
        ball_direction_.X(-1);
    }

    if (ball_pos.Y() == Globals::BOARD_HEIGHT - 1) {
        ball_direction_.Y(-1);
    }
}

void Game::update() {
    // update ball
    game_field_[ball_pos_.Y()][ball_pos_.X()] = false;
    ball_pos_.X(ball_pos_.X() + ball_direction_.X());
    ball_pos_.Y(ball_pos_.Y() + ball_direction_.Y());
    game_field_[ball_pos_.Y()][ball_pos_.X()] = true;
}
