/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:39:43 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/19 02:13:32 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &newType) : type(newType)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(const std::string &newType)
{
	this->type = newType;
}
const std::string &Weapon::getType() const
{
	return (type);
}
