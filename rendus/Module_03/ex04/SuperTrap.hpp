#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap {

    public:
    SuperTrap(std::string s);
    ~SuperTrap();
    SuperTrap(SuperTrap const &tocopy);
    SuperTrap &operator=(const SuperTrap &tocopy);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
};

#endif