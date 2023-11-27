//
//  right_triangle.cpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#include "right_triangle.hpp"

void Right_triangle::check()
{
    if (C != 90)
    {
        throw CheckError("Figure creation error. Wrong angle C.");
    }
    
}
