#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 21, 5) {
}

PlasmaRifle::~PlasmaRifle() {
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &tocopy) : AWeapon(tocopy._name, tocopy._AP, tocopy._dmg) {
    *this = tocopy;
}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &tocopy) {
    this->_name = tocopy._name;
    this->_AP = tocopy._AP;
    this->_dmg = tocopy._dmg;
    return *this;
}

void PlasmaRifle::attack() const {
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}