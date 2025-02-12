/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:29:58 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/19 17:37:34 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed
{
  private:
	int data;
	const int bits;

  public:
	Fixed();
	Fixed(const Fixed &other);

	Fixed(const int input);
	Fixed(float input_float);

	Fixed &operator=(const Fixed &other2);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
	// void ft_print ();

	~Fixed();
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif