/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:00:08 by smoreron          #+#    #+#             */
/*   Updated: 2024/10/09 01:00:09 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	//ClapTrap C("Fedir");
	FragTrap F("Fedir2");
	F.annonce();
	F.highFivesGuys();
	F.takeDamage(30);
	
	// ClapTrap clap("Clappy");

    // clap.attack("Enemy");
    // clap.takeDamage(5);
    // clap.beRepaired(3);


    // clap.takeDamage(10); 
    // clap.attack("Enemy");
    // clap.beRepaired(5);

    // ScavTrap scav("Scavvy");

    // scav.attack("Enemy");
    // scav.takeDamage(50);
    // scav.beRepaired(20);
    // scav.annonce();

	// scav.guardGate();

    // scav.takeDamage(100);
    // scav.attack("Enemy");
    // scav.beRepaired(50);

    return 0;
}

