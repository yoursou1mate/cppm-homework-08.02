//
//  isosceles_triangle.hpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#pragma once
#include <iostream>
#include "triangle.hpp"
#include "check_errors.hpp"


class Isosceles_triangle : public Triangle
{
public:
    Isosceles_triangle (int a, int b, int A, int B) : Triangle (3, a, b, a, A, B, A )
    {
        if (a != c)
        {
            throw CheckError("Figure creation error. Sides a and c are not equal.");
        }
        if (A != C)
        {
            throw CheckError("Figure creation error. Angles A and C are not equal.");
        }
    };
};
