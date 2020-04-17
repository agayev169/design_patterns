#include <iostream>
#include <vector>

#include "toy_factory.h"
#include "toy.h"
#include "car.h"
#include "army_man.h"

int main(int argc, char const *argv[]) {
    std::vector<toy::Toy*> toys;

    toys.push_back(toy::ToyFactory::create_toy(toy::type::ARMY_MAN, "John"));
    toys.push_back(toy::ToyFactory::create_toy(toy::type::CAR, "Quick Silver"));

    for (toy::Toy *toy : toys) {
        std::cout << toy->to_string() << std::endl;
    }

    for (toy::Toy *toy : toys) {
        delete toy;
    }

    return 0;
}
