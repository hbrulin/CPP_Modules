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
    Gun *m_gun;

    public: 

    Player(); //constructeur par défaut
    Player(std::string gun, int damage); //constructeur surchargé
    Player(Player const &tocopy); //constructeur de copie pour prévoir cas ou un pointeur est déclaré dans un classe et qu'on veut allouer de nouveau de la mémoire pour une nouvelle copie.
    ~Player(); //destructeur
    void    getDamage(int nb);
    void    attack(Player &target);
    void    getPotion(int quantity);
    void    changeGun(std::string gun, int damage);
    bool    isAlive()const;
    void    printState()const;
    Player &operator=(Player const &tocopy);
};

#endif