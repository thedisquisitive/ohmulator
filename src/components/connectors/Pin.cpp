#include "connectors/Pin.h"

Pin::Pin(PinType type) : voltage(0.0), type(type) {}

void Pin::setVoltage(double v) {
    voltage = v;
}

double Pin::output() const {
    return voltage;
}

Pin::PinType Pin::getType() const {
    return type;
}
