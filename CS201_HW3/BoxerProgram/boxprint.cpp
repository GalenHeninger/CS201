//
//  boxprint.cpp
//  CS201_HW3
//
//  Created by Galen on 9/23/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <stdio.h>
#include "boxer.hpp"

void print_upper_lower_border_lines(int string_length, int border_width) {
    
    int line_length = string_length + 2 + 2*border_width;
    
    for (int i = 1; i < border_width+1; i++) {
        for (int j = 0; j < line_length; j++)
            std::cout << "*";
        std::cout << "\n";
    }
    
    return;
}

void print_left_right_border_characters(int border_width) {
    
    for (int i = 0; i < border_width; i++)
        std::cout << "*";
    
    return;
}

void print_line_with_spaces(int string_length, int border_width) {
    
    print_left_right_border_characters(border_width);
    
    for (int i = 0; i < string_length + 2; i++)
        std::cout << " ";
    
    print_left_right_border_characters(border_width);
    
    std::cout << "\n";
    
    return;
}

void print_asterisk(std::string string_in, int border_width) {
    
    int string_length = string_in.size();
    
    print_upper_lower_border_lines(string_length, border_width);
    print_line_with_spaces(string_length, border_width);
    
    
    
    print_left_right_border_characters(border_width);
    std::cout << " " << string_in << " ";
    print_left_right_border_characters(border_width);
    std::cout << "\n";
    
    print_line_with_spaces(string_length, border_width);
    print_upper_lower_border_lines(string_length, border_width);
    
    return;
}

