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
    void setTemperature(double new_temp);
    double getTemperature();
    void toggleHeater();
    void iterate();
private:
    double _temperature = 20.;
    bool _heater_is_on = false;
};

#endif /* environment_hpp */

