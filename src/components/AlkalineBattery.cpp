#include "AlkalineBattery.h"

AlkalineBattery::AlkalineBattery() 
    : Battery(1.5, 1000) {  // Typical alkaline AA battery with 1.5V and 1000mAh
}

std::string AlkalineBattery::getName() const {
    return "Alkaline Battery (AA)";
}
