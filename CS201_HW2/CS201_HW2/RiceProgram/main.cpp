//
//  main.cpp
//  RiceProgram
//
//  Created by Galen on 9/21/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>
#include <vector>
#include "rice.hpp"

using std::cout;
using std::cin;

int main(int argc, const char * argv[]) {
    
    
    cout << "\nThe required number of squares for 1000 rice grains is " << NumberOfSquaresRequired(1000);
    cout << "\nThe required number of squares for 1000000 rice grains is " << NumberOfSquaresRequired(1000000);
    cout << "\nThe required number of squares for 1000000000 rice grains is " << NumberOfSquaresRequired(1000000000);
    
//    int n;
//    cout << "\nType a number of rice grains.\n";
//    cin >> n;
//
//    cout << "\nThe required number of squares for " << n << " rice grains is " ;
//    cout << NumberOfSquaresRequired(n);
    
    cout << "\nThe number of rice grains needed for the series with 64 terms\nis equal to 2^64 - 1, approximately " << pow(2, 64) - 1;
    cout << "\nThe largest power for which a value of rice grains can be assigned is...";
    
    int n1 = pow(2, 31) - 1;
    double n2 = pow(2, 1023) - 1;
    
    cout << "\nfor an integer variable, 31: " << n1;
    cout << "\nfor a double variable, 1023:" << n2;
    
    
    cout << std::endl;
    
    return 0;
}
