#pragma once

#include "Vec2.h"
#include "IViewable.h"
#include "Globals.h"

class IInputHandler {
    public:
        virtual ~IInputHandler() { }

        virtual void handle(Vec2& p1_paddle_pos, Vec2& p2_paddle_pos) = 0;
};
