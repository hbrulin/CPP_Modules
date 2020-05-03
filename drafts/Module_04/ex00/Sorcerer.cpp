#include "Sorcerer.hpp"

Sorcerer::Sorcerer() : _name("noName"), _title("noTitle") {
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer() {
    std::cout << this->_name << ", " << this->_title\
			<< ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &tocopy) {
    *this = tocopy;
    std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &tocopy) {
    this->_name = tocopy._name;
    this->_title = tocopy._title;
    return *this;
}

std::string const &Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string const &Sorcerer::getTitle(void) const
{
	return (this->_title);
}

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
	out << "I am " << sorcerer.getName() << ", "
		<< sorcerer.getTitle() << ", and I like ponies !" << std::endl;
	return (out);
}

void Sorcerer::polymorph(Victim const &victim) const
{
    victim.getPolymorphed();
}