//
//  Header.h
//  CS201_HW3
//
//  Created by Galen on 9/30/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#ifndef std_lib_facilities_hpp
#define std_lib_facilities_hpp

#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <stdio.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

inline int input_positive_integer() {
    
    int n;
    cout << "Type a positive integer." << endl;
    cin >> n;
    
    while (n < 1) {
        cout << "The value must be a positive integer." << endl;
        cin >> n;
    }
    
    return n;
}

inline void keep_window_open() {
    string tmp;
    cin.clear();
    cout << "Press ENTER to exit the program." << endl;
    std::getline(cin, tmp);
}

#endif /* std_lib_facilities_hpp */
