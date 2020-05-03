#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "Weapon.hpp"

class HumanB
{
    private:

    Weapon *m_weapon;
    std::string m_name;

    public:

    HumanB(std::string name);
    void    setWeapon(Weapon &weapon);
    void    attack()const;

};

#endif