//
//  main.cpp
//  Additional Program 2
//
//  Created by Galen on 10/8/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void print_numbers(vector<int> v) {
    for (auto n:v) {
        cout << n << " ";
    }
}

void initialize_different_random_integers(vector<int> &v) {
    // generate integers randomly so that none are equal
    for(int i = 0; i < v.size(); i++) {
        
        v.at(i) = rand() % (10 - i); // Range from 0 to 10 - i
        
        if(i>0){
            // Shift numbers so that none can be equal
            if(v.at(i) >= v.at(i - 1)){
                v.at(i) = v.at(i) + i;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    
    vector<int> v(4);
    
    for (int i = 0; i < 100; i++) {
        initialize_different_random_integers(v);
        print_numbers(v);
        cout << endl;
    }
    
    
    
    
    
    
    return 0;
}
