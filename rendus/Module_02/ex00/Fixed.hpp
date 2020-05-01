#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
    
    int m_value;
    static const int BITS;

    public:
    Fixed();
    ~Fixed();
    Fixed(Fixed &tocopy);
    Fixed &operator=(Fixed &tocopy);
    int getRawBits(void) const;
    void setRawBits(int const raw);

};

#endif
