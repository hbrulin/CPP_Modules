#ifndef DEF_PLAYER
#define DEF_PLAYER

#include <iostream>
#include <string>

class Player
{
    private:

    int m_life;
    int m_mana;
    std::string m_gun;
    int m_damageGun;

    public: 

    Player(); //constructeur par défaut
    Player(std::string gun, int damage);
    ~Player(); //destructeur
    void    getDamage(int nb);
    void    attack(Player &target);
    void    getPotion(int quantity);
    void    changeGun(std::string gun, int damage);
    bool    isAlive()const;
};

#endif