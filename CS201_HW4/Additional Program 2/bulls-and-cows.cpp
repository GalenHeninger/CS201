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
        
        v.at(i) = rand() % (10 - i); // Range from 0 to 9 - i
        
        if(i>0){
            // Shift numbers so that none can be equal; range 0 to 9
            if(v.at(i) >= v.at(i - 1)){
                v.at(i) = v.at(i) + i;
            }
        }
    }
}

bool guess_input(vector<int> &guess) {
    
    cout << "Type a negative integer to exit.\n";
    
    int n = 0;
    int i = 0;
    
    while(n >= 0 && i < 4) {
        
        cout << "Enter a guess for integer " << i + 1 << ": ";
        cin >> n;
        
        guess.at(i) = n;
        
        i++;
    }
    
    return n >= 0;
    
}

int total_number_correct(vector<int> v, vector<int> guess) {
    
    int n = 0;
    
    for(int i = 0; i < v.size(); i++) {
        if(count(v.begin(), v.end(), guess.at(i)))
            n++;
    }
    
    return n;
}

int number_correct_with_right_placement(vector<int> v, vector<int> guess) {

    int n = 0;

    for(int i = 0; i < v.size(); i++) {
        if(v.at(i) == guess.at(i))
            n++;
    }

    return n;
}

int main() {
    
    // rand should not always generate the same digit
    srand(time(0));
    
    vector<int> v(4);
    vector<int> guess(4);
    
    cout << "There are four different digits ranged from 0 to 9.\n";
    
    initialize_different_random_integers(v);
    cout << endl;
    
    do {
        
        if(guess_input(guess)) {
            
            print_numbers(guess);
            cout << endl;
            
            int a = total_number_correct(v, guess);
            int b = number_correct_with_right_placement(v, guess);
            
            if(v != guess) {
                cout << "There are " << a - b << " correct numbers with the wrong placement.\n";
                cout << "There are " << b << " correct numbers with the right placement.\n";
                cout << endl;
            }
        } else {
            
            cout << "The sequence was ";
            print_numbers(v);
            break;
        }
        
    } while (v != guess);
    
    if(v == guess) {
        cout << "Correct.\n";
    }
    
    cout << endl;
    
    
    
    return 0;
}
