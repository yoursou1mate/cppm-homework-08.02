//
//  rectangle.hpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#pragma once
#include <iostream>
#include "quadrilateral.hpp"

class Rectangle : public Quadrilateral
{
public:
    Rectangle (int a, int b) : Quadrilateral (a, b, a, b, A = 90, A, A, A){};
};
