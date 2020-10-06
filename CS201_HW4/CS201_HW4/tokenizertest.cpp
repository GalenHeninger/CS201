//
//  tokenizertest.cpp
//  CS201_HW4
//
//  Created by Galen on 10/2/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>
#include "tokenizer.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    std::string str;
    bool LineNotBlank = ReadLine(str);
    std::cout << LineNotBlank << " " << str;
    
    return 0;
}
