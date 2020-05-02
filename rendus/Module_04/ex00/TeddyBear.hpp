#ifndef TEDDYBEAR_HPP
#define TEDDYBEAR_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class TeddyBear : virtual public Victim {

    private:
    TeddyBear() {};

    public:
    TeddyBear(std::string name);
    virtual ~TeddyBear();
    TeddyBear(TeddyBear const &tocopy);
    TeddyBear &operator=(const TeddyBear &tocopy);
    void getPolymorphed() const;

};

#endif