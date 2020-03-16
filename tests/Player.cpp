#include "Player.hpp"
using namespace std;

//constructeur par défaut
Player::Player()
{
    m_life = 100;
    m_mana = 100;
    m_gun = "Smith & Wesson";
    m_damageGun = 20;
}

/*Autre possibilité en liste d'utilisation:
Player::Player() : m_life(100), m_mana(100), m_gun("Smith & Wesson"), m_damageGun(10)
{
    Rien à mettre dans le corps du constructeur
}
*/

//surcharge, deuxieme constructeur
Player::Player(string gun, int damage) : m_life(100), m_mana(100), m_gun(gun), m_damageGun(damage)
{

}

//Destructeur
Player::~Player()
{
    //rien a mettre ici car pas d'allocation dynamique au sein de la classe. 
}

void    Player::getDamage(int nb)
{
    m_life -= nb;

    if (m_life < 0)
        m_life = 0;
}

void    Player::attack(Player &target) //On reçoit en paramètre une référence vers un objet de type Player. Pointeur possible aussi.
{

    target.getDamage(m_damageGun);

}

void    Player::getPotion(int quantity)
{
    m_life += quantity;

    if (m_life > 100)
        m_life = 100;
}

void    Player::changeGun(std::string gun, int damage)
{
    m_gun = gun;
    m_damageGun = damage;
}

bool    Player::isAlive()const
{
    /*if (m_life > 0)
        return true;
    else
        return false;*/
    return (m_life > 0); //renvoie true si m_life > 0, 0 sinon.
}