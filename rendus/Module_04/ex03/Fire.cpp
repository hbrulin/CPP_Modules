#include "Fire.hpp"

Fire::Fire() : AMateria("fire") {
}

Fire::Fire(Fire const &tocopy) : AMateria(tocopy._type) {
    *this = tocopy;
}

Fire &Fire::operator=(Fire const &tocopy) {
    _type = tocopy._type;
    _xp = tocopy._xp;
    return *this;
}

Fire::~Fire() {
}

AMateria* Fire::clone() const {
    Fire *cpy = new Fire(*this);
	return (cpy);
}

void Fire::use(ICharacter& target) {
    AMateria::use(target);
    std::cout << "* burns " << target.getName() << " *" << std::endl;
}
