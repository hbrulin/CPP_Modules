#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
    ZombieHorde horde(5);
    horde.announce();
    system("leaks a.out");
    return (0);
}