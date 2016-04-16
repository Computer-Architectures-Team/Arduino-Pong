#pragma once

#include "IViewable.h"
#include <array>

class ConsoleViewer : public IViewable {
    private:
        Board& game_field_;

        void init();
    public:
        ConsoleViewer(Board& game_field);

        void draw_field() override;

        void draw_ball(Vec2 pos) override;

        void draw_left_paddle(Vec2 pos) override;

        void draw_right_paddle(Vec2 pos) override;
};
