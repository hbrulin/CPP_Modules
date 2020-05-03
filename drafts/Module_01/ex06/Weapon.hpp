#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <sstream>

class Weapon
{
    private:

    std::string m_type;

    public:

    Weapon();
    Weapon(std::string const &type);
    const std::string     &getType();
    void    setType(std::string s);
};


#endif