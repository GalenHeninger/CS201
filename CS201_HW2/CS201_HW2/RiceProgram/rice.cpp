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
    
    // Note that the sum of the squares of
    // the positive integers from 1 to n is
    // S = n(n+1)(2n+1)/6
    // The number of squares required can
    // be found analytically.
    
    int n = 1;
    
    while (n*(n + 1)*(2*n + 1)/6 < GrainNumber)
        n++;

    return n;
    
    
}
