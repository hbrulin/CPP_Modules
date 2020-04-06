#include "Character.hpp"

Character::Character() : _name("noName"), _AP(0), _weapon(NULL) {
}

Character::Character(std::string const &name) : _name(name), _AP(40), _weapon(NULL) { //cmt initialiser?

}

Character::~Character() {
}

Character::Character(Character const &tocopy) {
    *this = tocopy;
}

AWeapon *Character::getWeapon(void) const
{
	return (this->_weapon);
}

int Character::getAP(void) const
{
	return (this->_AP);
}

Character &Character::operator=(const Character &tocopy) {
    this->_name = tocopy._name;
    this->_AP = tocopy._AP;
    this->_weapon = tocopy._weapon;
    
    return *this;
}

void Character::recoverAP() {
    _AP += 10;
    if (_AP > 40)
        _AP = 40;
    std::cout << "10 Action Points restored." << _name << " now has " << _AP << " Action Points." << std::endl;
}

void Character::equip(AWeapon *weapon) {
    this->_weapon = weapon;
}

void Character::attack(Enemy *enemy) {
    if (!this->_weapon || !enemy)
		return ;
	if (this->_AP < this->_weapon->getAPCost())
		return ;
	this->_AP -= this->_weapon->getAPCost();
	std::cout << this->_name << " attacks " << enemy->getType()
			<< " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHP() == 0)
		delete enemy;
}

std::string const Character::getName() const {
    return _name;
}

std::ostream &operator<<(std::ostream &out, Character const &character)
{
	out << character.getName() << " has " << character.getAP() << " AP and ";
	if (character.getWeapon())
		out << "wields a " << character.getWeapon()->getName();
	else
		out << "is unarmed";
	out << std::endl;
	return (out);
}