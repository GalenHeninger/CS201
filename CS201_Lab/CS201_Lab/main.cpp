//
//  main.cpp
//  CS201_Lab
//
//  Created by Galen on 9/11/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>
#include <cmath>



int main(int argc, const char * argv[]) {
    
    using std::cout;
    using std::cin;
    using std::floor;
    
    for (float i=1.0; i<101.0; i++) {
        
        float i_thirds = i/3.0;
        float i_fifths = i/5.0;
        
        bool divisible_by_three = floor(i_thirds) == i_thirds;
        bool divisible_by_five = floor(i_fifths) == i_fifths;
        
        if(divisible_by_three) {
            cout << "Fizz";
        }
        
        if(divisible_by_five) {
            cout << "Buzz";
        }
        
        if(not (divisible_by_five || divisible_by_three)) {
            cout << i;
        }
        
        cout << "\n";
    }
        
    
    
    return 0;
}
