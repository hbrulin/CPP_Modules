#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
    std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant() {
    std::cout << "Aaargh ..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &tocopy) : Enemy(tocopy._HP, tocopy._type) {
    *this = tocopy;
    std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &tocopy) {
    this->_HP = tocopy._HP;
    this->_type = tocopy._type;
    return *this;
}

void SuperMutant::takeDamage(int dmg) {
    this->_HP -= dmg - 3;
    if (this->_HP < 0)
		this->_HP = 0;
}