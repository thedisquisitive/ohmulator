#include "ic/IC.h"
#include <iostream>

IC::IC(int numInputs, int numOutputs)
    : numInputs(numInputs), numOutputs(numOutputs),
      inputPins(numInputs, Pin(Pin::INPUT)), outputPins(numOutputs, Pin(Pin::OUTPUT)) {}

// Connect voltage to a specific input pin
void IC::connectInput(int pin, double voltage) {
    if (pin >= 0 && pin < numInputs) {
        inputPins[pin].setVoltage(voltage);
    } else {
        std::cerr << "Invalid input pin: " << pin << std::endl;
    }
}

// Get the output voltage from a specific output pin
double IC::output(int pin) const {
    if (pin >= 0 && pin < numOutputs) {
        return outputPins[pin].output();
    } else {
        std::cerr << "Invalid output pin: " << pin << std::endl;
        return 0.0;
    }
}

// Override the base class output method to return the first output pin's voltage
double IC::output() const {
    if (!outputPins.empty()) {
        return outputPins[0].output();
    } else {
        std::cerr << "No output pins available" << std::endl;
        return 0.0;
    }
}

// Add internal components (e.g., logic gates) to the IC
void IC::addInternalComponent(Component* component) {
    internalComponents.push_back(component);
}

// Connect two pins via an internal trace
void IC::connectPins(int inputPin, int outputPin) {
    if (inputPin >= 0 && inputPin < numInputs && outputPin >= 0 && outputPin < numOutputs) {
        Trace trace;
        trace.connect(&inputPins[inputPin], &outputPins[outputPin]);
        traces.push_back(trace);
    } else {
        std::cerr << "Invalid pins for connection" << std::endl;
    }
}

// Apply voltages to the IC (required by the base class)
void IC::applyVoltages(double inputVoltage, double groundVoltage) {
    // Apply voltages to input pins
    for (int i = 0; i < numInputs; ++i) {
        inputPins[i].setVoltage(inputVoltage);
    }

    // Simulate internal components
    for (auto* component : internalComponents) {
        component->applyVoltages(inputVoltage, groundVoltage);
    }

    // Simulate traces that transfer signals between pins
    for (auto& trace : traces) {
        trace.simulate();
    }
}

std::string IC::visualize() const {
    return "IC with " + std::to_string(numInputs) + " inputs and " + std::to_string(numOutputs) + " outputs";
}

std::string IC::getName() const {
    return "IC";
}
