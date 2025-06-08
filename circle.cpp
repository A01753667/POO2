#include <cmath>
#include "circle.h"

double Circle::area() const
{
    return M_PI * _radius * _radius;
}

double Circle::perimeter() const
{
    return _radius * 2 * M_PI;
}

std::string Circle::to_string() const
{
    return "I'm a circle! " + Figure::to_string();
}
