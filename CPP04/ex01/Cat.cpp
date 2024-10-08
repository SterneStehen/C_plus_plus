/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:55:22 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 14:52:30 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat()
{
	Animal::setType("Cat");
	this->brain = new Brain();
	std::cout << "craerted Cat class" << std::endl;
}

Cat::~Cat()
{
	std::cout << "destr Cat class" << std::endl;
	delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << "Cat say Mau" << std::endl;
}


Cat::Cat(const Cat& other): Animal(other) {
    std::cout << "Dog copied" << std::endl;
    this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << "Cat assigned" << std::endl;
    if (this != &other) { 
        this->setType(other.getType());
        *(this->brain) = *(other.brain);
    }
    return *this;
}