#include "common/Transistor.h"
#include <string>

Transistor::Transistor(Type type, double thresholdVoltage)
    : type(type), thresholdVoltage(thresholdVoltage), conducting(false),
      gateVoltage(0), sourceVoltage(0), drainVoltage(0) {}

void Transistor::applyVoltages(double gateV, double groundVoltage) {
    gateVoltage = gateV;
    sourceVoltage = groundVoltage;
    
    // Assuming the drain voltage is fixed (for simplicity) or calculated elsewhere
    drainVoltage = 3.3;  // Example fixed drain voltage

    // N-Type transistor conducts when Vgs > threshold voltage
    if (type == Type::NType) {
        conducting = (gateVoltage - sourceVoltage) > thresholdVoltage;
    }
    // P-Type transistor conducts when Vsg > threshold voltage
    else if (type == Type::PType) {
        conducting = (sourceVoltage - gateVoltage) > thresholdVoltage;
    }
}

double Transistor::output() const {
    return conducting ? (drainVoltage - sourceVoltage) : 0;
}

std::string Transistor::visualize() const {
    std::string typeString = (type == Type::NType) ? "N-Type" : "P-Type";
    return "Transistor (" + typeString + ", threshold: " + std::to_string(thresholdVoltage) + "V)";
}

std::string Transistor::getName() const {
    return "Transistor";
}
