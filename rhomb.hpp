//
//  rhomb.hpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#pragma once
#include <iostream>
#include "parallelogram.hpp"

class Rhomb : public Parallelogram
{
public:
    Rhomb (int a, int A, int B) : Parallelogram (a, a, A, B){};
};
