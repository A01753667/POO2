#include "pentagon.h"

Pentagon::Pentagon(double side) : _side(side) {}

double Pentagon::perimeter() const {
    return 5 * _side;
}

double Pentagon::area() const {
    double apothem = _side / (2 * tan(M_PI/5));
    return (perimeter() * apothem) / 2;
}

std::string Pentagon::to_string() const {
    return "I'm a pentagon. " + Figure::to_string();
}