/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:07:13 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/19 17:23:40 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
  private:
	int data;
	const int bits;

  public:
	Fixed();
	// Fixed(int value);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other2);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	int toInt() const;
	// int getData();
	~Fixed();
};

#endif