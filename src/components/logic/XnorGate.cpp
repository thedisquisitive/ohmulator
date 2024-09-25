#include "logic/XnorGate.h"

XnorGate::XnorGate() : input1(0), input2(0), result(0) {}

void XnorGate::applyVoltages(double in1, double in2) {
    input1 = in1;
    input2 = in2;
    result = (input1 > 0 && input2 > 0) || (input1 == 0 && input2 == 0) ? 1.0 : 0.0;  // Simulate XNOR logic
}

double XnorGate::output() const {
    return result;
}

std::string XnorGate::visualize() const {
    return "XNOR Gate";
}

std::string XnorGate::getName() const {
    return "XNOR Gate";
}
