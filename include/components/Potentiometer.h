#ifndef POTENTIOMETER_H
#define POTENTIOMETER_H

#include "Component.h"

class Potentiometer : public Component {
public:
    Potentiometer(double maxResistance);

    void setPosition(double position);  // Set wiper position (0 to 1)

    void applyVoltages(double inputVoltage, double groundVoltage = 0) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double maxResistance;
    double wiperPosition;  // Position of the wiper (0 = minimum, 1 = maximum)
    double voltageAtWiper;  // Voltage at the wiper
};

#endif // POTENTIOMETER_H
