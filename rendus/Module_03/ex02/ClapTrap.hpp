#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {

    protected:
    int hit_points;
    int max_points;
    int nrj_points;
    int max_nrj;
    int level;
    std::string name;
    int melee_dmg;
    int rgd_dmg;
    int dmg_reduc;

    public:
	ClapTrap() {};
    ClapTrap(std::string s);
    ~ClapTrap();
    ClapTrap(ClapTrap const &tocopy);
    ClapTrap &operator=(const ClapTrap &tocopy);

    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void    display();

};

#endif