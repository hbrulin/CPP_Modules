#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim {

    protected:
    std::string _name;

    public:
	Victim() {};
    Victim(std::string name);
    virtual ~Victim();
    Victim(Victim const &tocopy);
    Victim &operator=(const Victim &tocopy);
    std::string const &getName(void) const;
    void getPolymorphed() const;

};

std::ostream &operator<<(std::ostream &out, Victim const &Victim);

#endif