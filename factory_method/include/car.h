#pragma once

#include "toy.h"

namespace toy {
class Car : public Toy {
public:
    Car(const std::string &name);
    std::string to_string() const;
}; // end class Car
}; // end namespace toy