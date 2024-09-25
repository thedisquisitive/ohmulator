#include "logic/SchmittTrigger.h"

SchmittTrigger::SchmittTrigger(double ut, double lt)
    : upperThreshold(ut), lowerThreshold(lt), input(0), result(0) {}

void SchmittTrigger::applyVoltages(double in, double ground = 0) {
    input = in;
    if (input > upperThreshold) {
        result = 1.0;
    } else if (input < lowerThreshold) {
        result = 0.0;
    }
}

double SchmittTrigger::output() const {
    return result;
}

std::string SchmittTrigger::visualize() const {
    return "Schmitt Trigger";
}

std::string SchmittTrigger::getName() const {
    return "Schmitt Trigger";
}
