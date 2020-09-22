//
//  grid.hpp
//  TurnsProgram
//
//  Created by Galen on 9/21/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#ifndef grid_hpp
#define grid_hpp

#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;


#include <stdio.h>

inline vector<vector<char>> grid;

void GridInit(int numColumns, int numRows);
void GridPrint();
void GridClear();
void GridPut(int x, int y, char c);
char GridGet(int x, int y);

#endif /* grid_hpp */
