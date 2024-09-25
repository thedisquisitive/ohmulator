#include "common/LED.h"
#include <string>

LED::LED(double forwardVoltage) : forwardVoltage(forwardVoltage), lit(false), current(0) {}

void LED::applyVoltages(double inputVoltage, double groundVoltage) {
    double voltageAcross = inputVoltage - groundVoltage;

    // The LED lights up when the voltage exceeds the forward voltage
    if (voltageAcross >= forwardVoltage) {
        lit = true;
        current = (voltageAcross - forwardVoltage) / 0.01;  // Assume small internal resistance for current calculation
    } else {
        lit = false;
        current = 0;
    }
}

double LED::output() const {
    return current;
}

std::string LED::visualize() const {
    return lit ? "LED (lit)" : "LED (off)";
}

std::string LED::getName() const {
    return "LED";
}
