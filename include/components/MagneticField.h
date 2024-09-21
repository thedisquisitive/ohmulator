#ifndef MAGNETIC_FIELD_H
#define MAGNETIC_FIELD_H

#include "Component.h"

class MagneticField {
public:
    MagneticField(double strength);
    
    // Simulate the field strength based on distance from the string
    double calculateFieldStrength(double distance) const;

private:
    double strength;  // Base strength of the magnetic field
};

#endif // MAGNETIC_FIELD_H
