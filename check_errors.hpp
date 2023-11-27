//
//  check.hpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#pragma once
#include <exception>
#include <stdexcept>
#include "figure.hpp"
#include "triangle.hpp"
#include "right_triangle.hpp"
#include "isosceles_triangle.hpp"
#include "equilateral_triangle.hpp"
#include "quadrilateral.hpp"
#include "rectangle.hpp"
#include "square.hpp"
#include "parallelogram.hpp"
#include "rhomb.hpp"


class CheckError : public std::domain_error
{
private:
    std::string error_message;
 public:
    CheckError(char *error_m): std::domain_error(error_m) {}
   
     const char* getError(); 
};
