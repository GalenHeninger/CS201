//
//  grid.cpp
//  TurnsProgram
//
//  Created by Galen on 9/21/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>
#include <vector>
#include "grid.hpp"

using std::vector;
using std::cout;

vector<vector<char>> grid;
unsigned numColumns;
unsigned numRows;

void GridInit(int numColumns, int numRows) {
    
    vector<char> init_column(numRows);
    vector<vector<char>> grid(numColumns, init_column);
    
}

void GridPrint() {
    
    for (auto grid_column : grid)
        for (auto element : grid_column)
            cout << element;
    cout <<"\n";
    
}
