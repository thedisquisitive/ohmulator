#ifndef ALKALINEBATTERY_H
#define ALKALINEBATTERY_H

#include "Battery.h"

class AlkalineBattery : public Battery {
public:
    AlkalineBattery();
    std::string getName() const override;
};

#endif
