//
//  agent.cpp
//  CS201_HW8V2
//
//  Created by Galen on 12/2/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include "agent.hpp"
#include "environment.hpp"

void Agent::perceive(Environment Env) {
    _measured_temperature = Env.getTemperature();
    _known_heater_status = Env.getHeaterStatus();
}

void Agent::think() {
    // The heater should be off if the target temperature is less than the
    // measured temperature.
    _should_toggle_heater = _target_temperature < _measured_temperature == _known_heater_status;
}

void Agent::act(Environment &Env) {
    if(_should_toggle_heater)
        Env.toggleHeater();
}

void Agent::setTargetTemperature(double temp) {
    _target_temperature = temp;
}
