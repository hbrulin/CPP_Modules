#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap {

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

    void    display();
};

#endif