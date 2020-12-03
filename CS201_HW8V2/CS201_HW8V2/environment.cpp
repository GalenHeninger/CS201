//
//  environment.cpp
//  CS201_HW8V2
//
//  Created by Galen on 12/2/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include "agent.hpp"
#include "environment.hpp"
#include "simulator.hpp"

void Environment::setTemperature(double new_temp) {
    _temperature = new_temp;
}
double Environment::getTemperature() {
    return _temperature;
}
bool Environment::getHeaterStatus() {
    return _heater_is_on;
}
void Environment::toggleHeater() {
    _heater_is_on = !_heater_is_on;
}
void Environment::iterate() {
    if(_heater_is_on)
        _temperature++;
    else {
        _temperature--;
    }
}
