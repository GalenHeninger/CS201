//
//  tokenizer.cpp
//  CS201_HW4
//
//  Created by Galen on 10/2/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include "tokenizer.hpp"

bool ReadLine(std::string& str) {
    std::getline(std::cin, str);
    return str.size() > 0;
};
