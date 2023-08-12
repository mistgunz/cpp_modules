#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	data = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int intVal)
{
	std::cout << "Int constructor called" << std::endl;
	data = intVal * pow(2, bits);
}

Fixed::Fixed(const float floatVal)
{
	std::cout << "Float constructor called" << std::endl;
	data = roundf(floatVal * pow(2, bits));
}

Fixed &Fixed::operator=(const Fixed &number)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->data = number.data;
	return (*this);
}

int Fixed::toInt() const
{
	return (data / pow(2, bits));
}

float Fixed::toFloat() const
{
	return (float(data) / pow(2, bits));
}

std::ostream &operator<<(std::ostream &output, const Fixed &fixed)
{
	output << fixed.toFloat();
	return (output);
}

Fixed Fixed::operator+(const Fixed &other)
{
	Fixed sum(this->toFloat() + other.toFloat());
	return (sum);
}

Fixed Fixed::operator-(const Fixed &other)
{
	Fixed sub(this->toFloat() - other.toFloat());
	return (sub);
}

Fixed Fixed::operator*(const Fixed &other)
{
	Fixed mul(this->toFloat() * other.toFloat());
	return (mul);
}

Fixed Fixed::operator/(const Fixed &other)
{
	Fixed div(this->toFloat() / other.toFloat());
	return (div);
}

Fixed Fixed::operator++(int)
{
	Fixed rtn = *this;
	this->data++;
	return (rtn);
}

Fixed &Fixed::operator++()
{
	this->data++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed rtn = *this;
	this->data--;
	return (rtn);
}

Fixed &Fixed::operator--()
{
	this->data--;
	return (*this);
}

bool Fixed::operator>(const Fixed &number)
{
	return (this->data > number.data);
}

bool Fixed::operator<(const Fixed &number)
{
	return (this->data < number.data);
}

bool Fixed::operator<=(const Fixed &number)
{
	return (this->data <= number.data);
}

bool Fixed::operator>=(const Fixed &number)
{
	return (this->data >= number.data);
}

bool Fixed::operator==(const Fixed &number)
{
	return (this->data == number.data);
}

bool Fixed::operator!=(const Fixed &number)
{
	return (this->data != number.data);
}

Fixed &Fixed::min(Fixed &s1, Fixed &s2)
{
	if (s1.data > s2.data)
		return (s2);
	else
		return (s1);
}

Fixed &Fixed::max(Fixed &s1, Fixed &s2)
{
	if (s1.data < s2.data)
		return (s2);
	else
		return (s1);
}

const Fixed &Fixed::min(const Fixed &s1, const Fixed &s2)
{
	if (s1.data > s2.data)
		return (s2);
	else
		return (s1);	
}

const Fixed &Fixed::max(const Fixed &s1, const Fixed &s2)
{
	if (s1.data < s2.data)
		return (s2);
	else
		return (s1);	
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return data;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	data = raw;
}