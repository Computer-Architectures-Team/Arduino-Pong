#pragma once

#include "Globals.h"
#include "IViewable.h"
#include <array>

class Game {
    private:
        Board& game_field_;

        IViewable *viewer_;
    public:
        Game(IViewable *viewer, Board& game_field);

        void run();
};
