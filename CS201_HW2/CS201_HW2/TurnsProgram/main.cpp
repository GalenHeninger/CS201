//
//  main.cpp
//  turns
//
//  Created by Galen on 9/21/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

#include "grid.hpp"

using std::vector;



int main(int argc, const char * argv[]) {
    // insert code here...
    
    GridInit(10, 20);
    GridClear();
    GridPrint();
    
    return 0;
}
