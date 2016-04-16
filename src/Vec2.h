#pragma once

class Vec2 {
    private:
        int x_, y_;
    public:
        Vec2(int x, int y);

        int X() const;

        void X(int val);

        int Y() const;

        void Y(int val);
};
