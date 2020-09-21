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
    std::cout << std::endl;
    
    //Testing DoesNameExist
    if(DoesNameExist(names, "A")) {
        std::cout << "\nThe name A is on the list." << std::endl;
    } else {
        std::cout << "\nThe name A is not on the list." << std::endl;
    }
    
    SortNames(names);
    
    // Confirming that the sort function works
    std::cout << "\nThe sorted names are: ";
    PrintNames(names);
    std::cout << std::endl;
    
}
