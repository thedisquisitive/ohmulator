#include "common/Diode.h"
#include <string>

Diode::Diode(double forwardVoltage) 
    : forwardVoltage(forwardVoltage), conducting(false), current(0), resistance(0.01) {}

void Diode::applyVoltages(double inputVoltage, double groundVoltage) {
    double voltageAcross = inputVoltage - groundVoltage;
    if (voltageAcross >= forwardVoltage) {
        conducting = true;
        current = (voltageAcross - forwardVoltage) / resistance;
    } else {
        conducting = false;
        current = 0;
    }
}

double Diode::output() const {
    return conducting ? current : 0;
}

std::string Diode::visualize() const {
    return "Diode (forward voltage: " + std::to_string(forwardVoltage) + "V)";
}

std::string Diode::getName() const {
    return "Diode";
}
