//
//  main.cpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#include <iostream>
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
#include "check_errors.hpp"

int main(int argc, const char * argv[]) {
   
   
        
    try
    {
        Triangle triangle (3,25,27,38,60,60,60);
        std::cout << "Triangle:" << std::endl;
        triangle.print_info();
        std::cout << std::endl;
    }
    catch (CheckError &ex)
    {
        std::cout << ex.what() << std::endl;
        std::cout <<std::endl;
    }
       
    try
    {
        Right_triangle right_Triangle (40,35,10,70,20);
        std::cout << "Right triangle:" << std::endl;
        right_Triangle.print_info();
        std::cout << std::endl;
    }
    catch (CheckError &ex)
    {
        std::cout << ex.what() << std::endl;
        std::cout <<std::endl;
    }

    try
    {
    Isosceles_triangle isosceles_Triangle (45,70,50,80);
    std::cout << "Isosceles triangle:" << std::endl;
    isosceles_Triangle.print_info();
    std::cout << std::endl;
    }
    catch (CheckError &ex)
    {
        std::cout << ex.what() << std::endl;
        std::cout <<std::endl;
    }

    try
    {
    Equilateral_triangle equilateral_Triangle (45);
    std::cout << "Equilateral triangle:" << std::endl;
    equilateral_Triangle.print_info();
    std::cout << std::endl;
    }
    catch (CheckError &ex)
    {
        std::cout << ex.what() << std::endl;
        std::cout <<std::endl;
    }
    
    try
    {
    Quadrilateral quadrilateral (4,45,65,35,75,60,60,30,30);
    std::cout << "Quadrilateral:" << std::endl;
    quadrilateral.print_info();
    std::cout << std::endl;
    }
    catch (CheckError &ex)
    {
        std::cout << ex.what() << std::endl;
        std::cout <<std::endl;
    }
    
    try
    {
    Rectangle rectangle (45, 65);
    std::cout << "Rectangle:" << std::endl;
    rectangle.print_info();
    std::cout << std::endl;
    }
    catch (CheckError &ex)
    {
        std::cout << ex.what() << std::endl;
        std::cout <<std::endl;
    }
    
    try
    {
    Square square (45);
    std::cout << "Square:" << std::endl;
    square.print_info();
    std::cout << std::endl;
    }
    catch (CheckError &ex)
    {
        std::cout << ex.what() << std::endl;
        std::cout <<std::endl;
    }
    
    try
    {
    Parallelogram parallelogram (45,75,35,55);
    std::cout << "Parallelogram:" << std::endl;
    parallelogram.print_info();
    std::cout << std::endl;
    }
    catch (CheckError &ex)
    {
        std::cout << ex.what() << std::endl;
        std::cout <<std::endl;
    }
    
    try
    {
    Rhomb rhomb (45,35,55);
    std::cout << "Rhomb:" << std::endl;
    rhomb.print_info();
    std::cout << std::endl;
    }
    catch (CheckError &ex)
    {
        std::cout << ex.what() << std::endl;
        std::cout <<std::endl;
    }
    
    return 0;
}

