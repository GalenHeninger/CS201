//
//  main.cpp
//  Collatz Program
//
//  Created by Galen on 9/29/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::cout << "Type an integer.\n";
    
    // Collatz function: 3n+1 when n is odd, n/2 when n is even
    
    int n;
    
    //User input for the initial value of n
    std::cin >> n;
    std::cout << "Input was " << n;
    std::cout << std::endl;
    
    return 0;
}
