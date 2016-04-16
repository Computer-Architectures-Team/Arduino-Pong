#pragma once

#include <array>
#include "Vec2.h"

namespace Globals {
  const int BOARD_HEIGHT = 15;
  const int BOARD_WIDTH = 40;

  const Vec2 START(0, 0);
  const Vec2 START_BALL_DIRECTION(1, 1);

  const Vec2 LEFT_PADDLE_START(0, 0);
  const Vec2 RIGHT_PADDLE_START(BOARD_WIDTH - 1, 0);

  const int PADDLE_LENGTH = 3;

  const int WIN_SCORE = 3;
  const int SESSION_LENGTH = 5;
}

typedef std::array<std::array<bool, Globals::BOARD_WIDTH>, Globals::BOARD_HEIGHT> Board;
