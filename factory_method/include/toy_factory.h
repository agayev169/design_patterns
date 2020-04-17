#pragma once

#include <string>

#include "toy.h"

namespace toy {
enum type {
    CAR,
    ARMY_MAN
};
class ToyFactory {
public:
    static Toy *create_toy(type t, const std::string &name);
}; // end class ToyFactory
}; // end namespace toy