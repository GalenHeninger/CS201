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
    std::cout << "Target temperature: " << temp_in << std::endl;
}

void Simulator::run() {
    
    for(int j = 0; j < 10; j++) {
        
        askOwner();
        
        for(int i = 0; i < 10; i++) {
            
            environment.iterate();
            std::cout << "Heater on? " << environment.getHeaterStatus() << std::endl;
            std::cout << "Current temperature: " << environment.getTemperature() << std::endl;
            
            agent.perceive(environment);
            agent.think();
            agent.act(environment);
        }
        
    }
    
}
