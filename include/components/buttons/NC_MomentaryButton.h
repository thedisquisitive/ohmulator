#ifndef NC_MOMENTARYBUTTON_H
#define NC_MOMENTARYBUTTON_H

#include "Component.h"

class NC_MomentaryButton : public Component {
public:
    NC_MomentaryButton();

    void press();
    void release();
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    bool isPressed;
};

#endif // NC_MOMENTARYBUTTON_H
