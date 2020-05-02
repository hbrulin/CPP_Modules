#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

    public:
    FragTrap(std::string s);
    ~FragTrap();
    FragTrap(FragTrap const &tocopy);
    FragTrap &operator=(const FragTrap &tocopy);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void    vaulthunter_dot_exe(std::string const & target);
};

#endif