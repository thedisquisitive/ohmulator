#ifndef BUFFERGATE_H
#define BUFFERGATE_H

#include "Component.h"

class BufferGate : public Component {
public:
    BufferGate();

    void applyVoltages(double input, double groundVoltage) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double input;
    double result;
};

#endif // BUFFERGATE_H
