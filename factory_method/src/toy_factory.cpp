#include "toy_factory.h"
#include "toy.h"
#include "car.h"
#include "army_man.h"

toy::Toy *toy::ToyFactory::create_toy(toy::type t, const std::string &name) {
    if (t == toy::type::CAR) {
        return new toy::Car(name);
    } else if (t == toy::type::ARMY_MAN) {
        return new toy::ArmyMan(name);
    }
}