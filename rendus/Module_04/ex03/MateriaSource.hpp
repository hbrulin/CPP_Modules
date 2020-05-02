#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    protected:
    AMateria **source;
    int _count;

    public:
    MateriaSource();
    MateriaSource(MateriaSource const &tocopy);
	MateriaSource &operator=(MateriaSource const &tocopy);
    ~MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif