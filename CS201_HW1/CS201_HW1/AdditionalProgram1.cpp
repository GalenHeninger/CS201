//
//  AdditionalProgram1.cpp
//  CS201_HW1
//
//  Created by Galen on 9/13/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include "AdditionalProgram1.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, const char * argv[]) {
    
    using std::cin;
    using std::cout;
    using std::vector;
    using std::max_element;
    
    int n;
    vector<int> integers;
    
    do {
        cout << "Type a positive integer or type 0 to terminate.\n";
        cin >> n;
        integers.push_back(n);
    } while (n > 0);
    
    cout << "The greatest integer was " << max_element();
    
        
    return 0;
}
