#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string s) : hit_points(100), max_points(100), 
    nrj_points(100), max_nrj(100), level(1), melee_dmg(100),
    rgd_dmg(100), dmg_reduc(100), name(s)
{
    std::cout << "ClapTrap " << s << " was born from the ashes of its enemies." << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " is no more." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &tocopy) {
    *this = tocopy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &tocopy) {
    this->hit_points = tocopy.hit_points;
    this->max_points = tocopy.max_points;
    this->nrj_points = tocopy.nrj_points;
    this->max_nrj = tocopy.max_nrj;
    this->level = tocopy.level;
    this->name = tocopy.name;
    this->melee_dmg = tocopy.melee_dmg;
    this->rgd_dmg = tocopy.rgd_dmg;
    this->dmg_reduc = tocopy.dmg_reduc;
    return *this;
}

void ClapTrap::rangedAttack(std::string const & target) {
    std::cout << "ClapTrap " << name << "attacked " << target << "from afar!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target) {
    std::cout << "ClapTrap " << name << "pushed " << target << "on the floor!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    int taken = amount - this->dmg_reduc;
	this->hit_points -= taken;
	if (this->hit_points < 0)
		this->hit_points = 0;
    std::cout << "ClapTrap " << name << " is down " << amount << " HP!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    this->hit_points += amount;
	if (this->hit_points > max_points)
		this->hit_points = max_points;
    std::cout << "ClapTrap " << name << " has gained " << amount << " HP!" << std::endl;
}

void    ClapTrap::display() {
    std::cout << "ClapTrap " << name << " has " << hit_points << " HP and " << nrj_points << " energy points." << std::endl;
}

std::string ClapTrap::getName() {
    return this->name;
}