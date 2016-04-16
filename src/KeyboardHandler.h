#pragma once

#include "Vec2.h"
#include "IInputHandler.h"

class KeyboardHandler : public IInputHandler {
    public:
        void handle(Vec2& p1_paddle_pos, Vec2& p2_paddle_pos) override;
};
