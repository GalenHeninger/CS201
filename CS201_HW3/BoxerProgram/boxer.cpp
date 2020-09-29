//
//  boxer.cpp
//  CS201_HW3
//
//  Created by Galen on 9/23/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include "boxer.hpp"
#include <iostream>

using std::cout;
using std::cin;

int main(int argc, const char * argv[]) {
    
    std::string string_in;
    int width;
    
    while (string_in != "end") {
        
        cout << "Enter a string or type 'end' to exit.\n";
        cin >> string_in;
        
        if (string_in == "end")
            break;
            
        cout << "Enter the border width as a positive integer.\n";
        cin >> width;
                
        print_asterisk(string_in, width);
            
        
    }
    
    return 0;
}
