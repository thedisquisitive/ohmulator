#include "buttons/NO_MomentaryButton.h"

NO_MomentaryButton::NO_MomentaryButton() : isPressed(false) {}

void NO_MomentaryButton::press() {
    isPressed = true;
}

void NO_MomentaryButton::release() {
    isPressed = false;
}

double NO_MomentaryButton::output() const {
    return isPressed ? 1.0 : 0.0;  // Output 1 when pressed, 0 otherwise
}

std::string NO_MomentaryButton::visualize() const {
    return isPressed ? "NO Momentary Button (Pressed)" : "NO Momentary Button (Released)";
}

std::string NO_MomentaryButton::getName() const {
    return "NO Momentary Button";
}
