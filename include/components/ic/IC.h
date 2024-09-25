#ifndef IC_H
#define IC_H

#include "Component.h"
#include "connectors/Pin.h"
#include "connectors/Trace.h"
#include <vector>

class IC : public Component {
public:
    IC(int numInputs, int numOutputs);

    // Connect input voltage to a specific input pin
    void connectInput(int pin, double voltage);

    // Retrieve output voltage from a specific output pin
    double output(int pin) const;

    // Override the base class output to return the first output pin voltage
    double output() const override;

    // Add internal components (gates, etc.)
    void addInternalComponent(Component* component);

    // Connect pins via traces inside the IC
    void connectPins(int inputPin, int outputPin);

    // Override simulate method
    void applyVoltages(double inputVoltage, double groundVoltage = 0) override;

    std::string visualize() const override;
    std::string getName() const override;

private:
    int numInputs;
    int numOutputs;

    // Pins for external inputs and outputs
    std::vector<Pin> inputPins;
    std::vector<Pin> outputPins;

    // Internal components and traces
    std::vector<Component*> internalComponents;
    std::vector<Trace> traces;
};

#endif // IC_H
