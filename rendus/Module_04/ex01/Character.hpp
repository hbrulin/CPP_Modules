#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "iostream"
#include "string"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

class Character {
    private: 
    Character();

    protected:
    std::string _name;
    int _AP;
    AWeapon *_weapon;

    public:
    Character(std::string const & name);
    ~Character();
    Character(Character const &tocopy);
    Character &operator=(const Character &tocopy);
    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);
    std::string const getName() const;
    AWeapon *getWeapon(void) const;
    int getAP(void) const;
    
};

std::ostream &operator<<(std::ostream &out, Character const &chara);

#endif