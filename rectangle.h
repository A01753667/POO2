#pragma once

#include "figure.h"

class Rectangle : public Figure
{
public:
    Rectangle(double width, double length) :
        _width(width), _length(length) {}
    double area() const override;
    double perimeter() const override;
private:
    double _width;
    double _length;
};
