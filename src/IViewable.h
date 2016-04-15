#pragma once

#include "Globals.h"

class IViewable {
    public:
        virtual ~IViewable() { }

        virtual void draw_field() = 0;

        virtual void draw_ball(int row, int col) = 0;

        virtual void draw_left_paddle(int col, int start_row, int end_row) = 0;

        virtual void draw_right_paddle(int col, int start_row, int end_row) = 0;
};
