#include "Resistor.h"
#include <string>

Resistor::Resistor(double resistance) : resistance(resistance), voltage(0), current(0) {}

void Resistor::applyVoltages(double inputVoltage, double groundVoltage) {
    voltage = inputVoltage - groundVoltage;
    current = voltage / resistance;  // Ohm's Law: V = IR
}

double Resistor::output() const {
    return current;
}

std::string Resistor::visualize() const {
    return "Resistor (" + std::to_string(resistance) + " Ohms)";
}

std::string Resistor::getName() const {
    return "Resistor";
}
