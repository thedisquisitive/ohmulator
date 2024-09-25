#include "logic/NorGate.h"

NorGate::NorGate() : input1(0), input2(0), result(0) {}

void NorGate::applyVoltages(double in1, double in2) {
    input1 = in1;
    input2 = in2;
    result = (input1 > 0 || input2 > 0) ? 0.0 : 1.0;  // Simulate NOR logic
}

double NorGate::output() const {
    return result;
}

std::string NorGate::visualize() const {
    return "NOR Gate";
}

std::string NorGate::getName() const {
    return "NOR Gate";
}
