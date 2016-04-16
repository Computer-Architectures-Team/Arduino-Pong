#pragma once

#include "Vec2.h"
#include "IViewable.h"
#include "Globals.h"

class IInputHandler {
    public:
        virtual ~IInputHandler() { }

        virtual void handle(Vec2 *left_paddle_pos, Vec2 *right_paddle_pos) = 0;
};
