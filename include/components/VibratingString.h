#ifndef VIBRATING_STRING_H
#define VIBRATING_STRING_H

#include <cmath>

class VibratingString {
public:
    VibratingString(double frequency, double amplitude);

    // Update the string position over time (sinusoidal vibration)
    double updatePosition(double time) const;

private:
    double frequency;  // Frequency of vibration (pitch of the string)
    double amplitude;  // Amplitude of vibration (how strong the pluck is)
};

#endif // VIBRATING_STRING_H
