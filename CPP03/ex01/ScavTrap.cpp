/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:32:21 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 00:47:26 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string newName) : ClapTrap(newName)
{
	setName(newName);
	setPoins(100, 50, 20);
	std::cout << "ScavTrap " << newName << " constructed!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap is called!"  << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (getHit() <= 0)
	{
		std::cout << "ScavTrap " << getName() << " cannot attack because it has no hit points!" << std::endl;
		return ;
	}
	if (getEnergy() <= 0)
	{
		std::cout << "ScavTrap " << getName() << " cannot attack because it has no energy points!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << getName() << " attacks " << target
	<< " causing " << getDamage() << " points of damage !" << std::endl;
	setPoins(getHit(), getEnergy() - 1, getDamage());
}

void	ScavTrap::guardGate(void)
{
	std::cout << " ScavTrap is now in Gate keeper mode" << std::endl;
}