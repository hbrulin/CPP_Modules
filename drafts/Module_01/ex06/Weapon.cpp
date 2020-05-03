#include "Weapon.hpp"

Weapon::Weapon() : m_type(0)
{
}

Weapon::Weapon(std::string const &type) : m_type(type)
{
}

const std::string     &Weapon::getType()
{
    return this->m_type;
}


void    Weapon::setType(std::string s)
{
    m_type = s;
}