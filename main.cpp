#include <iostream>
#include <vector>
#include "circle.h"
#include "rectangle.h"
#include "square.h"

double add_area_and_perimeter(const Figure& fig)
{
    return fig.area() + fig.perimeter();
}

int main()
{
    Circle c(2.0);
    Rectangle r(4.0, 6.0);
    Square s(5.5);

    std::vector<Figure*> vec = {&c, &r, &s, &c};

    double suma_areas = 0.0;
    for (Figure* fig_ptr : vec) {
        std::cout << fig_ptr->to_string() << "\n";
        suma_areas += fig_ptr->area();

        Square* square_ptr = dynamic_cast<Square*>(fig_ptr);
        if (square_ptr != nullptr) {
            square_ptr->make_pants();
        }
    }

    std::cout << suma_areas << "\n";

    std::cout << add_area_and_perimeter(c) << "\n";
    std::cout << add_area_and_perimeter(r) << "\n";
    std::cout << add_area_and_perimeter(s) << "\n";

    // std::cout << c << "\n";
    // std::cout << r << "\n";
    // std::cout << s << "\n";
    // s.make_pants();
    // r = s;
    // std::cout << r << "\n";
    return 0;
}
