#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include "iostream"
#include "string"

class AWeapon {

    private: 
    AWeapon();

    protected:
    std::string _name;
    int _dmg;
    int _AP;

    public:
    AWeapon(std::string const & name, int apcost, int damage); 
    virtual ~AWeapon();
    AWeapon(AWeapon const &tocopy);
    AWeapon &operator=(const AWeapon &tocopy);
    std::string const getName() const;
    int getAPCost() const;
    int getDamage() const;
    virtual void attack() const = 0; 

};

#endif