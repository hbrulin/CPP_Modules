#include "TeddyBear.hpp"

TeddyBear::TeddyBear(std::string name) : Victim(name) {
    std::cout << "Yawn." << std::endl;
}

TeddyBear::~TeddyBear() {
    std::cout << "Bonne nuit" << std::endl;
}

TeddyBear::TeddyBear(TeddyBear const &tocopy) : Victim(tocopy._name) {
    *this = tocopy;
    std::cout << "Yawn." << std::endl;
}

TeddyBear &TeddyBear::operator=(const TeddyBear &tocopy) {
    this->_name = tocopy._name;
    return *this;
}

void TeddyBear::getPolymorphed() const {
    std::cout << this->_name << " was just polymorphed into a vampire!" << std::endl;
}