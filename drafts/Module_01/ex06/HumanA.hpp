#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "Weapon.hpp"

class HumanA
{
    private:

    Weapon &m_weapon;
    std::string m_name;

    public:

    HumanA(std::string name, Weapon &weapon);
    void    attack()const;

};

#endif