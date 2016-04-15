#pragma once

#include "Vec2.h"
#include "IInputHandler.h"

class KeyboardHandler : public IInputHandler
{
public:
    void setLeftPaddlePosition(Vec2 pos) override;

    void setRightPaddlePosition(Vec2 pos) override;
};
