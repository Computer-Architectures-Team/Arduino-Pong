#include <iostream>

#include <array>
#include "Game.h"
#include "ConsoleViewer.h"

int main() {
    Board game_field = { { false } };
    ConsoleViewer v(game_field);

    Game game(&v, game_field);
    game.run();

    return 0;
}
