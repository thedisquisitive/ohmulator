#ifndef INDUCTOR_H
#define INDUCTOR_H

#include "Component.h"

class Inductor : public Component {
public:
    Inductor(double inductance);
    void applyVoltages(double inputVoltage, double groundVoltage = 0) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double inductance;
    double current;
};

#endif // INDUCTOR_H
