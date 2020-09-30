//
//  main.cpp
//  Collatz Program
//
//  Created by Galen on 9/29/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>
#include <vector>

int main(int argc, const char * argv[]) {
    
    std::cout << "Type a positive integer.\n";
    
    std::vector<int> n {0};
    
    //User input for the initial value of n
    std::cin >> n.at(0);
    while (n.at(0)<1) {
        std::cout << "The value of n must be greater than 0.\n";
        std::cin >> n.at(0);
    }

    // Collatz function: 3n+1 when n is odd, n/2 when n is even
    
    // Perform calculation:
    while (n.back() > 1) {
        if (n.back() % 2 == 0) {
            n.push_back(n.back()/2);
        } else {
            n.push_back(n.back()*3 + 1);
        }
    }
    
    std::cout << "The Collatz sequence starting with " << n.front() << " is:\n";
    for(int n_value:n){
        std::cout << n_value << " ";
    }
    
    std::cout << std::endl;
    
    return 0;
}
