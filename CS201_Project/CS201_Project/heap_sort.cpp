//
//  heap_sort.cpp
//  CS201_Project
//
//  Copyright © 2020 Galen. All rights reserved.
//

#include "heap_sort.hpp"

using std::vector;
using std::cout;
using std::make_heap;
using std::iter_swap;

void arrange_heap(vector<int> &v, int n, int i)
{
    int working_max_value_index, L, R;
    working_max_value_index = i;
    
    while(true) {
        
        L = 2*i + 1;
        R = 2*i + 2;
        
        if (L < n && v.at(L) > v.at(working_max_value_index))
            working_max_value_index = L;
     
        if (R < n && v.at(R) > v.at(working_max_value_index))
            working_max_value_index = R;
        
        if (working_max_value_index != i) {
            // If the parent is not already the max value, then swap
            iter_swap(v.begin() + i, v.begin() + working_max_value_index);
            // and step down the binary tree.
            i = working_max_value_index;
        } else
            break;
    }
}

void heap_sort(vector<int> &v)
{
    int n = v.size();
    
    for (int i = n / 2 - 1; i >= 0; i--)
        arrange_heap(v, n, i);
    
    for (int i = n - 1; i > 0; i--) {
        // Move the root of the heap (the max value of the unsorted elements)
        // to the first index in the range of sorted elements: i
        iter_swap(v.begin(), v.begin() + i);
        // Order heap with size equal to the number of unsorted elements
        arrange_heap(v, i, 0);
    }
}

void selection_sort(vector<int> &v) {
    
    unsigned long n = v.size();
    
    unsigned long working_max_value_index;
    
    for (unsigned long i = n - 1; i > 0; i--) {
        // Find the max value among the unsorted values by looking sequentially
        working_max_value_index = 0;
        for (unsigned long j = 0; j <= i; j++) {
            if (v.at(j) > v.at(working_max_value_index))
                working_max_value_index = j;
        }
        // Move the maximum value to the first index in the range of sorted elements: i
        iter_swap(v.begin() + working_max_value_index, v.begin() + i);
    }
}
