#include "Enemy.hpp"

Enemy::Enemy() : _HP(0), _type("no_type") {
}

Enemy::Enemy(int hp, std::string const & type) : _HP(hp), _type(type) {
}

Enemy::~Enemy() {
}

Enemy::Enemy(Enemy const &tocopy) {
    *this = tocopy;
}
Enemy &Enemy::operator=(const Enemy &tocopy) {
    this->_HP = tocopy._HP;
    this->_type = tocopy._type;
    return *this;
}
std::string const Enemy::getType() const {
    return _type;
}

int Enemy::getHP() const {
    return _HP;
}

void Enemy::takeDamage(int dmg) {
    this->_HP -= dmg;
	if (this->_HP < 0)
		this->_HP = 0;
}