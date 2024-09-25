#ifndef POTATOBATTERY_H
#define POTATOBATTERY_H

#include "Battery.h"

class PotatoBattery : public Battery {
public:
    PotatoBattery();
    std::string getName() const override;
};

#endif
