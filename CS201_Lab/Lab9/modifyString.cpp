//
//  modifyString.cpp
//  Lab9
//
//  Created by Galen on 9/21/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include "modifyString.hpp"

int modifyString(std::string & referencedString, int n) {
    
    referencedString = referencedString + std::to_string(n);
    
    return n;
}
