//
//  environment.hpp
//  CS201_HW8V2
//
//  Created by Galen on 12/2/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#ifndef environment_hpp
#define environment_hpp

#include "agent.hpp"
#include "simulator.hpp"

class Environment {
public:
    void setTemperature(double new_temp) {
        _temperature = new_temp;
    }
    double getTemperature() {
        return _temperature;
    }
private:
    double _temperature = 0;
};

#endif /* environment_hpp */

