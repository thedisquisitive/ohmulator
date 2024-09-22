#ifndef RECTIFIER_H
#define RECTIFIER_H

#include "Component.h"
#include "Diode.h"

class Rectifier : public Component {
public:
    Rectifier();
    
    void applyVoltages(double acInput, double groundVoltage = 0) override;
    double output() const override;  // DC output
    std::string visualize() const override;
    std::string getName() const override;

private:
    Diode diodes[4];  // Four diodes for full-wave rectification
    double dcOutput;  // The rectified output voltage
};

#endif
