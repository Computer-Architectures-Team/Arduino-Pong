#include <iostream>

#include <array>
#include "Game.h"
#include "ConsoleViewer.h"
#include "KeyboardHandler.h"

int main() {
    Board game_field = { { false } };
    ConsoleViewer v(game_field);
    KeyboardHandler input_handler;

    Game game(&v, &input_handler, game_field);
    game.run();

    return 0;
}
