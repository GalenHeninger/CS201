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


unsigned StringToTokensWS(const std::string &input, std::vector<std::string> &tokens) {
    
    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);
    
    std::string token_string;
    
    while(getline(iss, token_string, ' '))
    {
        tokens.push_back(token_string);
    }
    
    return tokens.size();
}
