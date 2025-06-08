#include "rectangle.h"

double Rectangle::area() const
{
    return _width * _length;
}

double Rectangle::perimeter() const
{
    return 2 * (_width + _length);
}
