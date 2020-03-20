#include "Fixed.hpp"

const int Fixed::BITS = 8;
const int Fixed::POWER = 256;

Fixed::Fixed() : m_value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) : m_value(i << BITS) //decalage bits à gauche
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f): m_value(roundf(f * POWER))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &tocopy) : m_value(tocopy.m_value)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = tocopy;
}

Fixed &Fixed::operator=(const Fixed &tocopy)
{
    std::cout << "Assignation operator called" << std::endl;
    m_value = tocopy.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return m_value;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    m_value = raw;
}

float Fixed::toFloat() const
{
    return float(m_value) / POWER;
}

int Fixed::toInt() const
{
    return m_value >> BITS;
}

std::ostream &operator<<(std::ostream &out, const Fixed &c)
{
    return out << c.toFloat();
}