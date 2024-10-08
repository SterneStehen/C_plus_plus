/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:35:37 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 15:15:17 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog()
{
	Animal::setType("Dog");
	std::cout << "craerted Dog class" << std::endl;
}

Dog::Dog(const Dog& other) {
    std::cout << "Dog copied" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other) {
    std::cout << "Dog assigned" << std::endl;
    if (this != &other) 
	{
        setType(other.getType());
    }
    return *this;
};


Dog::~Dog()
{
	std::cout << "destr Dog class" << std::endl;
}

// std::string Dog::getType() const{
// 	return Animal::getType;
// }

void Dog::makeSound() const
{
	std::cout << "Dog say Gav" << std::endl;
}
