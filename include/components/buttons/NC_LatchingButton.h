#ifndef NC_LATCHINGBUTTON_H
#define NC_LATCHINGBUTTON_H

#include "Component.h"

class NC_LatchingButton : public Component {
public:
    NC_LatchingButton();

    void press();
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    bool isLatched;
};

#endif // NC_LATCHINGBUTTON_H
