#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

#include <string>
#include <iostream>

class ISpaceMarine {
    
    public:
    virtual ~ISpaceMarine() {}
    virtual ISpaceMarine* clone() const = 0; //grace a ça je pourrait utiliser ma ft clone indifferemment selon ce qui est dans le tableau, un tactical ou assault
    virtual void battleCry() const = 0;
    virtual void rangedAttack() const = 0;
    virtual void meleeAttack() const = 0;
};

#endif