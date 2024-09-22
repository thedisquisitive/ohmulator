#ifndef PICKUP_COIL_H
#define PICKUP_COIL_H

#include "Component.h"
#include "MagneticField.h"
#include "VibratingString.h"

class PickupCoil : public Component {
public:
    PickupCoil(double inductance, MagneticField& magneticField, VibratingString& string);

    void applyVoltages(double inputVoltage, double groundVoltage = 0) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double inductance;          // Inductance of the coil
    double voltage;             // Output voltage of the coil
    MagneticField& magneticField;  // Reference to the magnetic field
    VibratingString& string;       // Reference to the vibrating string
    double lastPosition;        // Previous position of the string for flux calculation
};

#endif // PICKUP_COIL_H
