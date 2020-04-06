#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : virtual public Victim {

    private:
    Peon();

    public:
    Peon(std::string name);
    ~Peon();
    Peon(Peon const &tocopy);
    Peon &operator=(const Peon &tocopy);
    //std::string const &getName(void) const;
    void getPolymorphed() const;

};

#endif