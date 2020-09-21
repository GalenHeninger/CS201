//
//  names.cpp
//  CS201_HW2
//
//  Created by Galen on 9/20/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include "names.hpp"


void InputNames(std::vector<std::string> & names) {
    
    std::string name;
    
    for (int i = 0; i < 10; i++) {
        std::cout << "Please enter a name: ";
        std::getline(std::cin, name);
        names.push_back(name);
        std::cout << "\n";
    }
    
}

bool DoesNameExist(std::vector<std::string> & names, const std::string & NameToFind) {
    // Will loop though names vector
    bool NameExists = false;
    
    
    return NameExists;
    
}
