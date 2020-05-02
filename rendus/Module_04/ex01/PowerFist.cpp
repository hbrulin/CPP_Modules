#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50) {
}

PowerFist::~PowerFist() {
}

PowerFist::PowerFist(PowerFist const &tocopy) : AWeapon(tocopy._name, tocopy._AP, tocopy._dmg) {
    *this = tocopy;
}

PowerFist &PowerFist::operator=(const PowerFist &tocopy) {
    this->_name = tocopy._name;
    this->_AP = tocopy._AP;
    this->_dmg = tocopy._dmg;
    return *this;
}

void PowerFist::attack() const {
    std::cout << "* pschhh... SBAM ! *" << std::endl;
}