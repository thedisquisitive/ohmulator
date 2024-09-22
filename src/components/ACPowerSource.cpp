#include "ACPowerSource.h"
#include <cmath>
#include <sstream>

ACPowerSource::ACPowerSource(double amplitude, double frequency)
    : amplitude(amplitude), frequency(frequency), currentOutput(0.0) {}

void ACPowerSource::applyVoltages(double inputVoltage, double groundVoltage) {
    // No voltage to apply; generates its own AC voltage
}

double ACPowerSource::output() const {
    return currentOutput;  // Returns the last calculated output for the base class
}

double ACPowerSource::output(double time) const {
    currentOutput = amplitude * sin(2 * M_PI * frequency * time);  // Sinusoidal waveform
    return currentOutput;  // Update and return time-varying voltage
}

std::string ACPowerSource::visualize() const {
    std::ostringstream oss;
    oss << "AC Power Source: " << amplitude << "V peak, " << frequency << "Hz";
    return oss.str();
}

std::string ACPowerSource::getName() const {
    return "AC Power Source";
}
