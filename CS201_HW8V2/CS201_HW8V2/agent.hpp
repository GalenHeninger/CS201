//
//  agent.hpp
//  CS201_HW8V2
//
//  Created by Galen on 12/2/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#ifndef agent_hpp
#define agent_hpp

#include "environment.hpp"

class Agent {
public:
    void perceive(Environment Env);
    void think();
    void act(Environment &Env);
    void setTargetTemperature(double temp);
private:
    double _measured_temperature;
    double _target_temperature;
    bool _known_heater_status;
    bool _should_toggle_heater;
};

#endif /* agent_hpp */
