#ifndef NANDGATE_H
#define NANDGATE_H

#include "Component.h"

class NandGate : public Component {
public:
    NandGate();

    void applyVoltages(double input1, double input2) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double input1;
    double input2;
    double result;
};

#endif // NANDGATE_H
