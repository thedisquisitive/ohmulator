#include "logic/AndGate.h"

AndGate::AndGate() : input1(0), input2(0), result(0) {}

void AndGate::applyVoltages(double in1, double in2) {
    input1 = in1;
    input2 = in2;
    result = (input1 > 0 && input2 > 0) ? 1.0 : 0.0;  // Simulate AND logic
}

double AndGate::output() const {
    return result;
}

std::string AndGate::visualize() const {
    return "AND Gate";
}

std::string AndGate::getName() const {
    return "AND Gate";
}
