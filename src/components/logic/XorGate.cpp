#include "logic/XorGate.h"

XorGate::XorGate() : input1(0), input2(0), result(0) {}

void XorGate::applyVoltages(double in1, double in2) {
    input1 = in1;
    input2 = in2;
    result = (input1 > 0) != (input2 > 0) ? 1.0 : 0.0;  // Simulate XOR logic
}

double XorGate::output() const {
    return result;
}

std::string XorGate::visualize() const {
    return "XOR Gate";
}

std::string XorGate::getName() const {
    return "XOR Gate";
}
