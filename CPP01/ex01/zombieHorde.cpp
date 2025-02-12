/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoreron <7353718@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:54:21 by smoreron          #+#    #+#             */
/*   Updated: 2024/09/19 01:45:01 by smoreron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Zombie* newZombie( std::string name )
// {
// 	Zombie *plus = new Zombie; 
// 	plus->setName(name);
// 	std::cout << "add NewName in func newZombie: " << name << std::endl;
// 	return plus;
// }


Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0) {
        std::cout << "Invalid number of zombies!" << std::endl;
        return nullptr;
    }
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
		//std::cout << "add NewName in func zombieHorde: " << name << " namber: " << i << std::endl;
	}
	return horde;
}

