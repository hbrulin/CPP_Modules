#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "iostream"
#include "string"
#include "Enemy.hpp"

class SuperMutant : virtual public Enemy {

    public:

    SuperMutant(); 
    virtual ~SuperMutant();
    SuperMutant(SuperMutant const &tocopy);
    SuperMutant &operator=(const SuperMutant &tocopy);
    void takeDamage(int);
};

#endif