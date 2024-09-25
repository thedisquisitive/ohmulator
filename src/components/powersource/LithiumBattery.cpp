#include "powersource/LithiumBattery.h"

LithiumBattery::LithiumBattery()
    : Battery(3.7, 3000) {  // Typical lithium-ion battery with 3.7V and 3000mAh
}

std::string LithiumBattery::getName() const {
    return "Lithium Battery";
}
