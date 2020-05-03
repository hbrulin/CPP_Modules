#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
    private:

    const   Brain m_brain;

    public:

    Human();
    const Brain   &getBrain(); //je vais recevoir reference de brain
    std::string    identify()const;

};

#endif