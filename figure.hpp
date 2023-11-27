//
//  figure.hpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#pragma once
#include <iostream>

class Figure
{
protected:
    int sides_count = 0;
    std::string name = "Figure :";
public:
    virtual void print_info ();
    virtual void check ();
    
};

