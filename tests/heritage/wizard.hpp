#ifndef DEF_WIZARD
#define DEF_WIZARD

#include <iostream>
#include <string>
#include "Player.hpp"

class Wizard : public Player
{
    public:

    Wizard();
    Wizard(std::string name) : Player(name), m_mana(100);
    void makefire()const;
    void makeice()const;

    private:

    int m_mana;
}

#endif 