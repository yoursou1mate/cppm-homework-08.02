//
//  parallelogram.hpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#pragma once
#include <iostream>
#include "quadrilateral.hpp"

class Parallelogram : public Quadrilateral
{
public:
    Parallelogram (int a, int b, int A, int B) : Quadrilateral (a, b, a, b, A, B, A, B){};
};
