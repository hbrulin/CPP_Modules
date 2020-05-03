#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
    private:
    
    std::string color;
    std::string maneColor;
    int         height;
    int         weight;

    public:

    void    jump();

};

Pony    *ponyOnTheHeap();
Pony    ponyOnTheStack();

#endif