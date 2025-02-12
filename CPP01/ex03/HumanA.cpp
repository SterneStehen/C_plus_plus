/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:05:59 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/19 02:30:28 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(const std::string &name, Weapon &Weapon) : humanAName(name), eqwipmentHumanA(Weapon)
{
}

HumanA::~HumanA()
{
}
void HumanA::attack() const
{
	std::cout << humanAName << " attacks with their " << eqwipmentHumanA.getType() << std::endl;
}
