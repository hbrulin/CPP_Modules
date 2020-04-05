#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string s): ClapTrap(s), NinjaTrap(name), FragTrap(name)
{
	this->hit_points = this->FragTrap::hit_points;
	this->max_points = this->FragTrap::max_points;
	this->nrj_points = this->NinjaTrap::nrj_points;
	this->max_nrj = this->NinjaTrap::max_nrj;
	this->melee_dmg = this->NinjaTrap::melee_dmg;
	this->rgd_dmg = this->FragTrap::rgd_dmg;
	this->dmg_reduc = this->FragTrap::dmg_reduc;
    std::cout << s << ": MUTANT CREATED." << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "MUTANT " << name << ": DESTROYED."  << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &tocopy) : ClapTrap(tocopy.name), NinjaTrap(name), FragTrap(name) {
    *this = tocopy;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &tocopy) {
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

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}