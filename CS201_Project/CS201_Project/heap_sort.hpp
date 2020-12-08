//
//  heap_sort.hpp
//  CS201_Project
//
//

#ifndef heap_sort_hpp
#define heap_sort_hpp

#include <iostream>
#include <algorithm>
#include <vector>

void arrange_heap(std::vector<int> &v, int n, int i);
void heap_sort(std::vector<int> &v);
void selection_sort(std::vector<int> &v);

#endif /* heap_sort_hpp */
