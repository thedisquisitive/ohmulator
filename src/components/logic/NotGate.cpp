#include "logic/NotGate.h"

NotGate::NotGate() : input(0), result(0) {}

void NotGate::applyVoltages(double in, double groundVoltage = 0) {
    input = in;
    result = input > 0 ? 0.0 : 1.0;  // Simulate NOT (Inverter) logic
}

double NotGate::output() const {
    return result;
}

std::string NotGate::visualize() const {
    return "NOT Gate";
}

std::string NotGate::getName() const {
    return "NOT Gate";
}
