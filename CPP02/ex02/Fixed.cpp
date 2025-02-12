/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:41:13 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/19 17:50:54 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : data(0), bits(8)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int input) : bits(8)
{
	data = (input << bits);
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float input_float) : bits(8)
{
	data = roundf(input_float * (1 << bits));
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : bits(8)
{
	// data = new int(*(other.data));
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	// delete data;
	// std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other2)
{
	// std::cout << "Assignation operator called" << std::endl;
	if (this != &other2)
		data = other2.getRawBits();
	return (*this);
}

// operator

bool Fixed::operator>(const Fixed &other) const
{
	return (this->data > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->data < other.getRawBits());
}

bool Fixed::operator>=(const Fixed &other) const
{
	return (this->data >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other) const
{
	return (this->data <= other.getRawBits());
}

bool Fixed::operator==(const Fixed &other) const
{
	return (this->data == other.getRawBits());
}

bool Fixed::operator!=(const Fixed &other) const
{
	return (this->data != other.getRawBits());
}

Fixed Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return ((a < b) ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((a < b) ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return ((a > b) ? a : b);
}

Fixed &Fixed::operator++()
{
	this->data++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed	temp;

	temp = *this;
	this->data++;
	return temp;
}

Fixed &Fixed::operator--()
{
	this->data--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed	temp;

	temp = *this;
	this->data--;
	return temp;
}

int Fixed::toInt(void) const
{
	return data >> bits;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(data) / (1 << bits);
}

void Fixed::setRawBits(int const raw)
{
	data = raw;
	// std::cout << "setRawBits member function called" << std::endl;
}
int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return data;
}
