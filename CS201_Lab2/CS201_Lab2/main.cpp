//
//  main.cpp
//  CS201_Lab2
//
//  Created by Galen on 9/2/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>
#include <string>

using std::to_string;
using std::cout;
using std::cin;

int main(int argc, const char * argv[]) {
    
    cout << "Type an integer\n";
    
    int n;
    cin >> n;
    
    int m = n + 1;
    m = m*m;
    
    cout << "The square of " + to_string(n) + " + 1 is " + to_string(m);
    cout << "\n";
    
    return 0;
}
