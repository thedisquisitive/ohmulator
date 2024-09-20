#include <gtest/gtest.h>
#include "core/CircuitSimulator.h"
#include "components/Resistor.h"
#include "components/Capacitor.h"

TEST(CircuitSimulatorTest, RC_Circuit) {
    CircuitSimulator simulator;
    
    Resistor* resistor = new Resistor(1000);
    Capacitor* capacitor = new Capacitor(1e-6);
    simulator.addComponent(resistor);
    simulator.addComponent(capacitor);
    
    simulator.simulate(100);  // Simulate for 100 time steps

    // Test the final voltage on the capacitor (RC charging curve)
    EXPECT_GT(capacitor->output(), 0);  // Expect voltage to have increased
}
