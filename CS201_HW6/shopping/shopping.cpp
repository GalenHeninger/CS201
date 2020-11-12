//
//  main.cpp
//  shopping
//
//  Created by Galen on 11/11/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>

using std::string;
using std::map;
using std::cout;
using std::cin;
using std::getline;
using std::endl;

int main() {
    
    struct record {
        double unit_price;
        int units;
    };
    
    map<string, record> items {
        {"Salt",{0.99, 0}},
        {"Pepper",{0.99, 0}},
        {"Flour",{2.99, 0}},
        {"Bread",{2.00, 0}},
        {"Milk",{3.29, 0}}
    };
    
    cout << "There are 0 items in the cart. Type 'Add' 'Remove' 'Total' 'View items' or 'Confirm'" << endl;
    string str_in;
    getline(cin, str_in);
    
    while(true) {
        
        if (str_in == "Add") {

            cout << "Enter an item name." << endl;
            getline(cin, str_in);
            
            auto iter = items.find(str_in);
            
            if(iter != items.end()) {
                cout << "Enter a quantity." << endl;
                iter -> second.units ++;
                cout << str_in << " added." << endl;
            } else
                cout << "No such item." << endl;
        } else if (str_in == "Remove")
        {
            
            cout << "Enter an item name." << endl;
            getline(cin, str_in);
            
            auto iter = items.find(str_in);
            
            if(iter != items.end() && iter -> second.units > 0) {
                iter -> second.units --;
                cout << str_in << " removed." << endl;
            } else
                cout << "No such item to remove." << endl;
        } 
        
    }
    
    return 0;
}
