#include "Pony.hpp"

void    Pony::jump()
{
    std::cout << "yeeehhaaah!" << std::endl;
}

Pony    *ponyOnTheHeap()
{
    return new Pony();
}

Pony    ponyOnTheStack()
{
    Pony    firebolt;
    return (firebolt);
}