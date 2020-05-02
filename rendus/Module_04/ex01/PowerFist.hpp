#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "iostream"
#include "string"
#include "AWeapon.hpp"

class PowerFist : virtual public AWeapon{

    public:
    PowerFist();
    virtual ~PowerFist();
    PowerFist(PowerFist const &tocopy);
    PowerFist &operator=(const PowerFist &tocopy);
    void attack() const; 

};

#endif