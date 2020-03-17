#include "Player.hpp"
#include "gun.hpp"
using namespace std;

//constructeur par défaut
Player::Player() : m_life(100), m_mana(100), m_gun(0)
{
    m_gun = new Gun();
    //allocation dynamique de m_gun - pointeur. Appelle le constructeur par défaut de la classe GUN
    //Par sécurité, on initialise d'abord le pointeur à 0 dans la liste d'initialisation 
    //puis on fait l'allocation avec le newentre les accolades du constructeur
}

//surcharge, deuxieme constructeur
Player::Player(string gun, int damage) : m_life(100), m_mana(100), m_gun(0)
{
    m_gun = new Gun(gun, damage);
    //idem, appelle le constructeur surchargé
}

//constructeur de copie
Player::Player(Player const &tocopy) : m_life(tocopy.m_life), m_mana(tocopy.m_mana), m_gun(0)
{
    m_gun = new Gun(*tocopy.m_gun); //ici nouveau pointeur meme si c'est une copie, car on veut une nouvelle allocation.
    //Il faut déréferencer car chez le Player tocopy m_gun est un pointeur. 
}

//Destructeur
Player::~Player()
{
    delete m_gun;
}

void    Player::getDamage(int nb)
{
    m_life -= nb;

    if (m_life < 0)
        m_life = 0;
}

void    Player::attack(Player &target) //On reçoit en paramètre une référence vers un objet de type Player. Pointeur possible aussi.
{

    target.getDamage(m_gun->getDamage());

}

void    Player::getPotion(int quantity)
{
    m_life += quantity;

    if (m_life > 100)
        m_life = 100;
}

void    Player::changeGun(std::string gun, int damage)
{
    m_gun->change(gun, damage);
}

bool    Player::isAlive()const
{
    /*if (m_life > 0)
        return true;
    else
        return false;*/
    return (m_life > 0); //renvoie true si m_life > 0, 0 sinon.
}

void    Player::printState()const
{
    cout << "Life : " << m_life << " ";
    m_gun->print();
}

Player &Player::operator=(Player const &tocopy)
{
    m_life = tocopy.m_life;
    m_mana = tocopy.m_mana;
    delete m_gun; //on delete le gun existant en cas de copie avec =, copie post initialisation
    m_gun = new Gun(*tocopy.m_gun);
    return *this;
}