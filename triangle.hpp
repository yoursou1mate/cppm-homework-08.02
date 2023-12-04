//
//  triangle.hpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#pragma once
#include <iostream>
#include "figure.hpp"
#include "check_errors.hpp"


class Triangle : public Figure
{
protected:
    int sides_count = 3;
    int a = 0;
    int b  = 0;
    int c = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    
public:
    Triangle (int sides_count, int a,int b, int c, int A, int B, int C)
    {
        this-> sides_count = sides_count;
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
        if (sides_count != 3)
        {
            throw CheckError("Figure creation error. Wrong  number of sides.");
        }
        if (A + B + C != 180)
        {
            throw CheckError("Figure creation error. Angles are not equal to 180.");
        }
    }
    
    std::string get_sides ();
    std::string get_angles ();
    void print_info() override;
    
};
