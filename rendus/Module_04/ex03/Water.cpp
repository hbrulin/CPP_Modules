#include "Water.hpp"

Water::Water() : AMateria("water") {
}

Water::Water(Water const &tocopy) : AMateria(tocopy._type) {
    *this = tocopy;
}

Water &Water::operator=(Water const &tocopy) {
    _type = tocopy._type;
    _xp = tocopy._xp;
    return *this;
}

Water::~Water() {
}

AMateria* Water::clone() const {
    Water *cpy = new Water(*this);
	return (cpy);
}

void Water::use(ICharacter& target) {
    AMateria::use(target);
    std::cout << "* waters " << target.getName() << " *" << std::endl;
}
