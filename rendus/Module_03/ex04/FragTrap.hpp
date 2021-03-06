#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

	private:
	FragTrap() {};

    public:
    FragTrap(std::string s);
    ~FragTrap();
    FragTrap(FragTrap const &tocopy);
    FragTrap &operator=(const FragTrap &tocopy);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);

    void    vaulthunter_dot_exe(std::string const & target);
};

#endif