#include "uncommon/VibratingString.h"
#include "MathUtils.h"

VibratingString::VibratingString(double frequency, double amplitude)
    : frequency(frequency), amplitude(amplitude) {}

double VibratingString::updatePosition(double time) const {
    // Simulate string position as a sinusoidal waveform over time
    return amplitude * std::sin(2.0 * M_PI * frequency * time);
}
