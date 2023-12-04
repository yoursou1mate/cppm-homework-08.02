//
//  rhomb.hpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#pragma once
#include <iostream>
#include "parallelogram.hpp"
#include "check_errors.hpp"


class Rhomb : public Parallelogram
{
public:
    Rhomb (int a, int A, int B) : Parallelogram (a, a, A, B)
    {
        if(a != b != c != d)
        {
            throw CheckError ("Figure creation error. Sides are not equal");
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
