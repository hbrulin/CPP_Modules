#ifndef WIZARD_HPP
#define WIZARD_HPP

#include "iostream"
#include "string"
#include "Enemy.hpp"

class Wizard : virtual public Enemy {

    public:

    Wizard(); 
    virtual ~Wizard ();
    Wizard (Wizard const &tocopy);
    Wizard &operator=(const Wizard &tocopy);
    void takeDamage(int);
};

#endif