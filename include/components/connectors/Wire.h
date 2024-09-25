#ifndef WIRE_H
#define WIRE_H

#include "Component.h"

class Wire : public Component {
public:
    Wire();

    // Method to set if the wire is connected to other components
    void connect(bool isConnected);
    
    // Override the base class methods
    void applyVoltages(double inputVoltage, double groundVoltage = 0) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double outputVoltage;  // Voltage at the output side of the wire
    bool connected;        // Tracks whether the wire is part of a closed circuit
};

#endif // WIRE_H
