#pragma once

#include "IViewable.h"
#include <array>

class ConsoleViewer : public IViewable {
    private:
        std::array<std::array<bool, Globals::BOARD_WIDTH>, Globals::BOARD_HEIGHT>& game_field_;
    public:
        ConsoleViewer(std::array<std::array<bool, Globals::BOARD_WIDTH>, Globals::BOARD_HEIGHT>& game_field);

        void draw_field() override;

        void draw_ball(int row, int col) override;

        void draw_left_paddle(int col, int start_row, int end_row) override;

        void draw_right_paddle(int col, int start_row, int end_row) override;
};
