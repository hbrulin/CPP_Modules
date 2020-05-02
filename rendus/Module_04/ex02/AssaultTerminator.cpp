#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &tocopy) {
    *this = tocopy;
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
    std::cout << "I’ll be back ..." << std::endl;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &tocopy) {
	(void)tocopy;
    return *this;
}

ISpaceMarine* AssaultTerminator::clone() const {
    AssaultTerminator *cpy = new AssaultTerminator(*this);
	return (cpy);
}

void AssaultTerminator::battleCry() const {
    std::cout << "This code is unclean. Purify it !" << std::endl;
}

void AssaultTerminator::rangedAttack() const {
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
    std::cout << "* attaque with chainfists *" << std::endl;
}