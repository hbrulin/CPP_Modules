#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::Ice(Ice const &tocopy) : AMateria(tocopy._type) {
    *this = tocopy;
}

Ice &Ice::operator=(Ice const &tocopy) {
    _type = tocopy._type;
    _xp = tocopy._xp;
    return *this;
}

Ice::~Ice() {
}

AMateria* Ice::clone() const {
    Ice *cpy = new Ice(*this);
	return (cpy);
}

void Ice::use(ICharacter& target) {
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
