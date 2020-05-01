#include "Fixed.hpp"

const int Fixed::BITS = 8;

Fixed::Fixed() : m_value(0)
{
}

Fixed::Fixed(const int i) : m_value(i << BITS)
{
}

Fixed::Fixed(const float f): m_value(roundf(f * (1 << BITS)))
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &tocopy) : m_value(tocopy.m_value)
{
    *this = tocopy;
}

Fixed &Fixed::operator=(const Fixed &tocopy)
{
    m_value = tocopy.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    return m_value;
}

void Fixed::setRawBits(int const raw)
{
    m_value = raw;
}

float Fixed::toFloat() const
{
    return float(m_value) / (double)(1 << BITS);
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
    Fixed val(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)b.getRawBits());
	val.setRawBits((tmp1 * tmp2) / (1 << BITS));
	return (val);
}

Fixed Fixed::operator/(Fixed const &b) {
   	Fixed val(*this);
	long tmp1, tmp2;

	tmp1 = ((long)this->getRawBits());
	tmp2 = ((long)b.getRawBits());
	val.setRawBits((tmp1 * (1 << BITS)) / tmp2);
	return (val);
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

Fixed &Fixed::min(Fixed &u, Fixed &v) { 
	return (u < v ? u : v); 
}

const Fixed &Fixed::min(const Fixed &u, const Fixed &v) { 
	return (u < v ? u : v); 
}
Fixed &Fixed::max(Fixed &u, Fixed &v) { 
	return (u > v ? u : v); 
}

const Fixed &Fixed::max(const Fixed &u, const Fixed &v) { 
	return (u > v ? u : v); 
}