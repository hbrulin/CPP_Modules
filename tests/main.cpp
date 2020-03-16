#include "Player.hpp"
using namespace std;

int main()
{
    Player david, goliath("Sword", 10); //constructeur par défaut appelé pour david, pas pour goliath
    Player mickey(goliath); //constructeur de copie
    goliath.attack(david);
    david.getPotion(20);
    goliath.changeGun("Axe", 50);
    goliath.attack(david);
    cout << david.isAlive() << endl; 
    goliath.attack(david);
    cout << david.isAlive() << endl; 
    return (0);
}