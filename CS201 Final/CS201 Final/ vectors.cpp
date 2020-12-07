//
//  vectors.cpp
//  CS201 Final
//
//  Created by Galen on 12/5/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>

class MyVector {
  
public:
    
    double x, y, z;
    
    MyVector() {
        x = 0.0;
        y = 0.0;
        z = 0.0;
    }
    
    double length() {
        return std::sqrt(x*x + y*y + z*z);
    }
    
};

int main() {
    
    const MyVector init_vector;
    std::vector<MyVector> vectors;
    vectors.push_back(init_vector);
    
    std::ifstream inFile;
    std::cout << "Opening input file..." << std::endl;
    inFile.open(".../vectors.txt");
    if (!inFile) {
        std::cout << "Could not open the input file." << std::endl;
        exit(1);
    }
    
    std::cout << "Assigning input..." << std::endl;
    double a;
    unsigned i = 0;
    while(inFile >> a) {
        // Assign the input value to the proper component.
        switch (i % 3) {
            case 0:
                vectors.at(i/3).x = a;
                break;
            case 1:
                vectors.at(i/3).y = a;
                break;
            case 2:
                vectors.at(i/3).z = a;
                vectors.push_back(init_vector);
                break;
        }
        i++;
    }
    
    inFile.close();
    
    if(i % 3 != 0) {
        std::cout << "The amount of components was not a multiple of three." << std::endl;
        std::cout << "The remaining numbers are excluded." << std::endl;
    }
    
    // Remove extra elements
    vectors.pop_back();
    
    // "lengths" file output
    std::ofstream outFile;
    std::cout << "Opening output file..." << std::endl;
    outFile.open (".../lengths.txt");
    
    if (!outFile) {
        std::cout << "Could not open the output file." << std::endl;
        exit(2);
    }
    
    std::cout << "Output..." << std::endl;
    for(auto vect:vectors)
        outFile << vect.length() << std::endl;
    outFile.close();
    
    return 0;
}
