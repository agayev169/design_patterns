#include "car.h"

toy::Car::Car(const std::string &name) {
    this->name = name;
}

std::string toy::Car::to_string() const {
    return "I am a car called " + name + ".";
}