#include "Vec2.h"

Vec2::Vec2(int x, int y)
    : x_(x),
    y_(y) { }

int Vec2::X() const { return x_; }

void Vec2::X(int val) { x_ = val; }

int Vec2::Y() const { return y_; }

void Vec2::Y(int val) { y_ = val; }
