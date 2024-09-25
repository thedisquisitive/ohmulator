#ifndef HALFADDER_H
#define HALFADDER_H

#include "Component.h"

class HalfAdder : public Component {
public:
    HalfAdder();

    void applyVoltages(double inputA, double inputB) override;
    double sum() const;
    double carry() const;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double inputA;
    double inputB;
    double sumResult;
    double carryResult;
};

#endif // HALFADDER_H
