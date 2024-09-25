#include "logic/NandGate.h"

NandGate::NandGate() : input1(0), input2(0), result(0) {}

void NandGate::applyVoltages(double in1, double in2) {
    input1 = in1;
    input2 = in2;
    result = (input1 > 0 && input2 > 0) ? 0.0 : 1.0;  // Simulate NAND logic
}

double NandGate::output() const {
    return result;
}

std::string NandGate::visualize() const {
    return "NAND Gate";
}

std::string NandGate::getName() const {
    return "NAND Gate";
}
