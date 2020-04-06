#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim {

    private:
    Victim(); //je le mets ici pour qu'il ne soit pas utilisé et qu'on soit obligé d'instancier avec param

    protected:
    std::string _name;

    public:
    Victim(std::string name);
    ~Victim();
    Victim(Victim const &tocopy);
    Victim &operator=(const Victim &tocopy);
    std::string const &getName(void) const;
    void getPolymorphed() const;

};

std::ostream &operator<<(std::ostream &out, Victim const &Victim);

#endif