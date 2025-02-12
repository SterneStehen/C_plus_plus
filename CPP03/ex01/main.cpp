/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:42:05 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 00:46:23 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	// ClapTrap clap("Clappy");
	// clap.attack("Enemy");
	// clap.takeDamage(5);
	// clap.beRepaired(3);
	// clap.annonce();
	// clap.takeDamage(10);
	// clap.attack("Enemy");
	// clap.beRepaired(5);

	
	ScavTrap scav("Scavvy");
	scav.attack("Enemy");
	scav.takeDamage(50);
	scav.beRepaired(20);
	scav.takeDamage(100);
	scav.attack("Enemy");
	scav.beRepaired(50);
	return (0);
}

// int main()
// {
// 	ClapTrap Vova("Vova");
// 	ClapTrap Sergii("Sergii");
// 	ScavTrap Andrey("Andrey");

// 	Vova.takeDamage(3);
// 	Vova.annonce();

// 	Sergii.attack("Vova");
// 	Vova.beRepaired(2);
// 	Vova.attack("Sergii");
// 	Vova.attack("Sergii");
// 	Andrey.beRepaired(5);
// 	Andrey.takeDamage(9);
// 	Andrey.annonce();
// 	Vova.takeDamage(9);

// 	return (0);
// }
