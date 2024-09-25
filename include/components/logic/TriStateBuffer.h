#ifndef TRISTATEBUFFER_H
#define TRISTATEBUFFER_H

#include "Component.h"

class TriStateBuffer : public Component {
public:
    TriStateBuffer();

    void applyVoltages(double inputVoltage, double enable) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double input;
    double enable;
    double result;
};

#endif // TRISTATEBUFFER_H
