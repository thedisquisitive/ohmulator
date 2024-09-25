#ifndef XNORGATE_H
#define XNORGATE_H

#include "Component.h"

class XnorGate : public Component {
public:
    XnorGate();

    void applyVoltages(double input1, double input2) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double input1;
    double input2;
    double result;
};

#endif // XNORGATE_H
