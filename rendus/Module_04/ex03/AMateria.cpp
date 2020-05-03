#include "AMateria.hpp"

AMateria::AMateria() : _type(NULL), _xp(0) {

}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {

}

AMateria::AMateria(AMateria const &tocopy) {
    *this = tocopy;
}

AMateria &AMateria::operator=(AMateria const &tocopy) {
    this->_type = tocopy._type;
    this->_xp = tocopy._xp;
    return *this;
}

AMateria::~AMateria() {
}

std::string const &AMateria::getType() const {
    return _type;
}

unsigned int AMateria::getXP() const {
    return _xp;
}

void AMateria::use(ICharacter& target) {
    this->_xp += 10;
	(void)target;
}