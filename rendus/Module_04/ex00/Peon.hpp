#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : virtual public Victim {

    private:
    Peon() {};

    public:
    Peon(std::string name);
    virtual ~Peon();
    Peon(Peon const &tocopy);
    Peon &operator=(const Peon &tocopy);
    void getPolymorphed() const;

};

#endif