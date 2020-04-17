#pragma once

#include <string>

namespace toy {
class Toy {
protected:
    std::string name;
public:
    virtual std::string to_string() const = 0;
}; // end class Toy
}; // end namespace toy