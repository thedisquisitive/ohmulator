#include "logic/OrGate.h"

OrGate::OrGate() : input1(0), input2(0), result(0) {}

void OrGate::applyVoltages(double in1, double in2) {
    input1 = in1;
    input2 = in2;
    result = (input1 > 0 || input2 > 0) ? 1.0 : 0.0;  // Simulate OR logic
}

double OrGate::output() const {
    return result;
}

std::string OrGate::visualize() const {
    return "OR Gate";
}

std::string OrGate::getName() const {
    return "OR Gate";
}
