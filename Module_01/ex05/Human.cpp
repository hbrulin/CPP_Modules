#include "Human.hpp"
#include "Brain.hpp"

Human::Human()
{
}

const Brain   &Human::getBrain() //je passe renvoie le vrai objet et pas une copie
{
    return this->m_brain;
}

std::string   Human::identify()const
{
    return this->m_brain.identify();
}