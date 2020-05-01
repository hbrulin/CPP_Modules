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

    bool operator>(Fixed const &b) const;
	bool operator<(Fixed const &b) const;
	bool operator>=(Fixed const &b) const;
	bool operator<=(Fixed const &b) const;
	bool operator==(Fixed const &b) const;
	bool operator!=(Fixed const &b) const;

	Fixed operator+(Fixed const &b);
	Fixed operator-(Fixed const &b);
	Fixed operator*(Fixed const &b);
	Fixed operator/(Fixed const &b);

	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
    Fixed operator--();

	static Fixed &min(Fixed &u, Fixed &v);
	static const Fixed &min(const Fixed &u, const Fixed &v);
	static Fixed & max(Fixed &u, Fixed &v);
	static const Fixed &max(const Fixed &u, const Fixed &v);

};

std::ostream &operator<<(std::ostream &out, const Fixed &c);

#endif
