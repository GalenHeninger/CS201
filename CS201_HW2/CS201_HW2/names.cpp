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
    
    for (int i = 0; i < names.size(); i++) {
        
        if (names.at(i) == NameToFind)
            return true;
    }
    
    return false;
    
}

void PrintNames(std::vector<std::string> & names) {
    
    for(int i=0; i < names.size(); i++)
    std::cout << names.at(i) << ' ';
    
}

void SortNames(std::vector<std::string> & names) {
    
    std::sort(names.begin(), names.end());
    
}
