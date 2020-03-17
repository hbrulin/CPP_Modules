#include "Player.hpp"
using namespace std;

//constructeur par défaut
Player::Player() : m_life(100), m_name("Jack");
{
}

void    Player::getDamage(int nb)
{
    m_life -= nb;

    if (m_life < 0)
        m_life = 0;
}

void    Player::punch(Player &target)const //On reçoit en paramètre une référence vers un objet de type Player. Pointeur possible aussi.
{
    target.getDamage(10);
}

void    Player::introduction()const
{
    cout << "Bonjour, je m'appelle " << m_name << "." << endl;
    cout << "J'ai encore " << m_life << " points de vie." << endl;
}