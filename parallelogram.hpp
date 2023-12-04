//
//  parallelogram.hpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#pragma once
#include <iostream>
#include "quadrilateral.hpp"
#include "check_errors.hpp"


class Parallelogram : public Quadrilateral
{
public:
    Parallelogram (int a, int b, int A, int B) : Quadrilateral (4,a, b, a, b, A, B, A, B)
    {
        if(a != c)
        {
            throw CheckError ("Figure creation error. Sides a and c are not equal.");
        }
        if(b != d)
        {
            throw CheckError ("Figure creation error. Sides b and d are not equal.");
        }
        if(A != C)
        {
            throw CheckError ("Figure creation error. Angles A and C are not equal.");
        }
        if(B != D)
        {
            throw CheckError ("Figure creation error. Angles B and D are not equal.");
        }
    };
};
