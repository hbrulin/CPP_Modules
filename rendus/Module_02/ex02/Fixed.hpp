#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
    
    int m_value;
    static const int BITS;
    static const int POWER;

    public:
    Fixed();
    Fixed(const int i);
    Fixed(const float f);
    ~Fixed();
    Fixed(Fixed const &tocopy);
    Fixed &operator=(const Fixed &tocopy);
    int getRawBits(void) const; //renvoie valeur brute du nb a point fixe
    void setRawBits(int const raw); //set la valeur du nb a pt fixe
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

};

std::ostream &operator<<(std::ostream &out, const Fixed &c);
Fixed &min(Fixed &u, Fixed &v);
const Fixed &min(const Fixed &u, const Fixed &v);
Fixed & max(Fixed &u, Fixed &v);
const Fixed &max(const Fixed &u, const Fixed &v);

#endif
