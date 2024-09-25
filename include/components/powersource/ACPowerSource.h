#ifndef ACPOWERSOURCE_H
#define ACPOWERSOURCE_H

#include "Component.h"

class ACPowerSource : public Component {
public:
    ACPowerSource(double amplitude, double frequency);

    void applyVoltages(double inputVoltage, double groundVoltage = 0) override;
    
    // Override the pure virtual method from Component
    double output() const override;  // Static output for the current moment
    double output(double time) const;  // Time-varying output (AC wave)

    std::string visualize() const override;
    std::string getName() const override;

private:
    double amplitude;  // Peak voltage
    double frequency;  // Frequency of AC signal (Hz)
    mutable double currentOutput;  // Store the current output for the base class method
};

#endif
