#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &tocopy) : Enemy(tocopy._HP, tocopy._type) {
    *this = tocopy;
    std::cout << "* click click click *" << std::endl;
}

RadScorpion &RadScorpion::operator=(const RadScorpion &tocopy) {
    this->_HP = tocopy._HP;
    this->_type = tocopy._type;
    return *this;
}