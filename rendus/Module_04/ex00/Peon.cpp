#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
    std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon const &tocopy) : Victim(tocopy._name) {
    *this = tocopy;
    std::cout << "Zog zog." << std::endl;
}

Peon &Peon::operator=(const Peon &tocopy) {
    this->_name = tocopy._name;
    return *this;
}

void Peon::getPolymorphed() const {
    std::cout << this->_name << " was just polymorphed in a pink pony!" << std::endl;
}