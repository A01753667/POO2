#pragma once

#include "figure.h"

#include <cmath>

class Pentagon : public Figure {
public:
    Pentagon(double side);
    double area() const override;
    double perimeter() const override;
    std::string to_string() const override;
private:
    double _side;
};