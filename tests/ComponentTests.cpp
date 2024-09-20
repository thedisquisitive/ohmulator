#include <gtest/gtest.h>
#include "components/Resistor.h"

TEST(ResistorTest, BasicOhmsLaw) {
    Resistor resistor(1000);  // 1k ohm resistor
    resistor.applyVoltages(5.0, 0);  // Apply 5V across the resistor
    EXPECT_NEAR(resistor.output(), 0.005, 1e-5);  // Expect 5V/1000Ω = 5mA current
}
