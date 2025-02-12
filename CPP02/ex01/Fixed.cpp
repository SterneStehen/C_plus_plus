/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:52:51 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/19 17:42:39 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() : data(0), bits(8)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int input): bits(8)
{
	data = (input << bits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float input_float): bits(8)
{
	data = roundf(input_float * (1 << bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	//delete data;
	std::cout << "Destructor called" << std::endl;

}

Fixed::Fixed(const Fixed& other): bits(8)
{
	
	//data = new int(*(other.data));
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	
}

Fixed& Fixed::operator=(const Fixed& other2)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &other2)
		data = other2.getRawBits();
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) 
{
    os << fixed.toFloat();
    return os;
}

void Fixed::setRawBits(int const raw)
{
	data = raw;
	//std::cout << "setRawBits member function called" << std::endl;
	
}
int Fixed::getRawBits(void) const
{
	
	//std::cout << "getRawBits member function called" << std::endl;
	return data;
}


int Fixed::toInt( void ) const
{
	return data >> bits;
}

float Fixed::toFloat( void ) const
{
	 return static_cast<float>(data) / (1 << bits);	
}


// void Fixed::ft_print ()
// {
// 	std::cout << "data = " << data << std::endl;
// }

// int main( void ) {
// Fixed a;
// Fixed const b( 10 );
// Fixed const c( 42.42f );
// Fixed const d( b );
// a = Fixed( 1234.4321f );
// std::cout << "a is " << a << std::endl;
// std::cout << "b is " << b << std::endl;
// std::cout << "c is " << c << std::endl;
// std::cout << "d is " << d << std::endl;
// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
// return 0;
// }
