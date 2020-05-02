#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string s) : ClapTrap(s)
{
    this->hit_points = 60;
    this->max_points = 60;
    this->nrj_points = 120;
	this->nrj_points = 120;
	this->melee_dmg = 60;
	this->rgd_dmg = 5;
	this->dmg_reduc = 0;
    std::cout << "Ninja " << s << " is ready to fight!!" << std::endl;
}

NinjaTrap::~NinjaTrap() {
    std::cout << "Ninja " << name << " has turned to dust." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &tocopy) : ClapTrap(tocopy.name) {
    *this = tocopy;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &tocopy) {
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

void NinjaTrap::rangedAttack(std::string const & target) {
    std::cout << "Ninja " << name << "screamed at " << target << "!" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target) {
    std::cout << "Ninja " << name << "double-kicked " << target << "!" << std::endl;
}

void NinjaTrap::ninjaShoeBox(ClapTrap &target) {
    std::cout << name << " caresses ClapTrap " << target.getName() << "..." << std::endl;
}

void NinjaTrap::ninjaShoeBox(FragTrap &target) {
    std::cout << name << " reboots FragTrap " << target.getName() << "!" << std::endl;
}

void NinjaTrap::ninjaShoeBox(ScavTrap &target) {
    std::cout << name << " scratches Scav " << target.getName() << "'s back!" << std::endl;
}

void NinjaTrap::ninjaShoeBox(NinjaTrap &target) {
    std::cout << name << " says hello to Ninja " << target.getName() << "." << std::endl;
}