//
//  Lab6.cpp
//  CS201_Lab
//
//  Created by Galen on 9/14/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include "Lab6.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

void PrintStringWithLength(string given_string) {
    cout << "String value is <" << given_string << "> \n";
    cout << "String length is " << given_string.length() << ". \n\n";
    return;
}

int main(int argc, const char * argv[]) {
    
    PrintStringWithLength("Hello, World.");
    
    PrintStringWithLength("The world is all that is the case.");
    
    PrintStringWithLength("The world is the totality of facts, not things.");
    
    return 0;
}
