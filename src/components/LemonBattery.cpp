#include "LemonBattery.h"

LemonBattery::LemonBattery()
    : Battery(0.7, 25) {  // Lemon batteries generate ~0.7V and have low capacity
}

std::string LemonBattery::getName() const {
    return "Lemon Battery";
}
