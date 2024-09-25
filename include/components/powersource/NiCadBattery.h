#ifndef NICADBATTERY_H
#define NICADBATTERY_H

#include "Battery.h"

class NiCadBattery : public Battery {
public:
    NiCadBattery();
    std::string getName() const override;
};

#endif
