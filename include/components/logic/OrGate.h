#ifndef ORGATE_H
#define ORGATE_H

#include "Component.h"

class OrGate : public Component {
public:
    OrGate();

    void applyVoltages(double input1, double input2) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double input1;
    double input2;
    double result;
};

#endif // ORGATE_H
