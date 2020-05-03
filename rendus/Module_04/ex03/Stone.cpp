#include "Stone.hpp"

Stone::Stone() : AMateria("stone") {
}

Stone::Stone(Stone const &tocopy) : AMateria(tocopy._type) {
    *this = tocopy;
}

Stone &Stone::operator=(Stone const &tocopy) {
    _type = tocopy._type;
    _xp = tocopy._xp;
    return *this;
}

Stone::~Stone() {
}

AMateria* Stone::clone() const {
    Stone *cpy = new Stone(*this);
	return (cpy);
}

void Stone::use(ICharacter& target) {
    AMateria::use(target);
    std::cout << "* trows rock at " << target.getName() << " *" << std::endl;
}
