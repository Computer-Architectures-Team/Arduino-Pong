#pragma once

#include "Globals.h"
#include <array>
#include <ctime>

class Session {
    private:
        std::array<std::pair<uint8_t, uint8_t>, Globals::SESSION_LENGTH> entries_;
        int size_;
        time_t start_;
        time_t end_;

    public:
        Session();

        void start();

        void end();

        void add_score(std::pair<uint8_t, uint8_t> score);

        int get_size() const;

        std::string serialize() const;
};
