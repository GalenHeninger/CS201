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
#include "simulator.hpp"

class Agent {
public:
    void perceive(Environment Env);
    void think();
    void act(Environment Env);
private:
    double _measured_temperature;
};

#endif /* agent_hpp */
