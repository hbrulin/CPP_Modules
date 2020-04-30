#include "Zombie.hpp"

Zombie::Zombie() : m_name("Bryan"), m_type("Brainwasher")
{

}

//constructeur surchargé
Zombie::Zombie(std::string name, std::string type) : m_name(name), m_type(type)
{

}

void    Zombie::announce()const
{
    std::cout << "<" << m_name << " (" << m_type << ")> Braiiiiiiinnnssss..." << std::endl;
}