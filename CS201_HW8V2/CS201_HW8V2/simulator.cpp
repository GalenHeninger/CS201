//
//  simulator.cpp
//  CS201_HW8V2
//
//  Created by Galen on 12/2/20.
//  Copyright © 2020 Galen. All rights reserved.
//

#include <iostream>

#include "agent.hpp"
#include "environment.hpp"
#include "simulator.hpp"

Environment environment;
Agent agent;

void Simulator::askOwner() {
    double temp_in;
    std::cout << "Enter a target temperature:" << std::endl;
    std::cin >> temp_in;
    agent.setTargetTemperature(temp_in);
}

void Simulator::run() {
    
    while(true) {
        for(int i = 0; i < 10; i++)
            environment.iterate();
            agent.perceive(environment);
            agent.think();
            agent.act(environment);
        askOwner();
    }
    
}
