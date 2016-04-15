#pragma once

#include "Vec2.h"

class IInputHandler
{
public:
    virtual ~IInputHandler() { }

    virtual void setLeftPaddlePosition(Vec2 pos) = 0;

    virtual void setRightPaddlePosition(Vec2 pos) = 0;
};
