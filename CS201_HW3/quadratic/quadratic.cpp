//
//  main.cpp
//  quadratic
//
//  Created by Galen on 9/30/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>

std::pair<float, float> quadratic(float a, float b, float c) {
    
    float d = b*b - 4*a*c;
    int num_roots = int(d >= 0.0) + int(d > 0.0);
    
    float x1, x2;
    
    switch (num_roots) {
        case 0:
            // No roots
            x1 = x2 = NULL;
            break;
        case 1:
            x1 = x2 = -0.5*b/a;
            break;
        
        case 2:
            x1 = 0.5*(-b - d)/a;
            x2 = 0.5*(-b + d)/a;
            break;
    }
    
    return {x1, x2};
    
}

int main(int argc, const char * argv[]) {
    
    std::pair<float, float> solutions = quadratic(1.0, -2.0, -1.0);
    
    
    
    return 0;
}
