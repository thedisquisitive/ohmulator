#include "logic/HalfAdder.h"

HalfAdder::HalfAdder() : inputA(0), inputB(0), sumResult(0), carryResult(0) {}

void HalfAdder::applyVoltages(double inA, double inB) {
    inputA = inA;
    inputB = inB;
    sumResult = (inputA != inputB) ? 1.0 : 0.0;  // XOR logic for Sum
    carryResult = (inputA > 0 && inputB > 0) ? 1.0 : 0.0;  // AND logic for Carry
}

double HalfAdder::sum() const {
    return sumResult;
}

double HalfAdder::carry() const {
    return carryResult;
}

std::string HalfAdder::visualize() const {
    return "Half Adder";
}

std::string HalfAdder::getName() const {
    return "Half Adder";
}
