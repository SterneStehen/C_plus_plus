/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:01:18 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 00:33:32 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string newName) : Name(newName), hitPoint(10),
	energyPoints(10), attackDamage(0)
{
	std::cout << "Constructor " << newName << " is called!" << std::endl;
}


ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other) {
        Name = other.Name;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor " << Name << " is called!" << std::endl;
}

std::string ClapTrap::getName(void) const
{
	return (Name);
}

void ClapTrap::annonce(void)
{
	std::cout << Name << " hit points = " << hitPoint << " Energy points = " << energyPoints << " Attack damage = " << attackDamage << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (hitPoint <= 0)
	{
		std::cout << "ClapTrap " << Name << " cannot attack because it has no hit points!" << std::endl;
		return ;
	}
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << Name << " cannot attack because it has no energy points!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << Name << " attacks " << target << " causing " << attackDamage << " points of damage!" << std::endl;
	energyPoints--;
	takeDamage(1);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hitPoint -= amount;
	attackDamage += amount;
	if (hitPoint < 0)
		hitPoint = 0;
	std::cout << Name << " takes " << amount << " points of damage!" << std::endl;
	if (hitPoint <= 0)
	{
		std::cout << Name << " has been KILL!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoint <= 0)
	{
		std::cout << "ClapTrap " << Name << " cannot be repaired because it has no hit points!" << std::endl;
		return ;
	}
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << Name << " cannot be repaired because it has no energy points!" << std::endl;
		return ;
	}
	hitPoint += amount;
	attackDamage -= amount;
	energyPoints--;
	std::cout << Name << " is repaired by " << amount << " hit points!" << std::endl;
}
