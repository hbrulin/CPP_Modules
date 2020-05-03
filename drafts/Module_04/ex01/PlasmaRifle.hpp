#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "iostream"
#include "string"
#include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon{

    public:
    PlasmaRifle();
    ~PlasmaRifle();
    PlasmaRifle(PlasmaRifle const &tocopy);
    PlasmaRifle &operator=(const PlasmaRifle &tocopy);
    void attack() const; 

};

#endif