#ifndef NO_LATCHINGBUTTON_H
#define NO_LATCHINGBUTTON_H

#include "Component.h"

class NO_LatchingButton : public Component {
public:
    NO_LatchingButton();

    void press();
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    bool isLatched;
};

#endif // NO_LATCHINGBUTTON_H
