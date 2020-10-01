//
//  main.cpp
//  quadratic
//
//  Created by Galen on 9/30/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>
#include <cmath>

std::pair<float, float> quadratic(float a, float b, float c) {
    
    float d = b*b - 4*a*c;
    
    // This check should absolutely work, but it appears incorrect when d = 0
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
            d = sqrt(d);
            x1 = 0.5*(-b - d)/a;
            x2 = 0.5*(-b + d)/a;
            break;
    }
    
    return {x1, x2};
    
}

int main(int argc, const char * argv[]) {
    
    float a, b, c;
    
    std::cout << "Enter a value for a.\n";
    std::cin >> a;
    
    std::cout << "Enter a value for b.\n";
    std::cin >> b;
    
    std::cout << "Enter a value for c.\n";
    std::cin >> c;
    
    std::pair<float, float> solutions = quadratic(a, b, c);
    
    if(solutions.first == NULL)
        std::cout << "There are no real solutions.";
    else {
        std::cout << "x1 = " << solutions.first << "\n";
        std::cout << "x2 = " << solutions.second << "\n";
    }
    
    std::cout << std::endl;
    
    return 0;
}
