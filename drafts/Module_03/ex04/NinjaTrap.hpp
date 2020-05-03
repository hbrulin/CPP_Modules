#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {

    public:
    NinjaTrap(std::string s);
    ~NinjaTrap();
    NinjaTrap(NinjaTrap const &tocopy);
    NinjaTrap &operator=(const NinjaTrap &tocopy);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void ninjaShoeBox(ClapTrap &target);
    void ninjaShoeBox(FragTrap &target);
    void ninjaShoeBox(ScavTrap &target);
    void ninjaShoeBox(NinjaTrap &target);

};

#endif