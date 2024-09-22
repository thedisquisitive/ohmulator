#include "PSU_ACDC.h"

PSU_ACDC::PSU_ACDC(double acAmplitude, double acFrequency)
    : acSource(acAmplitude, acFrequency), rectifier(), smoothingCap(1000), powerSwitch(false), isOn(false) {}

void PSU_ACDC::turnOn() {
    powerSwitch.setState(true);
    isOn = true;
}

void PSU_ACDC::turnOff() {
    powerSwitch.setState(false);
    isOn = false;
}

double PSU_ACDC::getDCOutput(double time) const {
    if (!isOn) {
        return 0.0;
    }

    // Simulate rectification and smoothing
    double acVoltage = acSource.output(time);
    rectifier.applyVoltages(acVoltage);
    double dcVoltage = rectifier.output();
    
    // Smooth the DC voltage with the capacitor
    double smoothedVoltage = dcVoltage;  // Add more complex smoothing logic as needed
    return smoothedVoltage;
}
