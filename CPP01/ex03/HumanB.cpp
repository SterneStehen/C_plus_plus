/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:37:52 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/19 02:39:13 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string &name) : humanBName(name), weapon(nullptr)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack() const
{
	if (weapon)
	{ // Проверяем, есть ли оружие
		std::cout << humanBName << " attacks with their " << weapon->getType() << std::endl;
	}
	else
	{
		std::cout << humanBName << " has no weapon to attack with!" << std::endl;
	}
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
