#ifndef ANDGATE_H
#define ANDGATE_H

#include "Component.h"

class AndGate : public Component {
public:
    AndGate();  // Constructor

    void applyVoltages(double input1, double input2) override;  // Override for AND logic
    double output() const override;  // Returns the result of AND operation
    std::string visualize() const override;  // Visualization for logging
    std::string getName() const override;  // Name of the component

private:
    double input1;
    double input2;
    double result;  // Result of AND operation
};

#endif // ANDGATE_H
