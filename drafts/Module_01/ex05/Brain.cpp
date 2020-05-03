#include "Brain.hpp"

Brain::Brain()
{
}

std::string   Brain::identify()const
{
    std::stringstream s; //stream class to operate en strings. 
    //std::hex is an IO manipulator, it sets the basefield of the stream str to hex.
    //std::showbase is also an IO manipulator. It enables the showbase flag in the stream str. Ox.
    s << std::hex << std::showbase << (unsigned long)this;
    return s.str(); //the buffer is accessed directly as a string object, using member .str
}