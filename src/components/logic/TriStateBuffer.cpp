#include "logic/TriStateBuffer.h"

TriStateBuffer::TriStateBuffer() : input(0), enable(0), result(0) {}

void TriStateBuffer::applyVoltages(double in, double en) {
    input = in;
    enable = en;
    result = (enable > 0) ? input : -1;  // -1 simulates high impedance (Z)
}

double TriStateBuffer::output() const {
    return result;
}

std::string TriStateBuffer::visualize() const {
    return (result == -1) ? "Z (high impedance)" : std::to_string(result);
}

std::string TriStateBuffer::getName() const {
    return "Tri-State Buffer";
}
