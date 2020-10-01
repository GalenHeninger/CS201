//
//  main.cpp
//  kelvin
//
//  Created by Galen on 9/30/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>

// Errors:
// The ctok function does not return the expression k
// in main, cin >> d should instead be std::cin >> c
// The variable c cannot be referenced by writing <"c">
// Cout should be std::cout
// The new line string /n should be \n instead
// The string \n should be written with double quotes
// The name "ctok" is not understandable out of context


double celsius_to_kelvin(double c) {
    
    double k;
    
    if(c < -273.15) {
        std::cout << "A celsius temperature below -273.15 degrees is unphysical.\n";
        k = -1;
    } else {
        k = c + 273.15;
    }
    
    return k;
}

int main(int argc, const char * argv[]) {
    
    std::cout << "Enter a celsius temperature.\n";
    
    double c = 0;
    std::cin >> c;
    double k = celsius_to_kelvin(c);
    
    if (k >= 0.0)
        std::cout << k << "\n";
    
    return 0;
}
