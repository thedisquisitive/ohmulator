#ifndef NOTGATE_H
#define NOTGATE_H

#include "Component.h"

class NotGate : public Component {
public:
    NotGate();

    void applyVoltages(double input, double groundVoltage) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double input;
    double result;
};

#endif // NOTGATE_H
