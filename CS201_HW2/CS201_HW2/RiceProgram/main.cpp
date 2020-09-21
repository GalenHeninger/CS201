//
//  main.cpp
//  RiceProgram
//
//  Created by Galen on 9/21/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>
#include <vector>
#include "rice.hpp"

using std::cout;
using std::cin;

int main(int argc, const char * argv[]) {
    
    int n;
    cout << "Type a number of rice grains.";
    cin >> n;
    
    cout << "The required number of squares for " << n << " rice grains is " ;
    cout << NumberOfSquaresRequired(n);
    cout << std::endl;
    
    return 0;
}
