//
//  names.hpp
//  CS201_HW2
//
//  Created by Galen on 9/20/20.
//  Copyright © 2020 Galen. All rights reserved.
//



#ifndef names_hpp
#define names_hpp


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void InputNames(std::vector<std::string> & names);
bool DoesNameExist(std::vector<std::string> & names, const std::string & NameToFind);
void PrintNames(std::vector<std::string> & names);

#include <stdio.h>

#endif /* names_hpp */



