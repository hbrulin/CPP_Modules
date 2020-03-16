#include "Player.hpp"
using namespace std;

int main()
{
    Player david, goliath("Sword", 10); //constructeur par défaut appelé pour david, pas pour goliath
    Player mickey(goliath); //constructeur de copie
    goliath.attack(david);
    goliath.printState();
    david.getPotion(20);
    goliath.changeGun("Axe", 50);
    goliath.printState();
    goliath.attack(david);
    david.printState();
    goliath.printState();
    goliath.attack(david);
    david.printState();
    return (0);
}