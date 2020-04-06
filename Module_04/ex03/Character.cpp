#include "Character.hpp"

Character::Character() : _name(NULL), inventory(NULL), _count(0) {
}

Character::Character(std::string name) : _name(name), _count(0) {
    inventory = new AMateria*[4];
}

Character::Character(Character const &tocopy) {
    *this = tocopy;
}

Character &Character::operator=(Character const &tocopy) {
    _name = tocopy._name;
    _count = tocopy._count;
    inventory = new AMateria*[_count];
    for (int i = 0; i < _count; i++)
        inventory[i] = tocopy.inventory[i]->clone();
    return *this;
}

Character::~Character() {

}

std::string const &Character::getName() const {

}

void Character::equip(AMateria* m) {

}

void Character::unequip(int idx) {

}

void Character::use(int idx, ICharacter& target) {

}