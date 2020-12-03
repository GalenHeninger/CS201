//
//  agent.cpp
//  CS201_HW8V2
//
//  Created by Galen on 12/2/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include "agent.hpp"
#include "environment.hpp"
#include "simulator.hpp"

void Agent::perceive(Environment Env) {
    _measured_temperature = Env.getTemperature();
}

void Agent::think() {
    //_measured_temperature;
}

void Agent::act(Environment Env) {
    //Env.toggleHeater();
}
