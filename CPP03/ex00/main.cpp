/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:28:03 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 00:33:42 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Vova("Vova");
	ClapTrap Sergii("Sergii");

	Vova.attack("Sergii");
	Vova.takeDamage(3);

	Sergii.attack("Vova");
	Vova.beRepaired(2);
	Vova.attack("Sergii");
	Vova.attack("Sergii");
	Vova.takeDamage(9);

	return (0);
}