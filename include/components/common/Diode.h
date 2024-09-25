#ifndef DIODE_H
#define DIODE_H

#include "Component.h"

class Diode : public Component {
public:
    Diode() { forwardVoltage = 0.7; }
    Diode(double forwardVoltage);
    void applyVoltages(double inputVoltage, double groundVoltage) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double forwardVoltage;
    bool conducting;
    double current;
    double resistance;
};

#endif // DIODE_H
