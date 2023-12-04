//
//  rectangle.hpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#pragma once
#include <iostream>
#include "quadrilateral.hpp"
#include "check_errors.hpp"

class Rectangle : public Quadrilateral
{
public:
    Rectangle (int a, int b) : Quadrilateral (4, a, b, a, b, 90, 90, 90, 90)
    {
        if(a != c)
        {
            throw CheckError ("Figure creation error. Sides a and c are not equal.");
        }
        if(b != d)
        {
            throw CheckError ("Figure creation error. Sides b and d are not equal.");
        }
        if(A != 90 && B != 90 && C != 90 && D != 90)
        {
            throw CheckError ("Figure creation error. Angles are not equal to 90 degrees.");
        }
    };
};
