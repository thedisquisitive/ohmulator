#ifndef LITHIUMBATTERY_H
#define LITHIUMBATTERY_H

#include "Battery.h"

class LithiumBattery : public Battery {
public:
    LithiumBattery();
    std::string getName() const override;
};

#endif
