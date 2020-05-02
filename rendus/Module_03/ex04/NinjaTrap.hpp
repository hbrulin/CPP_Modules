#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap {

	private:
	NinjaTrap() {};

    public:
    NinjaTrap(std::string s);
    ~NinjaTrap();
    NinjaTrap(NinjaTrap const &tocopy);
    NinjaTrap &operator=(const NinjaTrap &tocopy);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);

    void ninjaShoeBox(ClapTrap &target);
    void ninjaShoeBox(FragTrap &target);
    void ninjaShoeBox(ScavTrap &target);
    void ninjaShoeBox(NinjaTrap &target);

};

#endif