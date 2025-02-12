/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 21:37:22 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 00:53:17 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


FragTrap::FragTrap(std::string newName): ClapTrap(newName){
	ClapTrap::setPoins(100, 100, 30);
	std::cout << "FragTrap Constructor  " << newName << " is called!" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor  " << ClapTrap::getName() << " is called!" << std::endl;
}
	
void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << ClapTrap::getName() << " requests a high five!" << std::endl;
}