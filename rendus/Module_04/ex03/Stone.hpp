#ifndef STONE_HPP
#define STONE_HPP

#include "AMateria.hpp"

class Stone: public AMateria 
{

    public:
    Stone();
    Stone(Stone const &tocopy);
	Stone &operator=(Stone const &tocopy);
    ~Stone();
    AMateria* clone() const;
    void use(ICharacter& target);

};

#endif