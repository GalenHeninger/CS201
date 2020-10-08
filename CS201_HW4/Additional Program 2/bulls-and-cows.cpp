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

int main(int argc, const char * argv[]) {
    
    vector<int> v(4);
    std::generate(v.begin(), v.end(), std::rand);
    
    
    for (int i = 0; i < v.size(); i++) {
        v.at(i) = v.at(i) % 10;
        cout << v.at(i) << " ";
    }
    
    cout << endl;
    
    return 0;
}
