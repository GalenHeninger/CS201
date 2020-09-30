//
//  main.cpp
//  std_lib_facilites_test
//
//  Created by Galen on 9/30/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include "std_lib_facilities.hpp"

int main(int argc, const char * argv[]) {
    
    int n;
    n = input_positive_integer();
    cout << n << endl;
    
    keep_window_open();
    
    return 0;
}
