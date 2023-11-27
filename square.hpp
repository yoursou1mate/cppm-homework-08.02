//
//  square.hpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#pragma once
#include <iostream>
#include "rectangle.hpp"

class Square : public Rectangle
{
public:
    Square (int a) : Rectangle (a, b = a){};
};

