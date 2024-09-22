#include "PickupCoil.h"
#include <cmath>

PickupCoil::PickupCoil(double inductance, MagneticField& magneticField, VibratingString& string)
    : inductance(inductance), voltage(0), magneticField(magneticField), string(string), lastPosition(0) {}

void PickupCoil::applyVoltages(double inputVoltage, double groundVoltage) {
    // Update the string position (time is simulated in your system)
    double currentPosition = string.updatePosition(inputVoltage);  // Pass inputVoltage as time for simplicity
    
    // Calculate the change in magnetic field strength based on string movement
    double fieldStrength = magneticField.calculateFieldStrength(currentPosition);
    double fluxChange = fieldStrength - magneticField.calculateFieldStrength(lastPosition);
    
    // Induced voltage in the coil is proportional to the rate of change of flux
    voltage = fluxChange * inductance;
    
    // Update last position for next iteration
    lastPosition = currentPosition;
}

double PickupCoil::output() const {
    return voltage;
}

std::string PickupCoil::visualize() const {
    return "Pickup Coil: Voltage = " + std::to_string(voltage) + " V";
}

std::string PickupCoil::getName() const {
    return "Pickup Coil";
}
