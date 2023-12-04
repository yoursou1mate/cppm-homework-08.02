//
//  equilateral_triangle.hpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#pragma once
#include <iostream>
#include "triangle.hpp"
#include "check_errors.hpp"



class Equilateral_triangle : public Triangle
{
public:
    Equilateral_triangle (int a) : Triangle (3, a, a, a, 60, 60, 60)
    {
        if ( a != b != c)
        {
            throw CheckError("Figure creation error. Sides are not equal");
        }
        if (A != 60 && B != 60 && C != 60)
        {
            throw CheckError("Figure creation error. Angles are not equal");
        }
    };
};
