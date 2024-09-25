#ifndef TRACE_H
#define TRACE_H

#include "connectors/Wire.h"

class Trace : public Wire {
public:
    Trace();

    std::string visualize() const override;
    std::string getName() const override;
};

#endif // TRACE_H
