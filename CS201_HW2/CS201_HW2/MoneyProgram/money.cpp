//
//  money.cpp
//  NamesProgram
//
//  Created by Galen on 9/21/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include "money.hpp"

float CalculateTotal(int pennies, int nickels, int dimes, int quarters) {
    return pennies*0.01 + nickels*0.05 + dimes*0.1 + quarters*0.25;
}
