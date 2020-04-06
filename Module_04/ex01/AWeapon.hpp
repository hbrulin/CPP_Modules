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

    /*une fonction virtuelle est destinée à être redéfinie dans les classes qui en héritent.
    une fonction virtuelle PURE est une fonction virtuelle suivie de « = 0 » dans sa déclaration.
    Une fonction virtuelle signifie qu'elle peut être supplantée par une fonction d'une classe fille.
    Une fonction virtuelle pure signifie qu'elle doit être supplantée par une fonction d'une classe fille.
    La classe qui déclare une fonction virtuelle pure n'est alors pas instanciable car elle possède au moins
    une fonction qui doit être supplantée. On dit alors que c'est une classe abstraite.
    Une classe abstraite est donc destiné à être dérivé pour être spécialisé. La ou les classes filles doivent
    supplanter l'ensemble des fonctions virtuelles pures de leurs parents. 
    On dit alors que les classes filles concrétisent la classe abstraite. */

};

#endif