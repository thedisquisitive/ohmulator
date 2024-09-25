#include "buttons/NC_MomentaryButton.h"

NC_MomentaryButton::NC_MomentaryButton() : isPressed(false) {}

void NC_MomentaryButton::press() {
    isPressed = true;
}

void NC_MomentaryButton::release() {
    isPressed = false;
}

double NC_MomentaryButton::output() const {
    return isPressed ? 0.0 : 1.0;  // Output 0 when pressed, 1 otherwise
}

std::string NC_MomentaryButton::visualize() const {
    return isPressed ? "NC Momentary Button (Pressed)" : "NC Momentary Button (Released)";
}

std::string NC_MomentaryButton::getName() const {
    return "NC Momentary Button";
}
