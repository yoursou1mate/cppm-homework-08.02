//
//  isosceles_triangle.hpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#pragma once
#include <iostream>
#include "triangle.hpp"

class Isosceles_triangle : public Triangle
{
public:
    Isosceles_triangle (int a, int b, int A, int B) : Triangle (a, b, a, A, B, A ){};
};
