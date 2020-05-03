#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _count(0) {
    source = new AMateria*[4];
	for (int i = 0; i < 4; i++)
        source[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &tocopy) {
    *this = tocopy;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &tocopy) {
    _count = tocopy._count;
    for (int j = 0; j < 4; j++)
        source[j] = tocopy.source[j];
    return *this;
}

MateriaSource::~MateriaSource() {
}

void MateriaSource::learnMateria(AMateria* m) {
    if (_count == 4)
        return;
    int i = 0;
    while(source[i] != NULL)
        i++;
    source[i] = m;
    _count++;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++)
        if (source[i] && source[i]->getType() == type)
            return source[i]->clone();
    return NULL;
}