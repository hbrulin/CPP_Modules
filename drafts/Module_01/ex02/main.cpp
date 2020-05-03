#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent god;
    Zombie no_malloc;
    Zombie *zombie;

    god.setZombieType("Bloodsucker");
    zombie = god.newZombie("Christopher");

    no_malloc.advert();
    zombie->advert();
    delete zombie;

    //god.setZombieType("Bullshitter");
    god.randomChump();
    return (0);
}