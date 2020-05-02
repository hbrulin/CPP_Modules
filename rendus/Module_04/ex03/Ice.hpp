#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria 
{

    public:
    Ice();
    Ice(Ice const &tocopy);
	Ice &operator=(Ice const &tocopy);
    ~Ice();
    AMateria* clone() const;
    void use(ICharacter& target);

};

#endif