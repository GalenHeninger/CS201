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
    
    std::istringstream iss(input);
    
    std::string token_string;
    
    while(getline(iss, token_string, ' '))
    {
        tokens.push_back(token_string);
    }
    
    tokens.push_back("");
    
    return tokens.size();
}

void AnalyzeTokens(const std::vector<std::string> &tokens) {
    
    for(auto token:tokens) {
        
        std::cout << "<" << token << "> Type: ";// << typeid(token).name();
        std::cout << std::endl;

    }
    
}
