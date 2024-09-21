#ifndef CIRCUIT_H
#define CIRCUIT_H

#include <iostream>
#include <vector>
#include <memory>
#include "Component.h"

class Circuit {
public:
    void addComponent(std::shared_ptr<Component> component) {
        components.push_back(component);
    }

    bool isCircuitClosed() {
        // Implement logic to check whether the circuit is closed
        // For example, if all components are connected in a valid loop, return true
        return closed;
    }

    void applyVoltages(double inputVoltage, double groundVoltage) {
        if (isCircuitClosed()) {
            for (auto& component : components) {
                component->applyVoltages(inputVoltage, groundVoltage);
            }
        } else {
            std::cout << "Open circuit: no current flows." << std::endl;
        }
    }

private:
    std::vector<std::shared_ptr<Component>> components;
    bool closed;  // This can be set by analyzing the connectivity of the components
};

#endif // CIRCUIT_H
