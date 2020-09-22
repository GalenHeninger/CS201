//
//  main.cpp
//  Lab9
//
//  Created by Galen on 9/21/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>
#include "modifyString.hpp"

int main(int argc, const char * argv[]) {
    
    for (int i = 0; i < 3; i++) {
        
        std::string referencedString = "Hello";
        
        int n = modifyString(referencedString, i);
        
        std::cout << "\nModified string: " << referencedString;
        std::cout << "\nAppended number: " << n;
    }
    
    return 0;
}
