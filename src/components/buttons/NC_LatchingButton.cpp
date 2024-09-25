#include "buttons/NC_LatchingButton.h"

NC_LatchingButton::NC_LatchingButton() : isLatched(false) {}

void NC_LatchingButton::press() {
    isLatched = !isLatched;  // Toggle the state
}

double NC_LatchingButton::output() const {
    return isLatched ? 0.0 : 1.0;  // Output 0 when latched (open), 1 otherwise
}

std::string NC_LatchingButton::visualize() const {
    return isLatched ? "NC Latching Button (Latched)" : "NC Latching Button (Not Latched)";
}

std::string NC_LatchingButton::getName() const {
    return "NC Latching Button";
}
