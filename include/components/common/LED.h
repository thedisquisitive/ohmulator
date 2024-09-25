#ifndef LED_H
#define LED_H

#include "Component.h"

class LED : public Component {
public:
    LED(double forwardVoltage);

    void applyVoltages(double inputVoltage, double groundVoltage = 0) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double forwardVoltage;
    bool lit;  // Whether the LED is lit (current is flowing)
    double current;  // Current through the LED
};

#endif // LED_H
