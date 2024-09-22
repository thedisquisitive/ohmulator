#ifndef PSU_ACDC_H
#define PSU_ACDC_H

#include "ACPowerSource.h"
#include "Rectifier.h"
#include "Capacitor.h"
#include "Switch.h"

class PSU_ACDC {
public:
    PSU_ACDC(double acAmplitude, double acFrequency);

    void turnOn();
    void turnOff();
    double getDCOutput(double time) const;

private:
    ACPowerSource acSource;
    Rectifier rectifier;
    Capacitor smoothingCap;
    Switch powerSwitch;
    bool isOn;
};

#endif
