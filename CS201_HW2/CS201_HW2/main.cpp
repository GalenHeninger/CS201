//
//  main.cpp
//  CS201_HW2
//
//  Created by Galen on 9/20/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include "names.hpp"

int main(int argc, const char * argv[]) {
    
    std::vector<std::string> names;
    InputNames(names);
    
    // Confirming input
    std::cout << "The names vector contains: ";
    PrintNames(names);
    
    
    //Testing DoesNameExist
    if(DoesNameExist(names, "A")) {
        std::cout << "\n The name A is on the list.";
    } else {
        std::cout << "\n The name A is not on the list.";
    }
    
    
}
