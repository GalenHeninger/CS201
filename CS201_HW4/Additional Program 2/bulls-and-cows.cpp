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
            // Shift numbers so that none can be equal; range 0 to 10
            if(v.at(i) >= v.at(i - 1)){
                v.at(i) = v.at(i) + i;
            }
        }
    }
}

void guess_input(vector<int> guess) {
    int n = 0;
    int i = 0;
    while(n >= 0 && i < 4) {
        cout << "Enter a guess for integer " << i + 1 << ":\n";
        cin >> n;
        
        guess.at(i) = n;
        
        i++;
    }
    
}

//void find_number_or_smth(vector<int> &v) {
//
//    vector<int>::iterator it;
//    it = find (v.begin(), v.end(), 30);
//
//
//    if (it != v.end())
//        std::cout << "Element found in v: " << *it << '\n';
//    else
//        std::cout << "Element not found in v\n";
//
//}

int main(int argc, const char * argv[]) {
    
    vector<int> v(4);
    vector<int> guess(4);
    
    //cout << "There are four different digits ranged from 0 to 10.\n";
    
    do {
        
        initialize_different_random_integers(v);
        print_numbers(v);
        
        cout << endl;
        
    } while (v != guess);
    
    if(v == guess) {
        cout << "Correct.\n"
    }
    cout << endl;
}

    
    
    
    
    
    return 0;
}
