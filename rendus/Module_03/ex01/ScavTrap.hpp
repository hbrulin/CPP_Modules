#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap {

    private:
    int hit_points;
    int max_points;
    int nrj_points;
    int max_nrj;
    int level;
    std::string name;
    int melee_dmg;
    int rgd_dmg;
    int dmg_reduc;
	ScavTrap() {};

    public:
    ScavTrap(std::string s);
    ~ScavTrap();
    ScavTrap(ScavTrap const &tocopy);
    ScavTrap &operator=(const ScavTrap &tocopy);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void challengeNewcomer(const std::string &newcomer);

    void    display();
};

#endif