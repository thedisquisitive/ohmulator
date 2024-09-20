#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

class Component {
public:
    // Virtual destructor for proper cleanup
    virtual ~Component() = default;

    // Apply voltages to the component (input voltage, ground voltage)
    virtual void applyVoltages(double inputVoltage, double groundVoltage = 0) = 0;

    // Return the output of the component (e.g., current, voltage)
    virtual double output() const = 0;

    // Return a string representation of the component for visualization or logging
    virtual std::string visualize() const = 0;

    // Get the name of the component type
    virtual std::string getName() const = 0;

protected:
    // You can add common data members for all components here (e.g., serial number, ID)
};

#endif // COMPONENT_H
