//
//  right_triangle.hpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#pragma once
#include <iostream>
#include "triangle.hpp"
#include "check_errors.hpp"

class Right_triangle : public Triangle
{
public:
    Right_triangle (int a, int b, int c, int A, int B) : Triangle (3, a, b, c, A, B, 90)
    {
        if (C != 90)
        {
            throw CheckError("Figure creation error. Wrong angle C.");
        }
    };

};






