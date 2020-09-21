//
//  main.cpp
//  MoneyProgram
//
//  Created by Galen on 9/21/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>
#include "money.hpp"

using std::cout;
using std::cin;

int main(int argc, const char * argv[]) {
    
    int pennies, nickels, dimes, quarters;
    
    cout << "Type an integer number of pennies: \n";
    cin >> pennies;
    
    cout << "Type an integer number of nickels: \n";
    cin >> nickels;
    
    cout << "Type an integer number of dimes: \n";
    cin >> dimes;
    
    cout << "Type an integer number of quarters: \n";
    cin >> quarters;
    
    float total = CalculateTotal(pennies, nickels, dimes, quarters);
    cout << "The total is $" << total;
    
    return 0;
}
