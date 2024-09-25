#ifndef PIN_H
#define PIN_H

#include "Component.h"

class Pin : public Component {
public:
    enum PinType {
        INPUT,
        OUTPUT
    };

    Pin(PinType type);

    void setVoltage(double voltage);
    double output() const override;

    PinType getType() const;

private:
    double voltage;
    PinType type;
};

#endif // PIN_H
