#ifndef LEMONBATTERY_H
#define LEMONBATTERY_H

#include "Battery.h"

class LemonBattery : public Battery {
public:
    LemonBattery();
    std::string getName() const override;
};

#endif
