#include "powersource/Battery.h"
#include <sstream>

Battery::Battery(double voltage, double capacity)
    : voltage(voltage), capacity(capacity), remainingCapacity(capacity) {}

void Battery::applyVoltages(double loadVoltage, double groundVoltage) {
    // Simulate the effect of drawing current from the battery
    double currentDraw = loadVoltage / voltage;
    discharge(currentDraw);
}

double Battery::output() const {
    return remainingCapacity > 0 ? voltage : 0.0;  // No output if the battery is drained
}

std::string Battery::visualize() const {
    std::ostringstream oss;
    oss << "Battery: " << voltage << "V, Remaining Capacity: " << remainingCapacity << " mAh";
    return oss.str();
}

void Battery::discharge(double loadCurrent) {
    remainingCapacity -= loadCurrent;
    if (remainingCapacity < 0) remainingCapacity = 0;  // Prevent negative capacity
}

std::string Battery::getName() const {
    return "Generic Battery";
}
