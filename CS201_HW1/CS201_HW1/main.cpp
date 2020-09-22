//
//  main.cpp
//  CS201_HW1
//
//  Created by Galen on 9/11/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    using std::cin;
    using std::cout;
    
    int n;
    cout << "Input a side length.\n";
    cin >> n;
    
    // Determine whether n is a positive integer
    // cout << "Your input should be a positive integer.";
    
    int diagonal_count = 2*n - 1; // This is the number of lines to be printed.
    
    for (int i = 0; i < diagonal_count; i++) {
            
        for (int j = 0; j < diagonal_count; j++) {
                
            if( j > n - 2 - i && j < i + n && j > i - n && j < 3*n - i - 2) {
                cout << "#";
            }
            
            else{
                cout << " ";
            }
            cout << " ";
        }
            
        cout << "\n";
        
    }
        
    return 0;
}
