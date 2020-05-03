#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>
#include <string>

class ICharacter;

class AMateria { 
    private:
	AMateria();
    
    protected:
	std::string _type;
	unsigned int _xp;

    public:
    AMateria(std::string const & type); 
    AMateria(AMateria const &tocopy);
	AMateria &operator=(AMateria const &tocopy);
    virtual ~AMateria();

    std::string const & getType() const; 
    unsigned int getXP() const; 
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

};

#endif