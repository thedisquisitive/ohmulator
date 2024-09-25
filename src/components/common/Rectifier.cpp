#include "common/Rectifier.h"
#include <sstream>

Rectifier::Rectifier()
    : dcOutput(0) {
    // Initialize diodes
    diodes[0] = Diode(0.7);
    diodes[1] = Diode(0.7);
    diodes[2] = Diode(0.7);
    diodes[3] = Diode(0.7);
}

void Rectifier::applyVoltages(double acInput, double groundVoltage) {
    // Full-wave rectification logic:
    if (acInput >= 0) {
        dcOutput = acInput - diodes[0].output();  // Positive half-cycle
    } else {
        dcOutput = -acInput - diodes[2].output();  // Negative half-cycle (inverted)
    }
}

double Rectifier::output() const {
    return dcOutput;  // Pulsating DC
}

std::string Rectifier::visualize() const {
    std::ostringstream oss;
    oss << "Rectified Voltage: " << dcOutput << "V";
    return oss.str();
}

std::string Rectifier::getName() const {
    return "Rectifier (Full-Wave)";
}
