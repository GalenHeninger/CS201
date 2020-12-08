//
//  main.cpp
//  CS201_Project
//
//  Copyright © 2020 Galen. All rights reserved.
//

#include <random>
#include <algorithm>
#include <stdio.h>
#include <time.h>

#include "heap_sort.hpp"

std::vector<int> generate_vector(int size, int min, int max) {
    
    std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<int> distribution(min, max);
    
    std::vector<int> v(size);
    
    auto gen = [&distribution, &generator](){
        return distribution(generator);
    };
    
    std::generate(v.begin(), v.end(), gen);
    
    return v;
}

int main() {
    
    std::vector<int> v = generate_vector(10, 0, 9);
    
    std::cout << "Unsorted values:";
    std::cout << std::endl;
    
    for (auto element:v)
        std::cout << element << " ";
    std::cout << std::endl;
    
  // Timing
    clock_t timer = clock();
    
    selection_sort(v);
    
    timer = clock() - timer;

    // Print sorted values
    std::cout << "Sorted values:";
    std::cout << std::endl;
    for (auto element:v)
        std::cout << element << " ";
    std::cout << std::endl;
    
    // Print timing
    std::cout << "Heap sort delta time: " << std::endl;
    printf("approximately %f seconds\n", (float) timer / CLOCKS_PER_SEC);
    std::cout << std::endl;
    
    std::vector<int> sizes {10, 50, 100, 150, 200, 250, 300};
    
    std::cout << "Delta time in seconds for the following vector sizes:";
    std::cout << std::endl;
    for (auto size:sizes)
        std::cout << size << " ";
    std::cout << std::endl;
    
    std::cout << "For heap sort:";
    std::cout << std::endl;
    
    for (auto size:sizes) {
        v = generate_vector(size, 0, 99);
        clock_t timer = clock();
        heap_sort(v);
        timer = clock() - timer;
        std::cout << (float) timer / CLOCKS_PER_SEC << ", ";
    }
    
    std::cout << std::endl;
    
    std::cout << "For selection sort:";
    std::cout << std::endl;
    
    for (auto size:sizes) {
        v = generate_vector(size, 0, 99);
        clock_t timer = clock();
        selection_sort(v);
        timer = clock() - timer;
        std::cout << (float) timer / CLOCKS_PER_SEC << ", ";
    }
    
    std::cout << std::endl;
    
    return 0;
}
