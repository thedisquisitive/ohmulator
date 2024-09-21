#ifndef RESISTOR_H
#define RESISTOR_H

#include "Component.h"

class Resistor : public Component {
public:
    Resistor(double resistance);
    void applyVoltages(double inputVoltage, double groundVoltage = 0) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double resistance;
    double voltage;
    double current;
};

#endif // RESISTOR_H
