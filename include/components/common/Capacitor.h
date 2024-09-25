#ifndef CAPACITOR_H
#define CAPACITOR_H

#include "Component.h"

class Capacitor : public Component {
public:
    Capacitor(double capacitance);
    void applyVoltages(double inputVoltage, double groundVoltage) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double capacitance;
    double charge;
};

#endif // CAPACITOR_H
