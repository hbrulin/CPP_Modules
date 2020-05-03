#ifndef WAND_HPP
#define WAND_HPP

#include "iostream"
#include "string"
#include "AWeapon.hpp"

class Wand : virtual public AWeapon{

    public:
    Wand();
    virtual ~Wand();
    Wand(Wand const &tocopy);
    Wand &operator=(const Wand &tocopy);
    void attack() const; 

};

#endif