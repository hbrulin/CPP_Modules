#include "Pony.hpp"

int main()
{
    Pony *superstar = ponyOnTheHeap();
    Pony firebolt = ponyOnTheStack();

    superstar->jump();
    firebolt.jump();

    delete superstar;
    system("leaks a.out");
}