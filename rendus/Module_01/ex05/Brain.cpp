#include "Brain.hpp"

Brain::Brain()
{
}

std::string   Brain::identify()const
{
    std::stringstream s;
    s << std::hex << std::showbase << (unsigned long)this;
    return s.str();
}