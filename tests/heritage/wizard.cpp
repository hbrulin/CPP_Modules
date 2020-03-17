#include "Player.hpp"
#include "wizard.hpp"

//on indique au constructeur de wizard de faire d'abord appel au constructeur de la classe parente Player.
Wizard::Wizard() : Player(), m_mana(100)
{

}

//on utilise le constructeur surchargé de player pour faire un constructeur surchargé de wizard.
Wizard::Wizard(std::string name) : Player(name), m_mana(100)
{

}