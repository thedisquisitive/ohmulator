#include "logic/BufferGate.h"

BufferGate::BufferGate() : input(0), result(0) {}

void BufferGate::applyVoltages(double in, double groundVoltage = 0) {
    input = in;
    result = input;  // Simply pass the input to the output
}

double BufferGate::output() const {
    return result;
}

std::string BufferGate::visualize() const {
    return "Buffer Gate";
}

std::string BufferGate::getName() const {
    return "Buffer Gate";
}
