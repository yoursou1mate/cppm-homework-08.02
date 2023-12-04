//
//  square.hpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#pragma once
#include <iostream>
#include "rectangle.hpp"
#include "check_errors.hpp"

class Square : public Rectangle
{
public:
    Square (int a) : Rectangle (a, a)
    {
        if(a != b != c != d)
        {
            throw CheckError ("Figure creation error. Sides are not equal");
        }
        if(A != 90 &&B != 90 && C != 90 && D != 90)
        {
            throw CheckError ("Figure creation error. Angles are not equal to 90 degrees");
        }
    };
};

