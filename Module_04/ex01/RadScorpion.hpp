#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "iostream"
#include "string"
#include "Enemy.hpp"

class RadScorpion : virtual public Enemy {

    public:

    RadScorpion(); 
    virtual ~RadScorpion();
    RadScorpion(RadScorpion const &tocopy);
    RadScorpion &operator=(const RadScorpion &tocopy);
};

#endif