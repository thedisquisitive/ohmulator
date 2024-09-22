#include <iostream>
#include "PickupCoil.h"
#include "VibratingString.h"
#include "MagneticField.h"

int main() {
    // Create a magnetic field with base strength
    MagneticField magneticField(1.0);

    // Simulate a vibrating string (e.g., A4 note, 440 Hz, with moderate amplitude)
    VibratingString string(440.0, 0.01);  // 440 Hz and 0.01 m amplitude

    // Create the pickup coil
    PickupCoil pickup(100, magneticField, string);  // 100mH inductance

    // Simulate the string vibrating over time and apply voltages
    for (double time = 0; time <= 0.01; time += 0.001) {
        pickup.applyVoltages(time);  // Pass time as the "input voltage" for the simulation
        std::cout << pickup.visualize() << std::endl;
    }

    return 0;
}
