#ifndef DEF_WARRIOR
#define DEF_WARRIOR

#include <iostream>
#include <string>
#include "Player.hpp"

class Warrior : public Player //signifie que la classe Warrior hérite de la classe Player
{
    //la classe Warrior contiendra de base tous les attributs et toutes les méthodes de la classe Player.
    //Et on en rajoute ici.

    public:
    Warrior();
    void hammer()const;
    void    introduction()const;
}



#endif