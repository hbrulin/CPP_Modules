#include "Character.hpp"

Character::Character(std::string name) : _name(name), _count(0) {
	for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(Character const &other):
	_name(other._name), _count(0)
{
	for (int i = 0; i < other._count; i++)
		this->equip(other.inventory[i]->clone());
	//for (int i = this->_count; i < 4; i++)
	//	this->inventory[i] = nullptr;
}

Character &Character::operator=(Character const &tocopy)
{
	this->_name = tocopy._name;
	for (int i = 0; i < this->_count; i++)
		delete this->inventory[i];
	for (int i = this->_count; i < 4; i++)
		this->inventory[i] = nullptr;
	this->_count = 0;
	for (int i = 0; i < tocopy._count; i++)
		this->equip(tocopy.inventory[i]->clone());
	return (*this);
}

Character::~Character() {
    for (int i = 0; i < 4; i++)
    {
        if (inventory[i])
            delete inventory[i];
    }
}

std::string const &Character::getName() const {
    return _name;
}

void Character::equip(AMateria* m) {
	if (this->_count == 4 || m == nullptr)
		return ;
	for (int i = 0; i < this->_count; i++)
		if (this->inventory[i] == m)
			return ;
	this->inventory[this->_count++] = m;
}

void Character::unequip(int idx) {
    if (inventory[idx])
        inventory[idx] = NULL;
    _count--;
}

void Character::use(int idx, ICharacter& target) {
    if (inventory[idx] != NULL && idx <= 3)
        inventory[idx]->use(target);
	else
		return;
}