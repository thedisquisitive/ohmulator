#include <iostream>
#include <memory>
#include "LED.h"
#include "Switch.h"
#include "Potentiometer.h"

int main() {
    // Create components
    auto led = std::make_shared<LED>(2.0);  // LED with 2V forward voltage
    auto basicSwitch = std::make_shared<Switch>(true);  // Switch initially on
    auto potentiometer = std::make_shared<Potentiometer>(10000);  // 10k Ohm potentiometer

    // Set potentiometer position to 50%
    potentiometer->setPosition(0.5);

    // Apply voltages
    basicSwitch->applyVoltages(5.0, 0);  // Apply 5V to the switch
    potentiometer->applyVoltages(basicSwitch->output(), 0);  // Apply switch output to potentiometer
    led->applyVoltages(potentiometer->output(), 0);  // Apply potentiometer output to LED

    // Output results
    std::cout << basicSwitch->visualize() << ": Output = " << basicSwitch->output() << " V\n";
    std::cout << potentiometer->visualize() << ": Output = " << potentiometer->output() << " V\n";
    std::cout << led->visualize() << ": Current = " << led->output() << " A\n";

    return 0;
}
