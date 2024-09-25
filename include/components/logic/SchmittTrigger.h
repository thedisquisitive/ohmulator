#ifndef SCHMITTTRIGGER_H
#define SCHMITTTRIGGER_H

#include "Component.h"

class SchmittTrigger : public Component {
public:
    SchmittTrigger(double upperThreshold, double lowerThreshold);

    void applyVoltages(double inputVoltage, double ground) override;
    double output() const override;
    std::string visualize() const override;
    std::string getName() const override;

private:
    double input;
    double result;
    double upperThreshold;
    double lowerThreshold;
};

#endif // SCHMITTTRIGGER_H
