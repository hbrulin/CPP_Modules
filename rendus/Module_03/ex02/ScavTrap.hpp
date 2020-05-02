#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	private:
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

};

#endif