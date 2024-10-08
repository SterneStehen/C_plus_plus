/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:33:54 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 15:16:28 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
private:
	//std::string type;
public:
	Dog(/* args */);
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	~Dog();
	
	void makeSound() const;
};

#endif