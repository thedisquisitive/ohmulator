#include "Inductor.h"
#include <string>

Inductor::Inductor(double inductance) : inductance(inductance), current(0) {}

void Inductor::applyVoltages(double inputVoltage, double groundVoltage) {
    double voltageAcross = inputVoltage - groundVoltage;
    current += voltageAcross / inductance;  // Simplified model: ΔI = V / L
}

double Inductor::output() const {
    return current;
}

std::string Inductor::visualize() const {
    return "Inductor (" + std::to_string(inductance) + " Henrys)";
}

std::string Inductor::getName() const {
    return "Inductor";
}
