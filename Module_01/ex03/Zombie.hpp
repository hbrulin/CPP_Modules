#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{

    private:

    std::string m_name;
    std::string m_type;

    public:
    Zombie();
    Zombie(std::string type, std::string name);
    void    announce()const;

};


#endif