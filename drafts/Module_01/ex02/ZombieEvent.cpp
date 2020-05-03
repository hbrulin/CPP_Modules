#include "Zombie.hpp"
#include "ZombieEvent.hpp"

const std::string NAMES[] = {
    "John", "Jack", "Jerry", "Jeremy", "Jessica",
    "James Dean", "July", "Steven", "Carrot", 
    "Cauliflower",
    };

std::string getRandomName()
{
    return (NAMES[rand() % 10]);
}

void ZombieEvent::setZombieType(std::string type)
{
    m_type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) const
{
    return new Zombie(name, m_type);
}

void ZombieEvent::randomChump() const
{
    Zombie zombie(getRandomName(), m_type);
    zombie.advert();
}