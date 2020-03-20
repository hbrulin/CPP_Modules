#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
    
    int m_value;
    static const int BITS; //can I do that?

    public:
    Fixed();
    ~Fixed();
    Fixed(Fixed &tocopy);
    Fixed &operator=(Fixed &tocopy);
    int getRawBits(void) const; //renvoie valeur brute du nb a point fixe
    void setRawBits(int const raw); //set la valeur du nb a pt fixe

};

#endif
