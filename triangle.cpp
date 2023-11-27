//
//  triangle.cpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#include "triangle.hpp"


std::string Triangle::get_sides ()
{
    std::string all_sides = "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c);
    return all_sides;
};

std::string Triangle::get_angles ()
{
    std::string all_angles = "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C);
    return all_angles;
};

void Triangle::print_info()
 {
     std::cout << "Sides: ";
     std::cout << get_sides() << std::endl;
     std::cout << "Angles: ";
     std::cout << get_angles() << std::endl;
};

    void Triangle::check ()
{
        if (sides_count != 3)
        {
            throw CheckError("Figure creation error. Wrong  number of sides.");
        }
        if (A + B + C != 180)
        {
            throw CheckError("Figure creation error. Angles are not equal to 180.");
        }
}
