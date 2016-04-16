#pragma once

#include "Globals.h"
#include "IViewable.h"
#include "IInputHandler.h"
#include <array>
#include "Vec2.h"

class Game {
    private:
        Board& game_field_;
        IViewable* viewer_;
        IInputHandler* input_handler_;
        Vec2 ball_pos_;
        Vec2 left_paddle_pos_;
        Vec2 right_paddle_pos_;
        Vec2 ball_direction_;

        void modify_ball_direction(Vec2& ball_pos);
    public:
        Game(IViewable* viewer, IInputHandler* input_handler, Board& game_field);

        void run();

        void update();
};
