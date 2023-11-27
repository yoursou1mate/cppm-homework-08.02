//
//  equilateral_triangle.hpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#pragma once
#include <iostream>
#include "triangle.hpp"

class Equilateral_triangle : public Triangle
{
public:
    Equilateral_triangle (int a) : Triangle (a, a, a, 60, 60, 60){};
};
