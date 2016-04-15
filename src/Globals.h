#pragma once

#include <array>

namespace Globals {
  const int BOARD_HEIGHT = 10;
  const int BOARD_WIDTH = 10;

  const int START_X = 0;
  const int START_Y = 0;

  const int START_DIRECTION_X = 1;
  const int START_DIRECTION_Y = 1;

  const int WIN_SCORE = 3;
  const int SESSION_LENGTH = 5;
}

typedef std::array<std::array<bool, Globals::BOARD_WIDTH>, Globals::BOARD_HEIGHT> Board;
