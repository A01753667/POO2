#include "figure.h"

std::string Figure::to_string() const
{
    return "My area is: "
        + std::to_string(area())
        + ", my perimeter is: "
        + std::to_string(perimeter());
}

std::ostream& operator<<(std::ostream& os, const Figure& figure)
{
    return os << figure.to_string();
}
