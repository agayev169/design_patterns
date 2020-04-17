#pragma once

#include "toy.h"

namespace toy {
class ArmyMan : public Toy {
public:
    ArmyMan(const std::string &name);
    std::string to_string() const;
}; // end class ArmyMan
}; // end namespace toy