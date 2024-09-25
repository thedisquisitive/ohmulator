#ifndef NORGATE_H
#define NORGATE_H

#include "Component.h"

class NorGate : public Component {
public:
    NorGate();

    void applyVoltages(double input1, double input2) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double input1;
    double input2;
    double result;
};

#endif // NORGATE_H
