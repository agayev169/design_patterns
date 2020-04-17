#include "army_man.h"

toy::ArmyMan::ArmyMan(const std::string &name) {
    this->name = name;
}

std::string toy::ArmyMan::to_string() const {
    return "I am an army man called " + name + ".";
}