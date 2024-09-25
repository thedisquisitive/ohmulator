#ifndef BATTERY_H
#define BATTERY_H

#include "Component.h"

class Battery : public Component {
public:
    Battery(double voltage, double capacity);
    
    void applyVoltages(double loadVoltage, double groundVoltage = 0) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

    // Method to discharge the battery
    virtual void discharge(double loadCurrent);

protected:
    double voltage;    // Battery's output voltage
    double capacity;   // Battery's capacity (in mAh)
    double remainingCapacity;  // Remaining charge in the battery
};

#endif
