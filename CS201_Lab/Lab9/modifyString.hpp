//
//  modifyString.hpp
//  Lab9
//
//  Created by Galen on 9/21/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#ifndef modifyString_hpp
#define modifyString_hpp

#include <stdio.h>
#include <iostream>


/**
 * Append an integer to a string
 * @param referencedString string to append integer to
 * @param n append (n % 10) to referencedString
 * @return New length of referencedString
 */
int modifyString(std::string & referencedString, int n);


#endif /* modifyString_hpp */
