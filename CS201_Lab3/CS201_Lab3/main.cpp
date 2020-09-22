//
//  main.cpp
//  CS201_Lab3
//
//  Created by Galen on 9/4/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>

using std::cout;
using std::cin;

int main(int argc, const char * argv[]) {
    
    int i = 0;

    while (i < 20) {
        i++;
        cout << i;
        cout << " ";
    }
    
    int rows;
    int columns;
    
    cout << "\nEnter the number of rows.\n";
    cin >> rows;
    cout << "Enter the number of columns.\n";
    cin >> columns;
    
    i = 0;
    int j = 0;
    
    while (i < rows) {
        i++;
        while (j < columns) {
            j++;
            cout << "*";
        }
        cout << "\n";
        j = 0;
    }
    
    return 0;
}
