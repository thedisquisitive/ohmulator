#include "Capacitor.h"
#include <string>

Capacitor::Capacitor(double capacitance) : capacitance(capacitance), charge(0) {}

void Capacitor::applyVoltages(double inputVoltage, double groundVoltage) {
    double voltageAcross = inputVoltage - groundVoltage;
    charge += voltageAcross * capacitance;  // Q = C * V
}

double Capacitor::output() const {
    return charge / capacitance;  // V = Q / C
}

std::string Capacitor::visualize() const {
    return "Capacitor (" + std::to_string(capacitance) + " Farads)";
}

std::string Capacitor::getName() const {
    return "Capacitor";
}
