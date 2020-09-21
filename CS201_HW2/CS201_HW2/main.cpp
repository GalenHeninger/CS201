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
    
    std::cout << "The names vector contains: ";
    
    // Confirming input
    for(int i=0; i < names.size(); i++)
    std::cout << names.at(i) << ' ';
    
}
