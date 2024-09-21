#include "MagneticField.h"
#include <cmath>

MagneticField::MagneticField(double strength) : strength(strength) {}

double MagneticField::calculateFieldStrength(double distance) const {
    // Inverse square law approximation for magnetic field strength
    return strength / std::pow(distance, 2);
}
