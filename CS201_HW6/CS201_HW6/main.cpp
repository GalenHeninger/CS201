//
//  main.cpp
//  CS201_HW6
//
//  Created by Galen on 11/10/20.
//  Copyright © 2020 Galen. All rights reserved.
//
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>

using std::mt19937;

std::random_device device;
std::mt19937 generator(device());

int RandomBetweenU(int first, int last) {
    
    int mean = (first + last)/2;
    std::uniform_int_distribution<int> distribution(mean, 2);
    
    return distribution(generator);
}

int RandomBetweenN(int first, int last) {
    
    int mean = (first + last)/2;
    std::normal_distribution<> normal_distribution(mean, 2);
    
    return normal_distribution(generator);
}

int RandomBetween(int first, int last) {
    return rand() % (last - first + 1) + first;
}

void PrintDistribution(const std::map<int, int> &numbers) {
    for (auto p : numbers) {
        std::cout << std::fixed << std::setprecision(1) << std::setw(2)
                  << p.first << ' ' << std::string(p.second/200, '*') << '\n';
    }
}
 
int main()
{
    srand(0);
 
    std::map<int, int> hist;
    for (int n = 0; n < 10000; ++n) {
        ++hist[RandomBetweenN(-5, 5)];
    }
    
    PrintDistribution(hist);
    
    
}
