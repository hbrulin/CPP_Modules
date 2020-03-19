#include "Human.hpp"
#include "Brain.hpp"

Human::Human()
{
}

const Brain   &Human::getBrain()
{
    return this->m_brain;
}

std::string   Human::identify()const
{
    return this->m_brain.identify();
}