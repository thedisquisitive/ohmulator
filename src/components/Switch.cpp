#include "Switch.h"
#include <string>

Switch::Switch(bool initialState) : state(initialState), outputVoltage(0) {}

void Switch::setState(bool newState) {
    state = newState;
}

void Switch::applyVoltages(double inputVoltage, double groundVoltage) {
    // If the switch is on, pass the voltage, otherwise output zero
    if (state) {
        outputVoltage = inputVoltage;
    } else {
        outputVoltage = 0;  // Open circuit when the switch is off
    }
}

double Switch::output() const {
    return outputVoltage;
}

std::string Switch::visualize() const {
    return state ? "Switch (on)" : "Switch (off)";
}

std::string Switch::getName() const {
    return "Switch";
}
