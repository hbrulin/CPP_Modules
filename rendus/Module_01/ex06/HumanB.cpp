#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : m_name(name)
{
}

void    HumanB::setWeapon(Weapon &weapon)
{
    m_weapon = &weapon; //vu que pointeur je passe l'adresse de ma référence
}

void    HumanB::attack()const
{
    std::cout << m_name << " attacks with his " << m_weapon->getType() << std::endl;
}