//
//  quadrilateral.hpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#pragma once

#include <iostream>
#include "figure.hpp"

class Quadrilateral : public Figure
{
protected:
    int a = 0;
    int b  = 0;
    int c = 0;
    int d = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    
public:
    Quadrilateral (int a, int b, int c, int d, int A, int B, int C, int D)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    
    std::string get_sides ();
    std::string get_angles ();
    void print_info () override;
};

