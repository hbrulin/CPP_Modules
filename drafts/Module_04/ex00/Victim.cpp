#include "Victim.hpp"

Victim::Victim() : _name("noName") {
}

Victim::Victim(std::string name) : _name(name) {
    std::cout << "A random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim() {
    std::cout << "The victim " << this->_name << " died for no apparent reasons!" << std::endl;
}

Victim::Victim(Victim const &tocopy) {
    *this = tocopy;
    std::cout << "A random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim &Victim::operator=(const Victim &tocopy) {
    this->_name = tocopy._name;
    return *this;
}

std::string const &Victim::getName(void) const
{
	return (this->_name);
}

std::ostream &operator<<(std::ostream &out, Victim const &victim)
{
	out << "I'm " << victim.getName() << " and I like otters!" << std::endl;
	return (out);
}

void Victim::getPolymorphed() const {
    std::cout << this->_name << " was just polymorphed in a cute little sheep!" << std::endl;
}