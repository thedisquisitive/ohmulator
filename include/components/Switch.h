#ifndef SWITCH_H
#define SWITCH_H

#include "Component.h"

class Switch : public Component {
public:
    Switch(bool initialState = false);  // Initial state (on or off)

    void setState(bool state);  // Set the switch state (on/off)

    void applyVoltages(double inputVoltage, double groundVoltage = 0) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    bool state;  // On (true) or off (false)
    double outputVoltage;  // Voltage at the output
};

#endif // SWITCH_H
