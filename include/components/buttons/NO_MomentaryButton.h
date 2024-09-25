#ifndef NO_MOMENTARYBUTTON_H
#define NO_MOMENTARYBUTTON_H

#include "Component.h"

class NO_MomentaryButton : public Component {
public:
    NO_MomentaryButton();

    void press();
    void release();
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    bool isPressed;
};

#endif // NO_MOMENTARYBUTTON_H
