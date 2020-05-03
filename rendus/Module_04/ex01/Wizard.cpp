#include "Wizard.hpp"

Wizard::Wizard() : Enemy(10, "Wizard") {
    std::cout << "I put a spell on you... !" << std::endl;
}

Wizard::~Wizard() {
    std::cout << "Bye Bye Baby" << std::endl;
}

Wizard::Wizard(Wizard const &tocopy) : Enemy(tocopy._HP, tocopy._type) {
    *this = tocopy;
    std::cout << "I put a spell on you... !" << std::endl;
}

Wizard &Wizard::operator=(const Wizard &tocopy) {
    this->_HP = tocopy._HP;
    this->_type = tocopy._type;
    return *this;
}

void Wizard::takeDamage(int dmg) {
    this->_HP -= dmg - 8;
    if (this->_HP < 0)
		this->_HP = 0;
}