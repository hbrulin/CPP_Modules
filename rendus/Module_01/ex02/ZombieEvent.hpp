#ifndef ZOMBIE_EVENTS_HPP
#define ZOMBIE_EVENTS_HPP

#include "Zombie.hpp"
#include <iostream>
#include <string>

class ZombieEvent
{
    public:

    void setZombieType(std::string type);
    Zombie *newZombie(std::string name) const;
    void randomChump()const;


    private:

    std::string m_type;

};

#endif