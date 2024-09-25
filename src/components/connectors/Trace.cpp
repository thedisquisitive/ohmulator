#include "connectors/Trace.h"

Trace::Trace() : Wire() {}  // Inherit Wire's constructor

std::string Trace::visualize() const {
    return "PCB Trace";
}

std::string Trace::getName() const {
    return "Trace";
}
