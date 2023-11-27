//
//  figure.cpp
//  cppm-homework-08.02
//
//  Created by a1ex on 11/25/23.
//

#include "figure.hpp"
#include "check_errors.hpp"


    void Figure::print_info ()
    {
        std::cout << name << std::endl;
        std::cout << sides_count << std::endl;
    }
    
    void Figure::check ()
   {
      if (sides_count != 0)
   {
       throw CheckError("Figure creation error. Wrong  number of sides.");
   }
   }
