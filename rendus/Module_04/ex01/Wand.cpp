#include "Wand.hpp"

Wand::Wand(): AWeapon("Wand", 5, 21) {
}

Wand::~Wand() {
}

Wand::Wand(Wand const &tocopy) : AWeapon(tocopy._name, tocopy._AP, tocopy._dmg) {
    *this = tocopy;
}

Wand &Wand::operator=(const Wand &tocopy) {
    this->_name = tocopy._name;
    this->_AP = tocopy._AP;
    this->_dmg = tocopy._dmg;
    return *this;
}

void Wand::attack() const {
    std::cout << "* FIREBOLT *" << std::endl;
}