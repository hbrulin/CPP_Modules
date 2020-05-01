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

bool Fixed::operator>(Fixed const &b) const {
    return m_value > b.getRawBits();
}

bool Fixed::operator<(Fixed const &b) const {
    return m_value < b.getRawBits();
}

bool Fixed::operator>=(Fixed const &b) const {
    return m_value >= b.getRawBits();
}

bool Fixed::operator<=(Fixed const &b) const {
    return m_value <= b.getRawBits();
}

bool Fixed::operator==(Fixed const &b) const {
    return m_value == b.getRawBits();
}

bool Fixed::operator!=(Fixed const &b) const {
    return m_value != b.getRawBits();
}

Fixed Fixed::operator+(Fixed const &b) {
    Fixed ret;
    ret.setRawBits(this->m_value + b.getRawBits());
    return (ret);
}

Fixed Fixed::operator-(Fixed const &b) {
    Fixed ret;
    ret.setRawBits(this->m_value - b.getRawBits());
    return (ret);
}

Fixed Fixed::operator*(Fixed const &b) {
    Fixed ret;
    ret.setRawBits(this->m_value * b.getRawBits());
    return (ret);
}

Fixed Fixed::operator/(Fixed const &b) {
    Fixed ret;
    ret.setRawBits(this->m_value / b.getRawBits());
    return (ret);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed Fixed::operator++() {
    this->m_value++;
	return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed Fixed::operator--() {
    this->m_value--;
	return (*this);
}

Fixed &min(Fixed &u, Fixed &v) { 
	return (u < v ? u : v); 
}

const Fixed &min(const Fixed &u, const Fixed &v) { 
	return (u < v ? u : v); 
}
Fixed & max(Fixed &u, Fixed &v) { 
	return (u > v ? u : v); 
}

const Fixed & max(const Fixed &u, const Fixed &v) { 
	return (u > v ? u : v); 
}