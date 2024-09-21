#include "Wire.h"
#include <string>

Wire::Wire() : outputVoltage(0), connected(false) {}

void Wire::connect(bool isConnected) {
    connected = isConnected;  // Set whether the wire is connected to another component
}

void Wire::applyVoltages(double inputVoltage, double groundVoltage) {
    // If the wire is connected, pass through the input voltage, otherwise treat it as an open circuit
    if (connected) {
        outputVoltage = inputVoltage;
    } else {
        outputVoltage = 0;  // In an open circuit, no current flows
    }
}

double Wire::output() const {
    return outputVoltage;
}

std::string Wire::visualize() const {
    return connected ? "Wire (connected)" : "Wire (open circuit)";
}

std::string Wire::getName() const {
    return "Wire";
}
