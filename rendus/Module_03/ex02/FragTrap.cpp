#include "FragTrap.hpp"


FragTrap::FragTrap(std::string s) : ClapTrap(s)
{
    this->nrj_points = 100;
	this->nrj_points = 100;
	this->melee_dmg = 30;
	this->rgd_dmg = 20;
	this->dmg_reduc = 5;
    std::cout << "FR4G-TP " << s << " has come to life. Ready for combat." << std::endl;
	srand(time(NULL));
}

FragTrap::~FragTrap() {
    std::cout << "FR4G-TP " << name << " is DEAD." << std::endl;
}

FragTrap::FragTrap(FragTrap const &tocopy) : ClapTrap(tocopy.name) {
    *this = tocopy;
}

FragTrap &FragTrap::operator=(const FragTrap &tocopy) {
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

void FragTrap::rangedAttack(std::string const & target) {
    std::cout << "FR4G-TP " << name << "range-attacked " << target << "!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target) {
    std::cout << "FR4G-TP " << name << "kicked " << target << "'s ass!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
    int taken = amount - this->dmg_reduc;
	this->hit_points -= taken;
	if (this->hit_points < 0)
		this->hit_points = 0;
    std::cout << "FR4G-TP " << name << " took " << amount << " of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
    this->hit_points += amount;
	if (this->hit_points > max_points)
		this->hit_points = max_points;
    std::cout << "FR4G-TP " << name << " recovered " << amount << " of HP!" << std::endl;
}

static const std::string random_attacks[] = {
    "Attaque éclair!",
    "Attaque trempette!",
    "Attaque tornade!",
    "Attaque Groz'Yeux!",
    "Attaque Croc-De-Mort!",
};

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
    if (this->nrj_points < 25)
    {
        std::cout << "FR4G-TP " << name << " is out of energy!" << std::endl;
        return;
    }

    this->nrj_points -= 25;
    if (this->nrj_points < 0)
		this->nrj_points = 0;
    std::string attack = random_attacks[rand() % 5];
    std::cout << "FR4G-TP " << name << " attacks " << target << " with : " << attack << std::endl;
}