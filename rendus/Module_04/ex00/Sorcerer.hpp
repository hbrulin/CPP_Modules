#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer {

    private:
    Sorcerer();

    protected:
    std::string _name;
    std::string _title;

    public:
    Sorcerer(std::string name, std::string title);
    ~Sorcerer();
    Sorcerer(Sorcerer const &tocopy);
    Sorcerer &operator=(const Sorcerer &tocopy);
    std::string const &getName(void) const;
    std::string const &getTitle(void) const;
    void polymorph(Victim const &) const;

};

std::ostream &operator<<(std::ostream &out, Sorcerer const &sorcerer);

#endif