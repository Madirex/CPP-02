#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointValue(0) {}
Fixed::Fixed(const int value) : _fixedPointValue(value << _fractionalBits) {}
Fixed::Fixed(const float value) : _fixedPointValue(roundf(value * (1 << _fractionalBits))) {}
Fixed::Fixed(const Fixed &other) { *this = other; }
Fixed::~Fixed(void) {}

Fixed& Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->_fixedPointValue = other.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed &other) const { return this->_fixedPointValue > other.getRawBits(); }
bool Fixed::operator<(const Fixed &other) const { return this->_fixedPointValue < other.getRawBits(); }
bool Fixed::operator>=(const Fixed &other) const { return this->_fixedPointValue >= other.getRawBits(); }
bool Fixed::operator<=(const Fixed &other) const { return this->_fixedPointValue <= other.getRawBits(); }
bool Fixed::operator==(const Fixed &other) const { return this->_fixedPointValue == other.getRawBits(); }
bool Fixed::operator!=(const Fixed &other) const { return this->_fixedPointValue != other.getRawBits(); }

Fixed Fixed::operator+(const Fixed &other) const { return Fixed(this->toFloat() + other.toFloat()); }
Fixed Fixed::operator-(const Fixed &other) const { return Fixed(this->toFloat() - other.toFloat()); }
Fixed Fixed::operator*(const Fixed &other) const { return Fixed(this->toFloat() * other.toFloat()); }
Fixed Fixed::operator/(const Fixed &other) const { return Fixed(this->toFloat() / other.toFloat()); }

Fixed& Fixed::operator++(void)
{
	this->_fixedPointValue++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->_fixedPointValue++;
	return temp;
}

Fixed& Fixed::operator--(void)
{
	this->_fixedPointValue--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->_fixedPointValue--;
	return temp;
}

int	Fixed::getRawBits(void) const { return this->_fixedPointValue; }
void Fixed::setRawBits(int const raw) { this->_fixedPointValue = raw; }
float Fixed::toFloat(void) const { return static_cast<float>(this->_fixedPointValue) / (1 << _fractionalBits); }
int Fixed::toInt(void) const { return this->_fixedPointValue >> _fractionalBits; }

Fixed& Fixed::min(Fixed &a, Fixed &b) { return (a < b) ? a : b; }
const Fixed& Fixed::min(const Fixed &a, const Fixed &b) { return (a < b) ? a : b; }
Fixed& Fixed::max(Fixed &a, Fixed &b) { return (a > b) ? a : b; }
const Fixed& Fixed::max(const Fixed &a, const Fixed &b) { return (a > b) ? a : b; }

std::ostream& operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return out;
}
