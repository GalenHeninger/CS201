//
//  grid.cpp
//  TurnsProgram
//
//  Created by Galen on 9/21/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

#include "grid.hpp"

using std::vector;
using std::cout;

unsigned numColumns;
unsigned numRows;

void GridInit(int numColumns, int numRows) {
    //vector<char> init_column(numRows);
    grid.resize(numColumns, vector<char>(numRows));
    //vector<vector<char>> grid(numColumns, init_column);
}

void GridPrint() {
    for (auto grid_column : grid)
        for (auto element : grid_column)
            cout << element;
        cout << "\n";
}

void GridClear() {
    std::fill_n(& grid[0][0], numColumns*numRows, '*');
}


void GridPut(int x, int y, char c) {
    grid[x][y] = c;
}

char GridGet(int x, int y) {
    return grid[x][y];
}
