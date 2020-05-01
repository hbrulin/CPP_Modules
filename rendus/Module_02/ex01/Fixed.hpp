#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
    
    int m_value;
    static const int BITS;

    public:
    Fixed();
    Fixed(const int i);
    Fixed(const float f);
    ~Fixed();
    Fixed(Fixed const &tocopy);
    Fixed &operator=(const Fixed &tocopy);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat() const;
    int toInt() const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &c);

#endif
