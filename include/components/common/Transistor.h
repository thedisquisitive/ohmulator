#ifndef TRANSISTOR_H
#define TRANSISTOR_H

#include "Component.h"

class Transistor : public Component {
public:
    enum class Type { NType, PType };

    Transistor(Type type, double thresholdVoltage);
    
    // Match the base class method signature (2 parameters)
    void applyVoltages(double inputVoltage, double groundVoltage) override;
    
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    Type type;                // N-Type or P-Type transistor
    double thresholdVoltage;   // The threshold voltage
    bool conducting;           // Whether the transistor is conducting or not
    double gateVoltage;        // Gate voltage
    double sourceVoltage;      // Source voltage
    double drainVoltage;       // Drain voltage
};

#endif // TRANSISTOR_H
