#include "buttons/NO_LatchingButton.h"

NO_LatchingButton::NO_LatchingButton() : isLatched(false) {}

void NO_LatchingButton::press() {
    isLatched = !isLatched;  // Toggle the state
}

double NO_LatchingButton::output() const {
    return isLatched ? 1.0 : 0.0;  // Output 1 when latched, 0 otherwise
}

std::string NO_LatchingButton::visualize() const {
    return isLatched ? "NO Latching Button (Latched)" : "NO Latching Button (Not Latched)";
}

std::string NO_LatchingButton::getName() const {
    return "NO Latching Button";
}
