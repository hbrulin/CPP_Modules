#ifndef DEF_PLAYER
#define DEF_PLAYER

#include <iostream>
#include <string>

class Player
{
    protected:

    int m_life;
    std::string m_name;

    public: 

    Player(); //constructeur par défaut
    Player(std::string name); //constructeur surchargé
    void    getDamage(int nb);
    void    punch(Player &target)const;
    void    introduction()const;
};

#endif