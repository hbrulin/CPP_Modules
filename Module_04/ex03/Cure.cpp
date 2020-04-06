#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::Cure(Cure const &tocopy) : AMateria(tocopy._type) {
    *this = tocopy;
}

Cure &Cure::operator=(Cure const &tocopy) {
    _type = tocopy._type;
    _xp = tocopy._xp;
    return *this;
}

Cure::~Cure() {
}

AMateria* Cure::clone() const {
    Cure *cpy = new Cure(*this);
	return (cpy);
}

void Cure::use(ICharacter& target) {
    AMateria::use(target);
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; //revoir utilisation getName
}
