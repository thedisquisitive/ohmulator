#ifndef XORGATE_H
#define XORGATE_H

#include "Component.h"

class XorGate : public Component {
public:
    XorGate();

    void applyVoltages(double input1, double input2) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double input1;
    double input2;
    double result;
};

#endif // XORGATE_H
