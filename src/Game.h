#pragma once

#include "Globals.h"
#include "IViewable.h"
#include <array>

class Game {
    private:
        std::array<std::array<bool, Globals::BOARD_WIDTH>,
            Globals::BOARD_HEIGHT>& game_field_;

        IViewable *viewer_;
    public:
        Game(IViewable *viewer, std::array<std::array<bool, Globals::BOARD_WIDTH>, Globals::BOARD_HEIGHT>& game_field);

        void run();
};
