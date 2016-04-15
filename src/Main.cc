#include <iostream>

#include <array>
#include "Game.h"
#include "ConsoleViewer.h"

int main() {

  std::array<std::array<bool, Globals::BOARD_WIDTH>, Globals::BOARD_HEIGHT> game_field = { { false } };
  ConsoleViewer v(game_field);

  Game Game(&v, game_field);
  Game.run();

  return 0;
}
