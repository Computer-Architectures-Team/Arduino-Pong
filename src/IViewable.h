#pragma once

#include "Globals.h"

class IViewable {
    public:
        virtual ~IViewable() { }

        virtual void draw_field() = 0;

        virtual void draw_ball(Vec2 pos) = 0;

        virtual void draw_left_paddle(Vec2 pos) = 0;

        virtual void draw_right_paddle(Vec2 pos) = 0;
};
