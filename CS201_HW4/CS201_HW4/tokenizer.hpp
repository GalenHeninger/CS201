//
//  tokenizer.hpp
//  CS201_HW4
//
//  Created by Galen on 10/2/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#ifndef tokenizer_hpp
#define tokenizer_hpp

#include <stdio.h>
#include <iostream>

// Uses std::getline() to get a line of text; returns true if the input was not blank.
bool ReadLine(std::string& str);

// Uses std::isstringstream to read separated strings from a line
unsigned StringToTokensWS(const std::string &input, std::vector<std::string> &tokens);

// Determines a type for each token in the tokens vector
void AnalyzeTokens(const std::vector<std::string> &tokens);


#endif /* tokenizer_hpp */
