#include "PotatoBattery.h"

PotatoBattery::PotatoBattery()
    : Battery(0.5, 20) {  // Potato batteries generate ~0.5V and have low capacity
}

std::string PotatoBattery::getName() const {
    return "Potato Battery";
}
