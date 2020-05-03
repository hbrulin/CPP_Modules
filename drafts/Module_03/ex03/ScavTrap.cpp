#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string s) : ClapTrap(s)
{
    this->nrj_points = 50;
	this->nrj_points = 50;
	this->melee_dmg = 20;
	this->rgd_dmg = 15;
	this->dmg_reduc = 3;
    std::cout << "Scav " << s << " has come to life. Ready for combat." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "Scav " << name << " has succumbed to its injuries." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &tocopy) : ClapTrap(tocopy.name) {
    *this = tocopy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &tocopy) {
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

void ScavTrap::rangedAttack(std::string const & target) {
    std::cout << "Scav " << name << "bombed " << target << "!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target) {
    std::cout << "ScavTrap " << name << "punched " << target << "!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
    int taken = amount - this->dmg_reduc;
	this->hit_points -= taken;
	if (this->hit_points < 0)
		this->hit_points = 0;
    std::cout << "Scav " << name << " was inflicted " << amount << " of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
    this->hit_points += amount;
	if (this->hit_points > max_points)
		this->hit_points = max_points;
    std::cout << "Scav " << name << " was healed : +" << amount << " HP!" << std::endl;
}


static const std::string challenges[] = {
    "get the f**k out of here!",
    "get a new haircut!",
    "cure coronavirus.",
    "make a cheesecake.",
    "make the first move...",
};

void ScavTrap::challengeNewcomer(const std::string &newcomer) {
    std::string challenge = challenges[rand() % 5];
    std::cout << "Scav " << name << " challenges " << newcomer << " to : " << challenge << std::endl;
}