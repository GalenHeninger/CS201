//
//  rice.cpp
//  RiceProgram
//
//  Created by Galen on 9/21/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>
#include "rice.hpp"

int NumberOfSquaresRequired(int GrainNumber) {
    
    // Note that the sum of the powers of
    // 2 from 2^0 to 2^n is:
    // s = (2^(n+1) - 1)
    // The number of squares required
    // can be found analytically.
    
    int n = 0;
    while (pow(2, (n + 1)) - 1 < GrainNumber) {
        n++;
    }
        
    // n + 1 is the chosen number of squares.
    return n + 1;
    
    
}
