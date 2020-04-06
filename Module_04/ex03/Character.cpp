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
    //L’ancienne Materia du Character doit être supprimée.
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i])
            delete inventory[i];
    }
    for (int j = 0; j < 4; j++)
    {
        if (inventory[j])
            inventory[j] = tocopy.inventory[j]->clone();
    }
    return *this;
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i])
            delete inventory[i];
    }
	delete inventory;
}

std::string const &Character::getName() const {
    return _name;
}

void Character::equip(AMateria* m) {
    if (_count == 4)
        return;
    int i = 0;
    while(inventory[i])
        i++;
    inventory[i] = m;
    _count++;
}

void Character::unequip(int idx) {
    if (inventory[idx])
        inventory[idx] = NULL;
    _count--;
}

void Character::use(int idx, ICharacter& target) {
    if (inventory[idx])
        inventory[idx]->use(target);
}