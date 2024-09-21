#include "Potentiometer.h"
#include <string>

Potentiometer::Potentiometer(double maxResistance) : maxResistance(maxResistance), wiperPosition(0.5), voltageAtWiper(0) {}

void Potentiometer::setPosition(double position) {
    // Ensure the position is between 0 and 1
    if (position < 0) {
        wiperPosition = 0;
    } else if (position > 1) {
        wiperPosition = 1;
    } else {
        wiperPosition = position;
    }
}

void Potentiometer::applyVoltages(double inputVoltage, double groundVoltage) {
    // Linear interpolation between ground and input voltage
    voltageAtWiper = groundVoltage + (inputVoltage - groundVoltage) * wiperPosition;
}

double Potentiometer::output() const {
    return voltageAtWiper;
}

std::string Potentiometer::visualize() const {
    return "Potentiometer (position: " + std::to_string(wiperPosition) + ")";
}

std::string Potentiometer::getName() const {
    return "Potentiometer";
}
