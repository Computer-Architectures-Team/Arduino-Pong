#pragma once

#include "Vec2.h"
#include "IInputHandler.h"

class KeyboardHandler : public IInputHandler {
    private:
        pthread_t input_thread_;

        void input_worker(Vec2 const& left_paddle_pos, Vec2 const& right_paddle_pos);
    public:
        KeyboardHandler();

        void handle(Vec2 *left_paddle_pos, Vec2 *right_paddle_pos) override;
};
