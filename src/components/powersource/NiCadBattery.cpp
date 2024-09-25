#include "powersource/NiCadBattery.h"

NiCadBattery::NiCadBattery()
    : Battery(1.2, 800) {  // Typical NiCad battery with 1.2V and 800mAh
}

std::string NiCadBattery::getName() const {
    return "NiCad Battery";
}
