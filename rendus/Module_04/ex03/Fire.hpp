#ifndef FIRE_HPP
#define FIRE_HPP

#include "AMateria.hpp"

class Fire: public AMateria 
{

    public:
    Fire();
    Fire(Fire const &tocopy);
	Fire &operator=(Fire const &tocopy);
    ~Fire();
    AMateria* clone() const;
    void use(ICharacter& target);

};

#endif