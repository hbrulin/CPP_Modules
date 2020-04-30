#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : m_weapon(weapon), m_name(name)
{
}

void    HumanA::attack()const
{
    std::cout << m_name << " attacks with his " << m_weapon.getType() << std::endl;
}