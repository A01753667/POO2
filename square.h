#pragma once

#include "rectangle.h"

class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}
    std::string to_string() const override;
    void make_pants();
};
