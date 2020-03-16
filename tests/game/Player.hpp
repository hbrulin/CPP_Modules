#ifndef DEF_PLAYER
#define DEF_PLAYER

#include <iostream>
#include <string>
#include "gun.hpp"

class Player
{
    private:

    int m_life;
    int m_mana;
    Gun m_gun;

    public: 

    Player(); //constructeur par défaut
    Player(std::string gun, int damage);
    ~Player(); //destructeur
    void    getDamage(int nb);
    void    attack(Player &target);
    void    getPotion(int quantity);
    void    changeGun(std::string gun, int damage);
    bool    isAlive()const;
    void    printState()const;
};

#endif