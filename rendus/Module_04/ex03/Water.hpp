#ifndef WATER_HPP
#define WATER_HPP

#include "AMateria.hpp"

class Water: public AMateria 
{

    public:
    Water();
    Water(Water const &tocopy);
	Water &operator=(Water const &tocopy);
    ~Water();
    AMateria* clone() const;
    void use(ICharacter& target);

};

#endif