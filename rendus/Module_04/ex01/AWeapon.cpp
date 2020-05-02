#include "AWeapon.hpp"

AWeapon::AWeapon(): _name(std::string()), _dmg(0), _AP(0) {
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : _name(name), _dmg(damage), _AP(apcost) {

}

AWeapon::~AWeapon() {

}

AWeapon::AWeapon(AWeapon const &tocopy) {
    *this = tocopy;
}

AWeapon &AWeapon::operator=(const AWeapon &tocopy) {
    this->_name = tocopy._name;
    this->_AP = tocopy._AP;
    this->_dmg = tocopy._dmg;
    return *this;
}

std::string const AWeapon::getName() const {
    return _name;
}

int AWeapon::getAPCost() const {
    return _AP;
}

int AWeapon::getDamage() const {
    return _dmg;
}