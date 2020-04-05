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
    return m_value + b.getRawBits();
}

Fixed Fixed::operator-(Fixed const &b) {
    return m_value - b.getRawBits();
}

Fixed Fixed::operator*(Fixed const &b) {
    return m_value * b.getRawBits(); //faut-il simplement faire ça?
}

Fixed Fixed::operator/(Fixed const &b) {
    return m_value / b.getRawBits(); //idem
}

Fixed Fixed::operator++(int) {
//je ne comprends pas
}

Fixed Fixed::operator++() {
    this->m_value++;
	return (*this);
}

Fixed Fixed::operator--(int) {
    //je ne comprends pas
}

Fixed Fixed::operator--() {
    this->m_value--;
	return (*this);
}

//renvoie référence valeur
const int &Fixed::min(const Fixed &a, const Fixed &b) {
    return a.m_value < b.getRawBits() ? a.m_value : b.getRawBits();
}

//renvoie référence classe
static Fixed &min(Fixed &a, Fixed &b) {
    return a.getRawBits() < b.getRawBits() ? a : b;
}

const int &Fixed::max(const Fixed &a, const Fixed &b) {
    return a.m_value > b.getRawBits() ? a.m_value : b.getRawBits();
}

static Fixed &max(Fixed &a, Fixed &b) {
    return a.getRawBits() > b.getRawBits() ? a : b;
}